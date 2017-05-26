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
    kErrorMemory,

    kErrorFile = 0x0100,
    kErrorFileOpen,
    kErrorFileRead,
    kErrorFileWrite,

	kErrorImage = 0x0400,
	kErrorImageFormat,

	kErrorSize = 0x7FFF
} Error;


#endif // __CORE_ERROR_H__
