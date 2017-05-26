// endianness.h
//
// written by Thomas CARTON
//

#ifndef __CORE_ENDIANNESS_H__
#define __CORE_ENDIANNESS_H__


static inline unsigned short swap16(unsigned short x)
{
    return (x & 0x00FF) << 8 | (x & 0xFF00) >> 8;
}


#endif // __CORE_ENDIANNESS_H__
