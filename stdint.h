#ifndef STDINT_H
#define STDINT_H

typedef int bool;
#define true 1
#define false 0

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int int16_t;
typedef unsigned short int uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;

#define NULL ((void*) 0)

#endif
