#ifndef Py_BOOKKEEP_H
#define Py_BOOKKEEP_H
#include "pystate.h"
#include "pyport.h"
#ifdef __cplusplus
extern "C"
{
#endif

#undef CUCKOO_TABLE_NAME
#undef CUCKOO_KEY_TYPE
#undef CUCKOO_MAPPED_TYPE
#include "curHeats.h"
    typedef struct
    {
        unsigned int sample_dur;
        FILE *fd;
        unsigned int doIO;
        int rescan_thresh;
        PyThreadState *mainThreadState;
    } BookkeepArgs;
    extern BookkeepArgs bookkeepArgs;
    PyAPI_DATA(BookkeepArgs) bookkeepArgs;

    typedef struct all_objs_struct
    {
        Py_ssize_t allocated_blocks;
        cur_heats_table *table;
    } all_objs_struct;

#ifdef __cplusplus
}
#endif
#endif /* !Py_BOOKKEEP_H */