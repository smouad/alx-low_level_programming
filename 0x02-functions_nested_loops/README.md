# 0x02. C - Functions, nested loops

## Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)
- [C - Books and PDF's](../references) to check out and use as reference.


## Tests

- A [Makefile](./Makefile) is provided to compile all the tests.
- Usage: `make [test_name]`
- Example: `make 1` will compile and run the test for task 1.
- Example: `make check-all` will compile and run all tests.
- Example:`make clean` will remove all executable files.
- Some test's output will not be displayed in the terminal only `SUCCESS` or `FAILURE`.
- To print the full output of the particular test, run the executable file directly using `./[test_name]`.
- All tests are in the [tests](./tests) directory.
- All tests are compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g3 -o <name_of_test> <name_of_test>.c <name_of_file>.c`
- All tests are run with `./<name_of_test>`

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

```
julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
julien@ubuntu:~/0x02$ ./0-putchar 
_putchar
julien@ubuntu:~/0x02$ 

```

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar`

</details>

<details>
<summary><a href="./1-alphabet.c">1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</a></summary><br>
Write a function that prints the alphabet, in lowercase, followed by a new line.

-   Prototype: `void print_alphabet(void);`
-   You can only use `_putchar` twice in your code

```
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
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/1-main.c 1-alphabet.c -o 1-alphabet`
- Run: `./1-alphabet.c`
>Output:
```shell
abcdefghijklmnopqrstuvwxyz
```

</details>

<details>
<summary><a href="./2-print_alphabet_x10.c">2. 10 x alphabet</a></summary><br>

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

-   Prototype: `void print_alphabet_x10(void);`
-   You can only use `_putchar` twice in your code

```
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

>- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10`

>- Run: `./2-alphabet_x10 `

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

<details>
<summary><a href="./3-islower.c">3. islower</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/mkbf5zKt/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/3-main.c 3-islower.c -o 3-islower`

</details>

<details>
<summary><a href="./4-isalpha.c">4. isalpha</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/bwvFCG9F/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/4-main.c 4-isalpha.c -o 4-isalpha`

</details>

<details>
<summary><a href="./5-sign.c">5. Sign</a></summary><br>

<a href='https://postimg.cc/SnQQHhYB' target='_blank'><img src='https://i.postimg.cc/MpVcMZ6p/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/5-main.c 5-sign.c -o 5-sign`

</details>

<details>
<summary><a href="./6-abs.c">6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/NMryvRNb/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/6-main.c 6-abs.c -o 6-abs`

</details>

<details>
<summary><a href="./7-print_last_digit.c">7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/tC5wPW10/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/7-main.c 7-print_last_digit.c -o 7-last_digit`

</details>

<details>
<summary><a href="./8-24_hours.c">8. I'm federal agent Jack Bauer, and today is the longest day of my life</a></summary><br>

<a href='https://postimg.cc/S2X4H6Vq' target='_blank'><img src='https://i.postimg.cc/bJgvDLtG/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/8-main.c 8-24_hours.c -o 8-24`

</details>

<details>
<summary><a href="./9-times_table.c">9. Learn your times table</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/43jbx1Vq/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/9-main.c 9-times_table.c -o 9-times_table`

</details>

<details>
<summary><a href="./10-add.c">10. a+b</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/7LsDGmVH/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/10-main.c 10-add.c -o 10-add`

</details>

<details>
<summary><a href="./11-print_to_98.c">11. 98 Battery Street, the OG</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/CMsVcXxM/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/11-main.c 11-print_to_98.c -o 11-98`

</details>

<details>
<summary><a href="./100-times_table.c">12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself</a></summary><br>

<a href='https://postimg.cc/wts1FBF3' target='_blank'><img src='https://i.postimg.cc/8CZLpJ6d/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/100-main.c 100-times_table.c -o 100-times_table`

</details>

<details>
<summary><a href="./101-natural.c">13. Nature made the natural numbers; All else is the work of women</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/XJbz9n6q/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-natural.c -o 101-natural`

</details>

<details>
<summary><a href="./102-fibonacci.c">14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/0yjz3yVM/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-fibonacci.c -o 102-fibonacci`

</details>

<details>
<summary><a href="./103-fibonacci.c">15. Even Liber Abbaci</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/8kmtkJ1b/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-fibonacci.c -o 103-fibonacci`

</details>

<details>
<summary><a href="./104-fibonacci.c">16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/d1Cq75Gk/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-fibonacci.c -o 104-fibonacci`

</details>
