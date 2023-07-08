# C-programming-language-exercises

This repository is a collection of exercises completed while working through the C Programming Language Book. The aim of these exercises is to build a solid understanding of programming fundamentals and enhance knowledge in areas such as pointers and memory management. This project provides an opportunity to gain hands-on experience with a procedural programming language that utilizes static type checking.

## Exercises

### Chapter 01

- [x] Detab program: `/chapter01/exercise_1-21.c`.
- [x] Comment remover: `/chapter01/exercise_1-23.c`.

### Chapter 02

- [x] Data Type Ranges: `/chapter02/exercise-2-1.c`.
- [x] Refactor `#readline` function to not use `&&` or `||` operators: `/chapter02/exercise-2-2.c`.
- [x] Convert string hexadecimal to integer: `/chapter02/exercise-2-3.c` (compile with command: `cc exercise-2-3.c -lm`).
- [x] Write an alternate version of `squeeze(s1, s2)`: `/chapter02/exercise-2.4.c`.
- [x] Write a version of `any(s1, s2)`: `/chapter02/exercise-2.5.c`.
- [x] Write a method `setbits(x,p,n,y)`: `/chapter02/exercise-2.6.c`.
- [x] Write a function `invert(x,p,n)`: `/chapter02/exercise-2.7.c`.
- [x] Write a function `rightrot(x, n)`: `/chapter02/exercise-2.8.c`.

## General Notes

Current Section is 2.8.

### Data Types

- **Char**: character - a single byte (8-bits).
- **Int**: natural integer size per machine (usually 16 bits).
- **Short**: short integer.
- **Long**: long integer.
- **Double**: double-precision floating point.

**Qualifiers**:
- Short (16 bits)
- Long (32 bits)

Example:

```c
short int i;    // long declaration
short i;        // int would typically be omitted as it's redundant
```

NOTE: **Signed** and **Unsigned** can be applied to char or any integer. They obey the laws of arithmetic modulo `2^n`, where `n` is the number of bits in the type.

### Constants

Constants refer to fixed values that the program may not alter during its execution, also known as literals.

**Integer Literals**:
- Whole, decimal, octal, or hexadecimal can be used.
- Examples: 
  - Integer constant: 1234
  - Long constant: 123l or 123L
  - Unsigned constant: 123u or 123U (can be modified with Long 123UL)
  - Float constant: 123.4f or 1e-2 (these are doubles)
  - Octal: 08
  - Hexadecimal: 0xFF
  - 0xFUL: Hexadecimal, Unsigned, Long constant (16)

**String Constant or Literal**:
- A sequence of zero or more characters surrounded by double quotes.

**Character Constant or Literal**:
- An integer that maps to the machine's character set (e.g., ASCII) and is written surrounded by single quotes.

**Enumeration Constant**:
- A list of constant integer values.
- The first name in an enum has value 0, then 1, and so on, unless specific values are specified.

### Arithmetic Operators

**Basics**:
- `+`, `-`, `*`, `/`

**Precedence**:
- `+` and `-` operators have the same precedence.
- `*` and `/` operators have higher precedence than the plus or minus.
- `==` or `!=` have higher precedence than assignment operations like `c = getchar()`.

### Type Conversions

If an operator has operands of different types, a small number of rules are used to convert them to a common type.

- Automatic conversions are from narrower operands to wider ones (e.g., integer to float to double).
- Converting an integer to float is done by using the `f + i` expression.

Explicit conversion can be forced ("coerced") in any expression using a unary operator called a **cast**. Example:

```c
float n;
int i;
i * (int)n; // Explicit coercion with casting

// sqrt expects a double, so we can use casting for this.
int i = 10;
sqrt((double)n);
```

### Bitwise Operators

Bitwise operators work with integral operands (short, int, long, char, signed, and unsigned).

- **Bitwise AND** (`&`): Performs a bitwise AND operation, where the result is 1 only when both bits are 1.
- **Bitwise OR (inclusive)** (`|`): Performs a bitwise OR operation, where the result is 1 when either bit is 1 or both bits are 1.
- **Bitwise OR (exclusive)** (`^`): Performs a bitwise OR operation, where the result is 1 when either bit is 1, but not both bits.
- **Bitwise NOT** (`~`): Performs a bitwise NOT operation, flipping each bit.
- **Left shift operator** (`<<`): Shifts the bits of the first operand to the left by the number of positions specified by the second operand. Trailing positions are filled with zeros. Equivalent to multiplication by `2^rightOperand`.
- **Right shift operator** (`>>`): Shifts the bits of the first operand to the right by the number of positions specified by the second operand. Leading positions are filled with zeros. Equivalent to division by `2^rightOperand`.

### Miscellaneous

- Double quotes enclose a word as a character constant.
- Arguments in C programming are passed by reference.
- **Definition** refers to the place where the variable is actually created or assigned storage.
- **Declaration** refers to the places where the nature of the variable is stated but no storage is allocated.
- Variables and constants are the basic data manipulated in a program. Declarations list the variables to be used. Operators specify what is to be done with them, and expressions combine the variables and constants to produce new values.
- **Signed** numbers are less than zero and/or greater than zero, while **unsigned** numbers are always positive or zero.

## Helpful Functions

Header: `ctype.h`
