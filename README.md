# C-programming-language-exercises
## Goal

Working through most of the exercises outlined in the C Programming Language Book.
- Build a better understanding of programming fundatmentals.
- Understand Pointers and memory management.
- Gain experience with a *procedural programming* and *static type* checking language.

## Exercises
### Chapter 01
- [x] Detab program:    `/chapter01/exercise_1-21.c`.
- [x] Comment remover:  `/chapter01/exercise_1-23.c`.
### Chapter 02
- [x] Data Type Ranges:                         `/chapter02/exercise-2-1.c`.
- [ ] Covert string hexadecmial to integer:     `/chapter02/exercise-2-2.c`.

## General Notes

### Data Types
**Char**  
: character - a single byte(8-bits).

**int**  
: *natural integer size per machine (usually 16bits).*

**short**  
: short integer.

**long**  
: long integer.

**double**  
: double-precision floating point.

**Qualifiers**
: *short (16bits)*
: *long  (32bits)*
```c
short int i;    // long declaration.
short i;        // int would typically be omitted as it's redundant.
```

NOTE: **Signed** and **Unsigned** may be applied to char or any integer. They obey the laws of arithmetic modulo `2^n`, where `n` is the number of bits in the type.
```c
/*
*   Char is equal to 8bits or 1byte
*   so 2^8 when calculating the size of a signed or unsigned int.
*   min_char = -()   
*/
```

## Constants
Refer to a **fixed** value that the program **may not** alter during it's execution, *aka* *literals*.

**Integer Literals**  
: *These can be whole, decimal, octal, or hexadecimal.*
```C
// Examples
/*
*   integer constant    1234;
*   long constant       123l or 123L; 
*   unsigned const      123u or 123U can be modified with Long 123UL;
*   float const         123.4f or 1e-2 these are doubles;
*   octal               08;
*   hexadecimal         0xFF;
*
*   0xFUL               Hexadecimal, Unsigned, Long constant. 16;
*/
```

**String Constant or Literal**  
:*is a sequence of zero or more characters surrounded by double quotes.*

**Character Constant or Literal**  
:*is a an integer, that maps to the machines character set i.e. ASCII and is written surrounded by single quotes.*

**Enumeration Constant**  
:*is a list of constant integer values.*
```c
// first name in an enum has value 0, then 1, and  so on.
// Unless specific values are specified.
enum boolean { NO, YES };
enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t' };
// The first name starts at 1 not 0; All subsequent names will increment FEB = 2, MAR = 3, and so on.
enum months { JAN = 1, FEB, MAR, APR, MAY, JUNE, JULY, AUG, SEPT, NOV, DEC };
```

## Arithmetic Operators
**Basics**  
:*+, -, *, /*

**Precedence**  
:*`+, -` operators are the same.*  
:*`*, /` - operators are higher than the plus or minus.*
:*`== or !=` is higher than assignment operations like `c = getchar()`* 

## Type Coversions
If an **operator** has different **operands** of different types a *small number of rulles* are used to convert those to a *common type*.

Converting an *integer* to *float* like with `f + i`.

*chars* remember are just integers mapped to the systems machine code so those are used freely with arithmetic expressions.

### Misc
- **double quotes** enclosed word is a **character constant**.
- Arguments in *C programming* are pass by reference
- **Definition** :*refers to the place where the variable is actually created or assigned storage.*
- **Declaration** :*refers to the places where the nature of the variable is stated but no storage is allocated.*
- **Variables and Constants** are the basic data manipulated in a program. **Declarations** list the variables to be used. **Operators** specify what is to be done with them, and **Expressions** combine the variables and constants to produce new values.
- **signed**  :*are number less than zero and/or greater than zero.*
- **unsigned**  :*are numbers always positive or zero.*

## Helpful Functions

```c
#include <ctype.h>
// tolower(c)

// isdigit(c)
```