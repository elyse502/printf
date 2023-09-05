# _printf 📄
A formatted output conversion C program completed as part of the low-level programming and algorithm track at Alx-Holberton School. The program is a pseudo- recreation of the C standard library function, `printf`.

## Dependencies 👫
The `_printf` function was coded on an Ubuntu1~20.04.1 LTS machine with gcc version 9.4.0.

## Usage 🏃
To use the `_printf` function, assuming the above dependencies have been installed, compile all `.c` files in the repository and include the header main.h with any main function.

Example `main.c`:
```
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```
Compilation:
```
$ gcc *.c -o tester
```
Output:
```
$ ./tester
Hello, World!
$
```
## Description 💬
The function `_printf` writes output to standard output. The function writes under the control of a `format` string that specifies how subsequent arguments (accessed via the variable-length argument facilities of `stdarg`) are converted for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value
Upon successful return, `_printf` returns the number of characters printed (excluding the terminating null byte used to end output to strings). If an output error is encountered, the function returns `-1`.

## Format of the Argument String
The `format` string argument is a constant character string composed of zero or more directives: ordinary characters (not `%`) which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Conversion specification is introduced by the character `%` and ends with a conversion specifier. In between the `%` character and conversion specifier, there may be (in order) zero or more _flags_, an optional minimum _field width___, an optional precision and an optional _length_ modifier. The arguments must correspond with the conversion specifier, and are used in the order given.

# Concepts
_For this project, we expect you to look at these concepts:_
*[ Group Projects](https://intranet.alxswe.com/concepts/111)
* [Pair Programming - How To](https://intranet.alxswe.com/concepts/121)
* [Flowcharts](https://intranet.alxswe.com/concepts/130)
* [Technical Writing](https://intranet.alxswe.com/concepts/225)

# 1. Group Projects

![ab0138760e80bc0ac3d1](https://github.com/elyse502/printf/assets/125453474/5dc9f1e7-1b51-48cb-bfb4-faa017221f49)

## Teamwork Makes the Dream Work
As you well know, collaboration is incredibly important - at school, in tech, and life. Even though we know it’s important, it can be easy to find our own, individual rhythm of productivity at the expense of our partner’s (or partners’) participation.

Inversely, you may encounter a project where your partner wants to take a backseat, and would prefer for the work to be done without their contributions.

These modes of project management (along with their derivatives) disservice your understanding and invaluable life skill of bringing another up to speed.

In the spirit of wanting to hold you accountable, your group projects will include a heavily weighted expectation of equal contribution.

## “What does _that mean_?”
It means that both partners need to have equal as possible git commits to the master branch as possible; the farther from “equal”, the overall score of the project will decrease.

Equal as possible == no more than a 40/60 contribution from the respective partner’s user name (this will be different in the off chance of a third member)

## Note
We realize this may prove a challenge at times, and that’s ok! It’s an education in and of itself that will prepare you for your future careers. Remember to follow the Framework, and it’ll all work out.

Happy Coding!






























