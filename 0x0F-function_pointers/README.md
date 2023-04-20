
<h1  align='center'>0x0F-function_pointers<h1/>

  

##  About

This repository contains projects related to function pointers, which are a powerful tool in the C programming language. Function pointers allow you to write code that can dynamically call other functions based on runtime conditions. This can be extremely useful in a wide range of applications
Resources

## Resources

Read or watch:

-   [Function Pointer in C](https://intranet.alxswe.com/rltoken/yt8Q9jxzT_gyRAvnNkAgkw "Function Pointer in C")
    
-   [Pointers to functions](https://intranet.alxswe.com/rltoken/wP-yWvo9IqbcQsywMmh_iQ "Pointers to functions")
    
-   [Function Pointers in C / C++](https://intranet.alxswe.com/rltoken/dAN27S1yyBPeBa8RGfvPNA "Function Pointers in C / C++")
    
-   [why pointers to functions?](https://intranet.alxswe.com/rltoken/1vvWpH9Ux8axOLc9jPWcMw "why pointers to functions?")
    
-   [Everything you need to know about pointers in C](https://intranet.alxswe.com/rltoken/G_0lQzs4LAd1e5tKhNMPiw "Everything you need to know about pointers in C")

##  Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/ITYG4BLMI4_5Unpdwue2tw  "explain to anyone"), without the help of Google:

-  What are function pointers and how to use them

-  What does a function pointer exactly hold

-  Where does a function pointer point to in the virtual memory

## Function Pointers in C

A function pointer is a variable that stores the memory address of a function. When you declare a function pointer, you are creating a variable that can point to a function. Their declaration is easy: write the declaration as it would be for the function, say
```c
int func(int a, float b);
```
and simply put brackets around the name and a `*` in front of it: that declares the pointer. Because of precedence, if you don't parenthesize the name, you declare a function returning a pointer.
```c
/* function returning pointer to int */
int *func(int a, float b);

/* pointer to function returning int */
int (*func)(int a, float b);
```
There's a special syntax for declaring variables whose type is a function pointer.
```c
/* Pointer to a function */
int (*func)(int a, float b);

func_ptr = func;
/* or */
func_ptr = &func;

/* This pice of code above is similar to */
int (*func)(int a, float b) = func_ptr;
```
The following is a simple example that shows declaration and function call using function pointer.
```c
#include <stdio.h>
/* A normal function with an int parameter
and void return type
*/
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	/* fun_ptr is a pointer to function fun() */
	void (*fun_ptr)(int) = &fun;

	/* The above line is equivalent of following two
	void (*fun_ptr)(int);
	fun_ptr = &fun;
	*/

	// Invoking fun() using fun_ptr
	(*fun_ptr)(10);

	return 0;
}
```
[](https://www.geeksforgeeks.org/function-pointer-in-c/#main)


Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.  
For example, consider the following C program where wrapper() receives a void fun() as parameter and calls the passed function.
```c
// A simple C program to show function pointers as parameter

#include <stdio.h>

// Two simple functions

void  fun1() { printf("Fun1\n"); }

void  fun2() { printf("Fun2\n"); }

// A function that receives a simple function

// as parameter and calls the function

void  wrapper(void  (*fun)())

{

fun();

}

int  main()

{

wrapper(fun1);

wrapper(fun2);

return  0;

}
```

This point in particular is very useful in C. In C, we can use function pointers to avoid code redundancy. For example a simple [qsort()](http://www.cplusplus.com/reference/cstdlib/qsort/) function can be used to sort arrays in ascending order or descending or by any other order in case of array of structures. Not only this, with function pointers and void pointers, it is possible to use qsort for any data type.
```c
// An example for qsort and comparator

#include <stdio.h>

#include <stdlib.h>

// A sample comparator function that is used

// for sorting an integer array in ascending order.

// To sort any array for any other data type and/or

// criteria, all we need to do is write more compare

// functions. And we can use the same qsort()

int  compare (const  void  * a, const  void  * b)

{

return  ( *(int*)a - *(int*)b );

}

int  main ()

{

int  arr[] = {10, 5, 15, 12, 90, 80};

int  n = sizeof(arr)/sizeof(arr[0]), i;

qsort  (arr, n, sizeof(int), compare);

for  (i=0; i<n; i++)

printf  ("%d ", arr[i]);

return  0;

}
```
Output:

```
5 10 12 15 80 90
```

Similar to qsort(), we can write our own functions that can be used for any data type and can do different tasks without code redundancy. Below is an example search function that can be used for any data type. In fact we can use this search function to find close elements (below a threshold) by writing a customized compare function.

```c
#include <stdio.h>

#include <stdbool.h>

// A compare function that is used for searching an integer

// array

bool  compare (const  void  * a, const  void  * b)

{

return  ( *(int*)a == *(int*)b );

}

// General purpose search() function that can be used

// for searching an element *x in an array arr[] of

// arr_size. Note that void pointers are used so that

// the function can be called by passing a pointer of

// any type. ele_size is size of an array element

int  search(void  *arr, int  arr_size, int  ele_size, void  *x,

bool  compare (const  void  * , const  void  *))

{

// Since char takes one byte, we can use char pointer

// for any type/ To get pointer arithmetic correct,

// we need to multiply index with size of an array

// element ele_size

char  *ptr = (char  *)arr;

int  i;

for  (i=0; i<arr_size; i++)

return  i;

// If element not found

return  -1;

}

int  main()

{

int  arr[] = {2, 5, 7, 90, 70};

int  n = sizeof(arr)/sizeof(arr[0]);

int  x = 7;

printf  ("Returned index is %d ", search(arr, n,

sizeof(int), &x, compare));

return  0;

}
```
Output:

```
Returned index is 2
```

The above search function can be used for any data type by writing a separate customized compare().

## Tasks

<details>
<summary>
<a href="./0-print_name.c">0. What's my name</a>
</summary>

### 0\. What's my name
Write a function that prints a name.

-   Prototype: `void print_name(char *name, void (*f)(char *));`
```c
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name_as_is - prints a name as is
 * @name: name to print
 *
 * Return: void
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - prints a name in uppercase
 * @name: name to print
 *
 * Return: void
 */
void print_name_uppercase(char *name)
{
    int i;

    printf("Hello, my uppercase name is ");
    for (i = 0; name[i]; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            printf("%c", name[i] - 32);
        else
            printf("%c", name[i]);
    }
    printf("\n");
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_name.c -o 0-print_name`
> Output:
> ```shell
> $ ./0-print_name
> Hello, my name is Bob
> Hello, my uppercase name is BOB DYLAN
> ```

</details>

--- 

<details>
<summary>
<a href="./1-array_iterator.c">1. If you spend too much time thinking about a thing, you'll never get it done</a>
</summary>

### 1\. If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

-   Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
    
-   where `size` is the size of the array
    
-   and `action` is a pointer to the function you need to use

```c
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_elem - prints an integer
 * @elem: integer to print
 *
 * Return: void
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer in hexadecimal
 * @elem: integer to print
 *
 * Return: void
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, print_elem);
    printf("\n");
    array_iterator(array, 5, print_elem_hex);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-array_iterator.c -o 1-array_iterator`
> Output:
> ```shell
> $ ./1-array_iterator
> 0
> 98
> 402
> 1024
> 4096
> 
> 0x0
> 0x62
> 0x192
> 0x400
> 0x1000
> ```

</details>

---

<details>
<summary>
<a href="./2-int_index.c">2. To hell with circumstances; I create opportunities</a>
</summary>

### 2\. To hell with circumstances; I create opportunities


Write a function that searches for an integer.

-   Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
    
-   where `size` is the number of elements in the array `array`
    
-   `cmp` is a pointer to the function to be used to compare values
    
-   `int_index` returns the index of the first element for which the `cmp` function does not return `0`
    
-   If no element matches, return -1
    
-   If `size` <= 0, return -1

```c
#include "function_pointers.h"
#include <stdio.h>

/**
 * is_98 - checks if a number is equal to 98
 * @elem: integer to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_98(int elem)
{
    return (elem == 98);
}

/**
 * is_strictly_positive - checks if a number is greater than 0
 * @elem: integer to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};
    int index;

    index = int_index(array, 5, is_98);
    printf("%d\n", index);
    index = int_index(array, 5, is_strictly_positive);
    printf("%d\n", index);
    index = int_index(array, 5, NULL);
    printf("%d\n", index);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-int_index.c -o 2-int_index`
> Output:
> ```shell
> $ ./2-int_index
> 1
> 2
> -1
> ```

</details>

---

<details>
<summary>
<a href="./3-calc.h">3. A goal is not always meant to be reached, it often serves simply as something to aim at</a>
</summary>

### 3\. A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.
- You are allowed to use the standard library
- Usage: `calc num1 operator num2`
- You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
- `operator` is one of the following:
    - `+`: addition
    - `-`: subtraction
    - `*`: multiplication
    - `/`: division
    - `%`: modulo
- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an `int`
- If the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
- If the `operator` is none of the above, print `Error`, followed by a new line, and exit with the status `99`
- If the user tries to divide (`/` or `%`) by `0`, print `Error`, followed by a new line, and exit with the status `100`

This task requires that you create four different files.

- [`3-calc.h`](./3-calc.h) should contain all the function prototypes and data structures used by the program.
You can only use this structure:
```c
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

- [`3-op_functions.c`](./3-op_functions.c) should contain the 5 following functions (not more):
    - `op_add` that returns the sum of a and b. (prototype: `int op_add(int a, int b);`)
    - `op_sub` that returns the difference of a and b. (prototype: `int op_sub(int a, int b);`)
    - `op_mul` that returns the product of a and b. (prototype: `int op_mul(int a, int b);`)
    - `op_div` that returns the result of the division of a by b. (prototype: `int op_div(int a, int b);`)
    - `op_mod` that returns the remainder of the division of a by b. (prototype: `int op_mod(int a, int b);`)

- [`3-get_op_func.c`](./3-get_op_func.c) should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.
    - Prototype:
        ```c
        int (*get_op_func(char *s))(int, int);
        ```
    - Where `s` is the operator passed as argument to the program.
    - Your function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+")` should return a pointer to the function `op_add`.
    - You are not allowed to use `else`, `switch`, `case`, `goto`, or ternary operator (`?:`).
    - You are not allowed to use `for` or `do ... while` loops.
    - You are not allowed to use more than one `if` statement in your code.
    - You are not allowed to use more than one `while` loop in your code.
    - If `s` does not match any of the 5 expected operators (`+`, `-`, `*`, `/`, `%`), return `NULL`.
    - You are only allowed to declare these two variables in this function:
        ```c
        op_t ops[] = {
            {"+", op_add},
            {"-", op_sub},
            {"*", op_mul},
            {"/", op_div},
            {"%", op_mod},
            {NULL, NULL}
        };
        int i;
        ```

- [`3-main.c`](./3-main.c) should contain your `main` function only.
    - You are not allowed to code any other function than `main` in the file `3-main.c`.
    - You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div` and `op_mod` from the file `3-main.c`.
    - You have to use `atoi` to convert arguments to `int`.
    - You are not allowed to use any kind of loop (`for`, `do ... while`, `while`, etc.).
    - You are allowed a maximum of 3 `if` statements in your code.

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc`

> Output:
> ```shell
> $ ./calc 1 + 1
> 2
> $ ./calc 1024 '*' 98
> 100352
> $ ./calc 1024 '/' 98
> 10
> $ ./calc 1024 '%' 98
> 38
> $ ./calc 1024 '+' 98
> 1122
> $ ./calc 1024 '-' 98
> 926
> $ ./calc 1024 'a' 98
> Error
> $ ./calc 1024 '+' 98 98
> Error
> $
> ```

</details>

---

<details>
<summary>
<a href="./100-main_opcodes.c">4. Once an idea has taken hold of the brain it's almost impossible to eradicate</a>
</summary>

### 4\. Once an idea has taken hold of the brain it's almost impossible to eradicate

Write a program that prints the [`opcodes`](https://en.wikipedia.org/wiki/Opcode) of its own main function.

- Usage: `./main number_of_bytes`
- Output format:
    - the opcodes should be printed in hexadecimal, lowercase
    - each opcode is two char long
    - listing ends with a new line
    - see example
- You are allowed to use `printf` and `atoi`
- You have to use `atoi` to convert the argument to an `int`
- If the number of arguments is not the correct one, print `Error`, followed by a new line, and exit with the status `1`
- If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status `2`
- You do not have to compile with any flags

> Note: if you want to translate your opcodes to assembly instructions, you can use, for instance [udcli](https://sourceforge.net/projects/udis86/).

> Output:
```shell
$ ./main 21
55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14
$ objdump -d -j.text -M intel main
[...]
00000000004005f6 <main>:
  4005f6:   55                      push   rbp
  4005f7:   48 89 e5                mov    rbp,rsp
  4005fa:   48 83 ec 30             sub    rsp,0x30
  4005fe:   89 7d dc                mov    DWORD PTR [rbp-0x24],edi
  400601:   48 89 75 d0             mov    QWORD PTR [rbp-0x30],rsi
  400605:   83 7d dc 02             cmp    DWORD PTR [rbp-0x24],0x2
  400609:   74 14                   je     40061f <main+0x29>
[...]
$ ./main 21 | udcli -64 -x -o 4005f6
00000000004005f6 55               push rbp                
00000000004005f7 4889e5           mov rbp, rsp            
00000000004005fa 4883ec30         sub rsp, 0x30           
00000000004005fe 897ddc           mov [rbp-0x24], edi     
0000000000400601 488975d0         mov [rbp-0x30], rsi     
0000000000400605 837ddc02         cmp dword [rbp-0x24], 0x2
0000000000400609 7414             jz 0x40061f
[...]
$
```
> Note 0: `je` is equivalent to `jz`
> Note 1: depending on how you write your `main` function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example

</details>
