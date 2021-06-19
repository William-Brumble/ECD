#ifndef DATA_TYPES_H
#define DATA_TYPES_H

/* Table C-6.1 Identification Codes and Descriptions of Elementary Data Types */

typedef _Bool BOOL;                 // Logical Boolean with values TRUE and FALSE
typedef signed char SINT;           // Signed 8-bit integer value
typedef signed short INT;           // Signed 16-bit integer value
typedef signed long DINT;           // Signed 32-bit integer value
typedef signed long long LINT;      // Signed 64-bit integer value
typedef unsigned char USINT;        // Unsigned 8-bit integer value
typedef unsigned short UINT;        // Unsigned 16-bit integer value
typedef unsigned long UDINT;        // Unsigned 32-bit integer value
typedef unsigned long long ULINT;   // Unsigned 64-bit integer value
typedef float REAL;                 // 32-bit floating point value
typedef double LREAL;               // 64-bit floating point value
typedef char BYTE;                  // bit string - 8-bits
typedef short WORD;                 // bit string - 16-bits
typedef long DWORD;                 // bit string - 32-bits
typedef long long LWORD;            // bit string - 64-bits

#endif /* DATA_TYPES_H */
