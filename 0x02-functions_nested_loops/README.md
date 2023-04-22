# 0x02. C - Functions, nested loops

## Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)
- [C - Books and PDF's](../references) to check out and use as reference.

## Learning Objectives

- [What are nested loops and how to use them](what-are-nested-loops-and-how-to-use-them)
- [What is a function and how do you use functions](what-is-a-function-and-how-do-you-use-functions)
- [What is the difference between a declaration and a definition of a function](what-is-the-difference-between-a-declaration-and-a-definition-of-a-function)
- [What is a prototype](what-is-a-prototype)
- [Scope of variables](scope-of-variables)
- [What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89](what-are-the-gcc-flags--Wall--Werror--pedantic--Wextra--std=gnu89)
- [What are header files and how to to use them with #include](what-are-header-files-and-how-to-to-use-them-with-#include)

---

- ### What are nested loops and how to use them

In C, nested loops are loops within loops. They allow you to iterate through a set of data that is organized in a nested structure, such as a matrix or a two-dimensional array.

Here's an example of how to use nested loops in C:

```c
#include <stdio.h>

int main()
{
   int rows = 3, cols = 3;

   for(int i = 0; i < rows; i++)/* outer loop */
   {
      for(int j = 0; j < cols; j++) /* inner loop */
         printf("(%d, %d)\n", i, j);
   }
   return 0;
}
``` 

In this code, the outer loop iterates over the rows of the matrix, while the inner loop iterates over the columns. For each combination of `i` and `j`, the `printf` statement prints out the values of `i` and `j` in parentheses.

The output of this code would be:

```
(0, 0)
(0, 1)
(0, 2)
(1, 0)
(1, 1)
(1, 2)
(2, 0)
(2, 1)
(2, 2)
``` 

This is because the inner loop executes 3 times for each iteration of the outer loop.

---

- ### What is a function and how do you use functions

A function is a block of code that performs a specific task, and can be called or invoked from other parts of your program. Functions allow you to break down your code into smaller, more manageable pieces, making it easier to write, test, and maintain your code.

Here's an example of how to define and use a function in C:
```c
#include <stdio.h>

void greet(char *name)
{
    printf("Hello, %s!\n", name);
}

int main()
{
    char *name1 = "Alice";
    char *name2 = "Bob";
    greet(name1);
    greet(name2);
    return 0;
}
```
Output:
```
Hello, Alice!
Hello, Bob!
```

In this example, the `greet()` function takes a single argument `name` of type `char *`, which is a pointer to a string. The function prints a personalized greeting using the input `name`.
To declare a function in C, you typically start with the return type of the function (e.g., `void` for functions that don't return a value), followed by the name of the function, and any arguments it takes in parentheses. Here's an example:

```c
return_type function_name(argument_type argument_name)
{
    /* function body */ 
}
``` 
For example, the `greet()` function could be declared like this:

```c
void greet(char *name);
```
---

- ### What is the difference between a declaration and a definition of a function

In C, a declaration is used to inform the `compiler` that the function exists, so that the compiler can verify that the function is being used correctly.

Here's an example of a function declaration in C:
```c
int add(int x, int y);
``` 
This declares a function named `add` that takes two integer arguments and returns an integer.

On the other hand, a definition of a function is a statement that provides the full implementation of the function. A function definition includes the code that defines what the function does.

Here's an example of a function definition in C:
```c
int add(int x, int y)
{
    return x + y;
}
``` 

This defines a function named `add` that takes two integer arguments and returns their sum.

>**Summary:**
In summary, the difference between a declaration and a definition of a function in C is that a declaration provides information about the function (its name, return type, and argument types) without providing its implementation, while a definition provides the full implementation of the function.

---

- ### What is a prototype

A protoype is simply the declaration of the function
```c
int add(int x, int y);
``` 
The declaration followed by a `;`

---

- ### Scope of variables


In programming, the scope of a variable is the region of the program where the variable is visible and accessible. In other words, it defines the part of the program where the variable can be used and manipulated.

In C, there are three types of variable scope:

1.  Local scope: Variables declared inside a function have local scope, which means they are only visible and accessible within that function. Once the function completes its execution, the memory used by the local variable is released and the variable is destroyed.
    
2.  Global scope: Variables declared outside of any function have global scope, which means they are visible and accessible throughout the entire program. Global variables are initialized only once, at the start of the program, and remain in memory until the program terminates.
    
3.  Block scope: Variables declared inside a block, such as a for loop or an if statement, have block scope, which means they are visible and accessible only within that block. Once the block completes its execution, the memory used by the block variable is released and the variable is destroyed.

Here's an example to illustrate the scope of variables in C:

```c
#include <stdio.h>

int global_var = 10; /* Global variable */

void test_function() 
{
   int local_var = 20; /* Local variable */
   printf("Global variable = %d\n", global_var);
   printf("Local variable = %d\n", local_var);
}

int main()
{
   int block_var = 30; /* Block variable */ 
   printf("Global variable = %d\n", global_var);
   test_function();
   printf("Block variable = %d\n", block_var);
   return 0;
}
``` 

In this example, `global_var` has global scope and can be accessed from both `main` and `test_function`. `local_var` has local scope and can only be accessed within `test_function`. `block_var` has block scope and can only be accessed within `main`.

---

- ### What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`

The `gcc` flags `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, and `-std=gnu89` are used to set certain options and warning levels when compiling C code with the GCC compiler. Here's what each flag does:

-   `-Wall`: Shows all warning messages during compilation.
-   `-Werror`: Treats all warnings as errors.
-   `-pedantic`: Generates warnings for non-standard C language features.
-   `-Wextra`: Enables additional warning messages.
-   `-std=gnu89`: Specifies the C language standard to use during compilation as the GNU C dialect of the 1989 C standard.

Overall, these flags can help to ensure that code is written in a way that avoids errors, adheres to standards, and is easy to read and maintain.

---

- ### What are header files and how to to use them with `#include`


In C, when you use `#include` with double quotes (`""`), the preprocessor searches for the header file in the current directory first, before searching the standard system directories. This is in contrast to using angle brackets (`<>`), where the preprocessor only searches the standard system directories.

To include a header file in your C program, you use the `#include` preprocessor directive, like this:

```c
#include <header_file_name.h>  /* for system headers */ 
``` 
or
```c
#include "header_file_name.h"  /*for local headers*/
``` 

Here, `header_file_name` is the name of the header file you want to include, and `.h` is the file extension commonly used for C header files.

Once included, you can use the functions, variables, and other constructs declared in the header file in your program.

It's important to include all the necessary header files for your program to compile and execute without errors. In general, it's recommended to use `#include` with angle brackets for system headers and `#include` with double quotes for local headers to avoid potential conflicts.


---

## Tasks

- **Note** for all these challenges we will not be using global variables and any standard library.
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).
- We are allowed to use the prototype funtion [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
- All `*-main.c` files will be located in the [main](./tests) directory

---
<details>
<summary><a href="./0-putchar.c">0. _putchar</a></summary><br>


Write a program that prints `_putchar`, followed by a new line.

-   The program should return `0`

> Compile this way: 
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/1-main.c 0-putchar.c -o 0-putchar
> ```

> Run it with: `./0-putchar`

> Output:
> ```
>_putchar
>```


</details>

---

<details>
<summary><a href="./1-alphabet.c">1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</a></summary><br>
Write a function that prints the alphabet, in lowercase, followed by a new line.

-   Prototype: `void print_alphabet(void);`
-   You can only use `_putchar` twice in your code

> Main:
```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
```

> Compile this way: 
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/1-main.c 1-alphabet.c -o 1-alphabet
> ```

> Run it with: `./1-alphabet.c`

> Output:
> ```
>abcdefghijklmnopqrstuvwxyz
>```

</details>

---

<details>
<summary><a href="./2-print_alphabet_x10.c">2. 10 x alphabet</a></summary><br>

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

-   Prototype: `void print_alphabet_x10(void);`
-   You can only use `_putchar` twice in your code

> Main:
```c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
```

> Compile this way: 
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
> ```

> Run: `./2-alphabet_x10 `

>Output:
>```shell
>abcdefghijklmnopqrstuvwxyz
>abcdefghijklmnopqrstuvwxyz
>abcdefghijklmnopqrstuvwxyz
>abcdefghijklmnopqrstuvwxyz
>abcdefghijklmnopqrstuvwxyz
>abcdefghijklmnopqrstuvwxyz
>abcdefghijklmnopqrstuvwxyz
>abcdefghijklmnopqrstuvwxyz
>abcdefghijklmnopqrstuvwxyz
>abcdefghijklmnopqrstuvwxyz
>```

</details>

---

<details>

<summary><a  href="./3-islower.c">3. islower</a></summary><br>

Write a function that checks for lowercase character.

-   Prototype: `int _islower(int c);`
-   Returns `1` if `c` is lowercase
-   Returns `0` otherwise

FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.
>Main
```c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
```
> Compile this way: 
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/3-main.c 3-islower.c -o 3-islower
> ```

>Run it with: `./3-islower`

>Output:
>```shell
>011
>```

</details>

---

<details>

<summary><a  href="./4-isalpha.c">4. isalpha</a></summary><br>
  Write a function that checks for alphabetic character.

-   Prototype: `int _isalpha(int c);`
-   Returns `1` if `c` is a letter, lowercase or uppercase
-   Returns `0` otherwise

FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

>Main:
```c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
```
> Compile this way: 
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
> ```

>Run it with: `./4-isalpha`

>Output:
>```shell
>1110
>```

</details>

---

<details>

<summary><a  href="./5-sign.c">5. Sign</a></summary><br>

Write a function that prints the sign of a number.

-   Prototype: `int print_sign(int n);`
-   Returns `1` and prints `+` if `n` is greater than zero
-   Returns `0` and prints `0` if `n` is zero
-   Returns `-1` and prints `-` if `n` is less than zero

>Main:
```c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
```
> Compile this way: 
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
> ```

>Run it with: `./5-sign`

>Output:
>```shell
>+, 1
>0, 0
>+, 1
>-, /
>```

</details>

---

<details>

<summary><a  href="./6-abs.c">6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you</a></summary><br>
Write a function that computes the absolute value of an integer.

-   Prototype: `int _abs(int);`

FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.

>Main:
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
```

> Compile this way: 
> ```
>  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs
> ```

>Run it with: `./6-abs`

>Output:
>```shell
>1
>0
>1
>98
>```

</details>

---

<details>

<summary><a  href="./7-print_last_digit.c">7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important</a></summary><br>

Write a function that prints the last digit of a number.

-   Prototype: `int print_last_digit(int);`
-   Returns the value of the last digit

>Main:
```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
```

> Compile this way: 
> ```
>  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
> ```

>Run it with: `./7-last_digit`

>Output:
>```shell
>8044
>```

</details>

---

<details>

<summary><a  href="./8-24_hours.c">8. I'm federal agent Jack Bauer, and today is the longest day of my life</a></summary><br>

Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

-   Prototype: `void jack_bauer(void);`
-   You can listen to [this soundtrack](https://intranet.alxswe.com/rltoken/aNwRcWg7MPM1J2lYuuuBjA "this soundtrack") while coding :)

>Main:
```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
julien@ubuntu:~/0x02$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
julien@ubuntu:~/0x02$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
julien@ubuntu:~/0x02$ ./8-24 | wc -l
1440
julien@ubuntu:~/0x02$ 
```

> Compile this way: 
> ```
>  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
> ```

>Output:
>```shell
>julien@ubuntu:~/0x02$ ./8-24 | head
>00:00
>00:01
>00:02
>00:03
>00:04
>00:05
>00:06
>00:07
>00:08
>00:09
>julien@ubuntu:~/0x02$ ./8-24 | tail
>23:50
>23:51
>23:52
>23:53
>23:54
>23:55
>23:56
>23:57
>23:58
>23:59
>julien@ubuntu:~/0x02$ ./8-24 | wc -l
>1440
>```

</details>

---

<details>

<summary><a  href="./9-times_table.c">9. Learn your times table</a></summary><br>

Write a function that prints the 9 times table, starting with 0.

-   Prototype: `void times_table(void);`
-   Format: see example

>Main:
```c
julien@ubuntu:~/0x02$ cat 9-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
```
> Compile this way: 
> ```
>  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
> ```

>Output:
>```shell
>ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
>0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
>0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
>0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
>0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
>0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
>0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
>0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
>0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
>0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
>0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
>julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
>0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
>0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
>0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
>0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
>0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
>0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
>0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
>0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
>0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
>0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
>``` 
</details>

---

<details>
<summary><a  href="./10-add.c">10. a+b</a></summary><br>

Write a function that adds two integers and returns the result.

-   Prototype: `int add(int, int);`

>Main:
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x02$ ./10-add 
98
```
  > Compile this way:
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add
> ```

>Output:
>```shell
>julien@ubuntu:~/0x02$ ./10-add 
>98
>```
</details>

---

<details>
<summary><a  href="./11-print_to_98.c">11. 98 Battery Street, the OG</a></summary><br>
Write a function that prints all natural numbers from `n` to `98`, followed by a new line.

-   Prototype: `void print_to_98(int n);`
-   Numbers must be separated by a comma, followed by a space
-   Numbers should be printed in order
-   The first printed number should be the number passed to your function
-   The last printed number should be `98`
-   You are allowed to use the standard library

>Main:
```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
```
> Compile this way:
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98
> ```

>Output:
>```shell
> julien@ubuntu:~/0x02$ ./11-98 
>0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26,  27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48,49,  50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,72,  73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,95,  96, 97, 98
>98
>111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
>81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
>-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
>```
</details>

---

<details>

<summary><a  href="./100-times_table.c">12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself</a></summary><br>
Write a function that prints the `n` times table, starting with 0.

-   Prototype: `void print_times_table(int n);`
-   If `n` is greater than `15` or less than `0` the function should not print anything
-   Format: see example

```c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
}
```
>Output:
>```
>julien@ubuntu:~/0x02$ ./100-times_table
>0,   0,   0,   0
>0,   1,   2,   3
>0,   2,   4,   6
>0,   3,   6,   9
>
>0,   0,   0,   0,   0,   0
>0,   1,   2,   3,   4,   5
>0,   2,   4,   6,   8,  10
>0,   3,   6,   9,  12,  15
>0,   4,   8,  12,  16,  20
>0,   5,  10,  15,  20,  25
>
>
>0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
>0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
>0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
>0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
>0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
>0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
>0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
>0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
>0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
>0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
>0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
>0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
>0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
>julien@ubuntu:~/0x02$ ./100-times_table | tr ' ' . | cat -e
>0,...0,...0,...0$
>0,...1,...2,...3$
>0,...2,...4,...6$
>0,...3,...6,...9$
>$
>0,...0,...0,...0,...0,...0$
>0,...1,...2,...3,...4,...5$
>0,...2,...4,...6,...8,..10$
>0,...3,...6,...9,..12,..15$
>0,...4,...8,..12,..16,..20$
>0,...5,..10,..15,..20,..25$
>$
>$
>0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
>0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
>0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
>0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
>0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
>0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
>0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
>0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
>0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
>0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
>0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
>0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
>0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
>```

> Compile this way:
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
> ```
</details>

---

<details>

<summary><a  href="./101-natural.c">13. Nature made the natural numbers; All else is the work of women</a></summary><br>

If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.

-   You are allowed to use the standard library

> Compile this way:
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-natural.c -o 101-natural
> ```

</details>

---

<details>

<summary><a  href="./102-fibonacci.c">14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A</a></summary><br>

Write a program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.

-   The numbers must be separated by comma, followed by a space `,`
-   You are allowed to use the standard library

> Compile this way:
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-fibonacci.c -o 102-fibonacci
> ```

</details>

---

<details>

<summary><a  href="./103-fibonacci.c">15. Even Liber Abbaci</a></summary><br>

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with `1` and `2`, the first 10 terms will be: `1, 2, 3, 5, 8, 13, 21, 34, 55, 89`. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

-   You are allowed to use the standard library

> Compile this way:
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-fibonacci.c -o 103-fibonacci
> ```

</details>

---

<details>

<summary><a  href="./104-fibonacci.c">16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+</a></summary><br>

Write a program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.

-   The numbers should be separated by comma, followed by a space `,`
-   You are allowed to use the standard library
-   You are not allowed to use any other library (You can’t use `GMP` etc…)
-   You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
-   You are not allowed to hard code any Fibonacci number (except for `1` and `2`)

> Compile this way:
> ```
> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-fibonacci.c -o 104-fibonacci
> ```

</details>
