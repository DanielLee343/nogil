#ifndef Py_INTERNAL_OBJECT_H
#define Py_INTERNAL_OBJECT_H
#ifdef __cplusplus
extern "C" {
#endif

#ifndef Py_BUILD_CORE
#  error "this header requires Py_BUILD_CORE define"
#endif

#include "pycore_pystate.h"   /* _PyRuntime.gc */
#include "pycore_gc.h"

PyAPI_FUNC(int) _PyType_CheckConsistency(PyTypeObject *type);
PyAPI_FUNC(int) _PyDict_CheckConsistency(PyObject *mp, int check_content);
PyAPI_FUNC(void) _PyObject_Dealloc(PyObject *self);

#ifdef Py_REF_DEBUG
extern void _PyDebug_PrintTotalRefs(void);
#endif

#ifdef Py_TRACE_REFS
extern void _Py_AddToAllObjects(PyObject *op, int force);
extern void _Py_PrintReferences(FILE *);
extern void _Py_PrintReferenceAddresses(FILE *);
#endif

static inline void
_PyObject_SET_DEFERRED_RC(PyObject *op)
{
	assert(_Py_ThreadLocal(op) && "non thread-safe call to _PyObject_SET_DEFERRED_RC");
	op->ob_ref_local |= _Py_REF_DEFERRED_MASK;
}


#ifdef __cplusplus
}
#endif
#endif /* !Py_INTERNAL_OBJECT_H */
