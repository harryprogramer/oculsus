#ifdef _WIN32
#include <windows.h>
#endif

#include "time.h"

#ifdef _WIN32
/**
 * Win32 time utils defintion
 */


void oclGetTime_win32(ocl_time* time){
    SYSTEMTIME t;
    GetLocalTime(&t);

    time -> seconds =   t.wSecond;
    time -> minutes =   t.wMinute;
    time -> hours  =    t.wHour;
    time -> days =      t.wDay;
    time -> month =     t.wMonth;
    time -> year =      t.wYear;
}

void oclGetSystemTime_win32(ocl_time* time){
    SYSTEMTIME t;
    GetSystemTime(&t);

    time -> seconds =   t.wSecond;
    time -> minutes =   t.wMinute;
    time -> hours  =    t.wHour;
    time -> days =      t.wDay;
    time -> month =     t.wMonth;
    time -> year =      t.wYear;
}
#endif

NONE oclGetTime(ocl_time* time){

#ifdef _WIN32
    oclGetTime_win32(time);                                                 
#elif __linux
#error unix platform not support yet.
#else
#error not support platform
#endif

}

NONE oclGetSystemTime(ocl_time* time){

#ifdef _WIN32
    oclGetSystemTime_win32(time);
#elif __linux
#error unix platform not support yet.
#else
#error not support platform
#endif
}