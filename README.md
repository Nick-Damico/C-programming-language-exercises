# C-programming-language-exercises
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
- [x] Refactor #readline function to not use `&&` or `||` operators:     `/chapter02/exercise-2-2.c`.
- [x] Covert string hexadecmial to integer:     `/chapter02/exercise-2-3.c`.
  - compile with command: `cc exercise-2-3.c -lm`
- [x] Write an alternate version of `squeeze(s1, s2)`:  `/chapter02/exercise-2.4.c`
- [x] Write a version of `any(s1, s2)`:  `/chapter02/exercise-2.5.c`
- [x] Write a method `setbits(x,p,n,y)`:  `/chapter02/exercise-2.6.c`
- [x] Write a function `invert(x,p,n)`:  `/chapter02/exercise-2.7.c`
- [x] Write a function `rightrot(x, n)`:  `/chapter02/exercise-2.8.c`

## General Notes

Current Section is 2.8.

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

- Automatic conversions are narrower operands to wider ones. Integer to Float -> Float to Double.
- 
Converting an *integer* to *float* like with `f + i`.

Check out the **standard header `<ctype.h>`, a family of functions that provide tests and coversion functions.
NOTE: *chars* remember are just integers mapped to the systems machine code so those are used freely with arithmetic expressions.

\*\*The main reason for using **float** is to save storage in large arrays, or, less often, to save time on machines where double-precision arithmetic is particularly expensive.

\*\*Arguments of a function call are expressions, so type conversions also take place when args are passed to a function.

\*\*Explicit conversion can be force ("coerced") in any expression, with a unary operator called a **cast**. Example:
```c
float n;
int i;
i * (int)n; // Explicit coercing with casting.

// sqrt expects a double we can use casting for this.
int i = 10;
sqrt((double) n);
```
# Bitwise Operators
Only ally to integral operands, operands are the left-hand, right-hand values of an operation.
short, int, long, char signed and unsigned.

**What is a bitwise operator?**
  : Does bitwise manipulation.

**What is bitwise AND**
  : And takes two numbers and perform bitwise AND, result is 1 when both bits are 1.
  : Result is 1 when both bits are 1.

**What is bitwise OR (inclusive)**
  : And takes two numbers and perform bitwise AND
  : Either A is 1, or B is 1, or both are 1, the output is 1. Includes both values. 

**What is bitwise OR (exclusive)**
  : And takes two numbers and perform bitwise AND
  : Either A is 1 or B is 1 then output is 1 but when A and B are 1 then output is 0. Excluding Both.
  : For Example: `7(0000 0111) ^ 4(0000 0100) == 3(0000 0011)`

```c
int a = 4, b = 3;
a(7(0000 0111)) == 4(0000 0100) ^ 3(0000 0011)
b(4(0000 0100)) == 7(0000 0111) ^ 3(0000 0011)
a(3(0000 0011)) == 7(0000 0111) ^ 4(0000 0100)
a == 3
b == 4
```
1(0001) & 2(0010) -> 0000

**What is bitwise NOT**
  : Unary because only one operand is needed.
  : Result 1 == 0.
  : Result 0 == 1.
  : Example: ~7 == 8
  ```c
    7 -> 0111
    8 -> 1000
    ---------
    ~7 == 1000 -> 8
  ```

**What is left shift operator?**
  : Require 2 operands.
  : First Operand( whose bits get left shifted.)
  : Second Operand( Decides the number of places to shift the bits.)
  : When bits are shifted left trailing positions are filled with zeros.
  : Is equivalent to multiplication by `2^rightOperand`
  ```c
  char var 3; // (0000 0011)
  var<<1      // Left shift by 1 -> (0000 0011) -shift-> (0000 0110) == 6.
  /*
  * Using the multiplication above [leftOperand * 2^rightOperand]
  *                                [3 * 2^1] == 6
  */
  ```

**What is right shift operator?**
  : Require 2 operands.
  : First Operand( whose bits get right shifted.)
  : Second Operand( Decides the number of places to shift the bits.)
  : When bits are shifted left leading positions are filled with zeros.
  : Is equivalent to division by the `2^rightOperand`
  ```c
  char var 3;
  var>>1; 
  /*
  * [3 / 2^1] -> 3
  *
  * Example: 2.
  * var = 32;
  * var >> 4;
  * [32 / 2^4] -> [32 / 16] -> 2;
  */
  ```

**What is the difference between bitwise operators?**
  : Bitwise operators perform the bitwise operation on the operands or in the case of NOT on a single operand.
  : With logical it evaluates the operands values separately as truthy or falsey.

```c
&   // bitwise AND
|   // bitwise inclusive OR
^   // bitwise exclusive OR aka XOR
<<  // bitwise left shift
>>  // bitwise right shift
~   // bitwise one's complement (unary)
```

### Misc
- **double quotes** enclosed word is a **character constant**.
- Arguments in *C programming* are pass by reference
- **Definition** :*refers to the place where the variable is actually created or assigned storage.*
- **Declaration** :*refers to the places where the nature of the variable is stated but no storage is allocated.*
- **Variables and Constants** are the basic data manipulated in a program. **Declarations** list the variables to be used. **Operators** specify what is to be done with them, and **Expressions** combine the variables and constants to produce new values.
- **signed**  :*are number less than zero and/or greater than zero.*
- **unsigned**  :*are numbers always positive or zero.*

## Helpful Functions

Header  : `ctype.h`
