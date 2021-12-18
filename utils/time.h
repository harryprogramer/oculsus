#ifndef OCL_TIME
#define OCL_TIME

#include "../utypes.h"

typedef struct _ocl_time_t {
    OCLushort seconds;
    OCLushort minutes;
    OCLushort hours;
    OCLushort days;
    OCLushort month;
    OCLushort year;
} ocl_time;

NONE oclGetSystemTime(ocl_time* time);

NONE oclGetLocalTime(ocl_time* time);

#endif