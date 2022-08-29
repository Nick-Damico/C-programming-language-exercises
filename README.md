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
- [x] Data Type Ranges:    `/chapter02/exercise-2-1.c`.
- [x] ???:    `/chapter02/exercise-2-2.c`.

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

### Misc
- **double quotes** enclosed word is a **character constant**.
- Arguments in *C programming* are pass by reference
- **Definition** :*refers to the place where the variable is actually created or assigned storage.*
- **Declaration** :*refers to the places where the nature of the variable is stated but no storage is allocated.*
- **Variables and Constants** are the basic data manipulated in a program. **Declarations** list the variables to be used. **Operators** specify what is to be done with them, and **Expressions** combine the variables and constants to produce new values.
- **signed**  :*are number less than zero and/or greater than zero.*
- **unsigned**  :*are numbers always positive or zero.*