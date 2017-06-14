// error.h
//
// written by Thomas CARTON
//

#ifndef __CORE_ERROR_H__
#define __CORE_ERROR_H__


typedef enum
{
    kErrorNone = 0,

    kErrorGeneric,
    kErrorParameter,
    kErrorNothing,
    kErrorMemory,
    kErrorFormat,

    kErrorFile = 0x0300,
    kErrorFileCreate,
    kErrorFileOpen,
    kErrorFileRead,
    kErrorFileWrite,

    kErrorImage = 0x0400,
    kErrorImageFormat,

    kErrorSize = 0x7FFF
} Error;


#endif // __CORE_ERROR_H__
