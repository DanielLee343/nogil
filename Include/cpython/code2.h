#ifndef Py_CPYTHON_CODE_H
#  error "this header file must not be included directly"
#endif

/* Definitions for bytecode */

PyAPI_DATA(PyTypeObject) PyCode2_Type;

#define PyCode2_Check(op) (Py_TYPE(op) == &PyCode2_Type)

enum {
    // number of arguments excluding keyword-only args, *args, and **kwargs
    // if more than 255 arguments, this value is zero and the overflow bit
    // is set.
    CODE_MASK_ARGS          = 0x000000ff, // bits 0-7

    // bits 8-15 are always zero in code (keyword arguments in acc)
    CODE_FLAG_UNUSED_1      = 0x0000ff00, // bits 8-15 always zero

    // set if the function has a *args parameter
    CODE_FLAG_VARARGS       = 0x00010000, // bit  16

    CODE_FLAG_UNUSED_2      = 0x00020000, // bit  17 always zero

    // set if the function has a **kwargs parameter
    CODE_FLAG_VARKEYWORDS   = 0x00040000, // bit  18

    // set if the code has cell variables (i.e. captured by other functions)
    CODE_FLAG_HAS_CELLS     = 0x00080000, // bit  19

    // set if the code has free (captured) variables
    CODE_FLAG_HAS_FREEVARS  = 0x00100000, // bit  20

    // set if there are ANY keyword only arguments
    CODE_FLAG_KWD_ONLY_ARGS = 0x00200000, // bit  21

    // set if there more than 255 arguments
    CODE_FLAG_OVERFLOW      = 0x00400000, // bit  22

    // set if the function uses a locals dict (in regs[0])
    CODE_FLAG_LOCALS_DICT   = 0x00800000, // bit  23

    // set if the function is a generator, coroutine, or async generator
    CODE_FLAG_GENERATOR     = 0x01000000, // bit  24
};

enum {
    /* number of positional arguments */
    ACC_MASK_ARGS           = 0x0000ff,  // bits 0-7

    /* number of keyword arguments in call */
    ACC_MASK_KWARGS         = 0x00ff00,  // bits 8-15

    ACC_SHIFT_KWARGS        = 8,

    /* set if the caller uses *args */
    ACC_FLAG_VARARGS        = 0x010000,  // bit  16

    /* set if the caller uses **kwargs */
    ACC_FLAG_VARKEYWORDS    = 0x020000,  // bit  17
};

enum {
    CORO_HEADER_GENERATOR = 1,
    CORO_HEADER_COROUTINE = 2,
    CORO_HEADER_ASYNC_GENERATOR = 3
};;

#define ACC_KWCOUNT(acc) (((acc.as_int64) & ACC_MASK_KWARGS) >> ACC_SHIFT_KWARGS)
#define ACC_ARGCOUNT(acc) ((acc.as_int64) & ACC_MASK_ARGS)

struct _PyHandlerTable;
struct _PyJumpSideTable;

typedef struct PyCodeObject2 {
    PyObject_HEAD
    uint32_t co_packed_flags;
    int co_flags; // unused???
    Py_ssize_t co_argcount;     /* number of arguments excluding kwd-only, *args, and **kwargs */
    Py_ssize_t co_nlocals;      /* number of local variables (including arguments) */

    Py_ssize_t co_ndefaultargs;
    Py_ssize_t co_posonlyargcount;
    Py_ssize_t co_totalargcount; /* number of arguments including kwd-only, but not *args and **kwargs */

    Py_ssize_t co_framesize;    /* maximum stack usage */
    Py_ssize_t co_size;         /* size of instructions (in bytes) */
    Py_ssize_t co_nconsts;      /* number of constants */
    Py_ssize_t co_ncells;
    Py_ssize_t co_nfreevars;    /* number of captured free variables (including default args) */

    PyObject **co_constants;    /* pointer to constants array */
    Py_ssize_t *co_cell2reg;
    Py_ssize_t *co_free2reg;

    struct _PyHandlerTable *co_exc_handlers;
    struct _PyJumpSideTable *co_jump_table;

    PyObject *co_weakreflist;
    /* Scratch space for extra data relating to the code object.
       Type is a void* to keep the format private in codeobject.c to force
       people to go through the proper APIs. */
    void *co_extra;

    Py_ssize_t co_nmeta;
    int co_firstlineno;
    PyObject *co_varnames;      /* tuple of strings (local variable names) */
    PyObject *co_freevars;      /* tuple of strings (free variable names) */
    PyObject *co_cellvars;      /* tuple of strings (cell variable names) */
    PyObject *co_filename;      /* unicode (where it was loaded from) */
    PyObject *co_name;          /* unicode (name, for reference) */
    PyObject *co_lnotab;        /* string (encoding addr<->lineno mapping) See */
} PyCodeObject2;

// PyAPI_FUNC(PyCodeObject2 *) PyCode2_New(PyObject *bytecode, PyObject *consts);
PyAPI_FUNC(PyCodeObject2 *)
PyCode2_New(Py_ssize_t instr_size, Py_ssize_t nconsts,
            Py_ssize_t nmeta, Py_ssize_t ncells, Py_ssize_t ncaptured,
            Py_ssize_t nexc_handlers, Py_ssize_t jump_table_size);

/* Creates a new empty code object with the specified source location. */
PyAPI_FUNC(PyCodeObject2 *)
PyCode2_NewEmpty(const char *filename, const char *funcname, int firstlineno);

/* Return the line number associated with the specified bytecode index
   in this code object.  If you just need the line number of a frame,
   use PyFrame_GetLineNumber() instead. */
PyAPI_FUNC(int) PyCode2_Addr2Line(PyCodeObject2 *, int);
PyAPI_FUNC(int) _PyCode2_CheckLineNumber(PyCodeObject2* co, int lasti, PyAddrPair *bounds);


PyAPI_FUNC(void) PyCode2_UpdateFlags(PyCodeObject2 *);
PyAPI_FUNC(int) _PyCode_InternConstants(PyCodeObject2 *);

#define PyCode2_GET_CODE(co) (PyCode2_Code((PyCodeObject2 *)(co)))
#define PyCode2_FROM_FUNC(func) (PyCode2_FromInstr(((PyFuncBase *)func)->first_instr))

static inline uint8_t *
PyCode2_Code(PyCodeObject2 *code)
{
    return (uint8_t *)((char *)code + sizeof(PyCodeObject2));
}

static inline PyCodeObject2 *
PyCode2_FromInstr(const uint8_t *first_instr)
{
    return (PyCodeObject2 *)((char *)first_instr - sizeof(PyCodeObject2));
}

static inline PyCodeObject2 *
PyCode2_FromFunc(PyFunc *func)
{
    return PyCode2_FromInstr(func->func_base.first_instr);
}

static inline Py_ssize_t
PyCode2_NumFreevars(PyCodeObject2 *code)
{
    return code->co_nfreevars - code->co_ndefaultargs;
}

static inline Py_ssize_t
PyCode2_NumKwargs(PyCodeObject2 *code)
{
    return code->co_totalargcount - code->co_argcount;
}
