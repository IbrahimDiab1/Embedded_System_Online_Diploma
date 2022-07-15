
/******************************************************/
/** File Name   : Platform_Types.h    				  */
/** Author      : Ibrahim Diab						  */
/** Unit/Assign : Unit(3) Lesson (1) , Assignment (1) */
/******************************************************/

#ifndef Platform_Types_H_
#define platform_Types_H_

#define CPU_TYPE_8				8
#define CPU_TYPE_16				16
#define CPU_TYPE_32				32
#define MSB_FIRST				0
#define LSB_FIRST				1
#define HIGH_BYTE_FIRST0		0
#define LOW_BYTE_FIRST 			1

// boolean data type
typedef unsigned char boolean;

// integer data types
typedef signed char sint8;
typedef unsigned char uint8;
typedef signed short sint16;
typedef unsigned short uint16;
typedef signed int sint32;
typedef unsigned int uint32;
typedef signed long long sint64;
typedef unsigned long long uint64;

// real data types
typedef float float32;
typedef double float64;

// Volatile data types
typedef volatile signed char vsint8;
typedef volatile unsigned char vuint8;
typedef volatile signed short vsint16;
typedef volatile unsigned short vuint16;
typedef volatile signed int vsint32;
typedef volatile unsigned int vuint32;
typedef volatile signed long long vsint64;
typedef volatile unsigned long long vuint64;



#endif  // Platform_Types_H_
