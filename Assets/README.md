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

# 2. Pair Programming - How To

![6aeed3f518d8655dc457](https://github.com/elyse502/printf/assets/125453474/1525679a-f168-406e-bd70-7abcc4201cfe)

```
Regardless of if you think you understand something, pair programming is an invaluable industry skill that you need to practice
```

Perhaps, it seems obvious what you need to do, but ensure you know what you’re doing by learning through the examples below.


Let’s say we have two students, Kristen and Stuart. Stuart is trying to understand a few things that Kristen wants to help with. Here’s how it’d break down:

Kristen is not allowed to touch the computer; instead, they need to make sure that Stuart goes through The ALX Framework.


Kristen should try to prevent Stuart from searching Google if the answer can be found in the man or documentations provided on the Intranet.


If Stuart struggles too much solving one task, Kristen is allowed to use the computer and code the solution in front of Stuart, and explain the thought process.


Kristen should make sure that Stuart understands everything, though. When done, Kristen deletes all the files containing the solution, and Stuart tries again.


### If you’re trying to help someone:
* When explaining a concept, make sure you give examples to illustrate. Try to use whiteboards as much as you can.
* Be patient and understand that people think differently about the same problem. Sometimes, something will seem obvious to you, but to someone else, it may not be.
* **Most of the time, if you explain the same concept twice and your peer doesn’t get it, it’s because you didn’t explain it well enough :) It’s your fault, not theirs**.
* Try to rephrase, break it into smaller pieces, find new examples
* To ensure someone understands a concept, it is not enough to ask “do you understand”. You should start with this question, yes, but you should ask them to solve a similar small task using the same concept. A good way to test is to ask a knowledgeable peer to explain it again to you.


For Instance, if [following our prior example] Kristen explains permissions / modes, the questions should be:
* Do you understand?
* Yes
* Great! Explain it back to me now please :)
* …
* Great, explain what does rwxr-xr– mean
* …
* Great, so what would be the octal notation of rwxr—-x?
* …
* Great! what would be the permissions of a directory with a mode of 755?
* …

## Pair programming Continued …
When a peer receiving support completes all tasks demonstrated by the peer helping, they should work together on the remaining tasks (including the advanced tasks). Same rules apply: * Read the documentation
* Don’t code before you have a potential solution
* Explain out loud your thought process
* Etc..


For each task, switch the students who is typing. The student needing support should start. When switching, the new student needs to code the same task again. **No copy-paste**.

Example: There are 3 tasks remaining: T0, T1, T2, and Kristen and Stuart are still our examples of collaborating students.
* Stuart and Kristen solve all tasks together, but:
* Stuart starts typing for T0 and when done pushes on his github.
* Then Kristen types again the solution of T0 and pushes to her github.
* Then Kristen types for T1, pushes on her github.
* Then Stuart types again the solution of T1, pushes, and starts T2.
* When Stuart and Kristen found the solution for T2, Stuart pushes to his github.
* Then Kristen types the solution again and pushes on her github.

# 3. Flowcharts
What is a Flowchart?
A flowchart is a type of diagram that visually represents a workflow or process using a set of symbols or icons to denote different actions/decisions/steps within the process with arrows showing the direction of the flow. Flowcharts are used across many different professions to help analyze, design, document, and/or manage a workflow or process.

Why use a Flowchart?
Similarly to pseudo-code, flowcharts provide another way of approaching and/or understanding a workflow. Another benefit is that, when done well, flowcharts can be understood by non-developers and by developers that do not know the language the process is written in.

Flowchart Symbols
This type of diagram is extremely versatile and is used across many professional fields. Due to the number of industries using flowcharts, many sets of symbols and styles have been created with a specific industry in mind. A good symbol set to use is the ISO 5807 symbol set, as they are well-known and often used in the technology industry.

Some commonly used ISO 5807 symbols

![Task](https://github.com/elyse502/printf/assets/125453474/57a83e2f-0f9b-4e3a-bee0-013fe091513a)

## An Example
Let’s think about Foundation task, and include a flowchart example for it:

The task instructions are as follows:

Write a function that draws a straight line in the terminal.
* Prototype: void print_line(int n);
* You can only use `_putchar` function to print
* Where `n` is the number of times the character `_` should be printed
* The line should end with a `\n`
* If `n` is 0 or less, the function should only print `\n`

Take a moment to write out a solution in pseudo-code.





…



No, really. It’s good practice. :)



…



Okay. Below is what I came up with.
1. Set a variable equal `n` (`int nCopy`)
2. Set up a while loop (condition: `nCopy` is greater than 0)
3. Print `-`
4. Decrease `nCopy` by 1
5. Print `\n`

Now, using the ISO 5807 symbols from the table above, draw out a flowchart for this function.



…



No peeking!



…




Alright, does your flowchart look similar to the diagram below?

<img width="639" alt="fb82e24f7282c569aed3" src="https://github.com/elyse502/printf/assets/125453474/e43bdbeb-0bc0-47e1-b4b1-54b5c41b39d8">

## Bonus Info
Some good uses of flowcharts:
* Create a flowchart before coding a task to either help create or validate pseudo-code
* Add to a README.md to visually show how your project/process works
* Use in a presentation to aide audience understanding
* Your function or process is not working as expected? Create a flowchart of how it CURRENTLY is. Then, walk through the chart with some example input.

A flowchart can be as high-level or as detailed as you want. For example, you could break the flowchart above down further to include what is happening in memory. You can even create flowcharts from your everyday non-technical experiences. Choosing a movie or a place to eat could be displayed as a flow-chart!

A helpful tool to create flowcharts is [draw.io](https://app.diagrams.net/). There are premade symbols for you to use and your diagrams can be saved to your Google Drive.

For more information on Flowcharts and related diagrams, a google search with simply “flowchart” can get you started. ;)

# 4. Technical Writing
## Technical Writing Overview
Technical writing is an invaluable skill and an excellent way to articulate and share your knowledge. It’s not enough to just be able to code; being able to explain the concepts behind the code proves deeper understanding as well as the ability to communicate with others.

## Technical Writing Basics
You will write several blogs during your time as a student. Technical writing pieces are included in both project assignments and as extracurricular assignments from staff.

The general requirements for all blogs are as follow:
* Have at least one picture at the top of the blog post
* Publish your blog post on Medium or LinkedIn
* Share your blog post at least on LinkedIn
* Write professionally and intelligibly
* Explain every step/concept you know, and give examples – a total beginner should understand what you have written
* Please remember that these blogs must be written in English to further your technical ability in a variety of settings
* Remember that future employers will see your articles; take your writing seriously and produce something that will be an asset to your future

Blogs are manually reviewed by a staff member, a TA, or a peer and are evaluated on how well they meet the above requirements as well as specific requirements based on topic, which is listed in the associated project.

This should go without saying, but **plagiarism is unacceptable**.

## Technical Writing FAQ
“**Why are the blog instructions so vague? How do I know what to write about?**”
We do not outline all the requirements because part of these challenges is to teach/learn/experience how to find what needs to be said on a topic that’s new to you. You may not know what needs to be explained to a reader, but your research on the topic should help guide you.

“**If the blog should be understood by beginners, why is there an expectation of having in-depth explanations, even to the point of using jargon beginners may not understand?**”
Even if your audience is beginners, we must trust that they could understand a highly technical topic if it is explained well. Be sure to not only use appropriate jargon but to define the jargon you use. After reading your blog, the hope is that your audience will know the technical topic at the deepest level possible.

“**My reviewer scored me more strictly than others. Can’t we make this more standardized?**”
Each student is entrusted to score fairly and to the best of their ability. We understand that there may be a variance between how reviewers score, but it also reflects the interpretation and understanding of a general reader audience.

“**Can I write other technical blogs outside of school projects?**”
Of course! You’re encouraged to share them with staff and peers as well. If you’re interested in writing more but don’t know what to write about, here are some ideas:
* Keeping a devblog for big projects is a great way to document processes, successes, failures, and to-dos.
* If you find a framework, SDK, API, etc. has limited or confusing documentation, write a tutorial to help others with the problems that you’ve encountered.

# Background Context
Write your own `printf` function.

![printf](https://github.com/elyse502/printf/assets/125453474/644c33e9-99b4-4805-9291-64dd02017393)

^ _In this picture, [`Kris`](https://twitter.com/krisbredemeier), and [`Jul`](https://twitter.com/cyrjulien)_

# Resources🏗️
### Read or watch:
* [Secrets of printf](https://www.academia.edu/10297206/Secrets_of_printf_)
* **Group Projects** concept page (_Don’t forget to read this_)
* **Flowcharts** concept page

#### man or help:
* `printf (3)`

# More Info
## Authorized functions and macros
* `write` (`man 2 write`)
* `malloc` (`man 3 malloc`)
* `free` (`man 3 free`)
* `va_start` (`man 3 va_start`)
* `va_end` (`man 3 va_end`)
* `va_copy` (`man 3 va_copy`)
* `va_arg` (`man 3 va_arg`)

## Compilation
* Your code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
* As a consequence, be careful not to push any c file containing a `main` function in the root directory of your project (you could have a `test` folder containing all your tests files including `main` functions)
* Our main files will include your main header file (`main.h`): `#include main.h`
* You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`. Example of test file that you could use:
```
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
```
* We strongly encourage you to work all together on a set of tests
* If the task does not specify what to do with an edge case, do the same as `printf`

# Tasks📃
## 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life: [printf](https://github.com/elyse502/printf)
A function that produces output according to a format.
* Prototype: `int _printf(const char *format, ...);`
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
    * `c`
    * `s`
    * `%`
* You don’t have to reproduce the buffer handling of the C library `printf` function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

## 1. Education is when you read the fine print. Experience is what you get if you don't: [printf](https://github.com/elyse502/printf)
Handle the following conversion specifiers:
* `d`
* `i`
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

## 2. With a face like mine, I do better in print: [printf](https://github.com/elyse502/printf)
Handle the following custom conversion specifiers:
* `b`: the unsigned int argument is converted to binary
```
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
```
## 3. What one has not experienced, one will never understand in print: [printf](https://github.com/elyse502/printf)
Handle the following conversion specifiers:
* `u`
* `o`
* `x`
* `X`
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

## 4. Nothing in fine print is ever good news: [printf](https://github.com/elyse502/printf)
Use a local buffer of 1024 chars in order to call `write` as little as possible.

## 5. My weakness is wearing too much leopard print: [printf](https://github.com/elyse502/printf)
Handle the following custom conversion specifier:
* `S` : prints the string.
* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
```
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Best\nSchool");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
Best\x0ASchool
alex@ubuntu:~/c/printf$
```
## 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print: [printf](https://github.com/elyse502/printf)
Handle the following conversion specifier: `p`.
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

## 7. The big print gives and the small print takes away: [printf](https://github.com/elyse502/printf)
Handle the following flag characters for non-custom conversion specifiers:
* `+`
* space
* `#`

## 8. Sarcasm is lost in print: [printf](https://github.com/elyse502/printf)
Handle the following length modifiers for non-custom conversion specifiers:
* `l`
* `h`

Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X`

## 9. Print some money and give it to us for the rain forests: [printf](https://github.com/elyse502/printf)
Handle the field width for non-custom conversion specifiers.

## 10. The negative is the equivalent of the composer's score, and the print the performance: [printf](https://github.com/elyse502/printf)
Handle the precision for non-custom conversion specifiers.

## 11. It's depressing when you're still around and your albums are out of print: [printf](https://github.com/elyse502/printf)
Handle the `0` flag character for non-custom conversion specifiers.

## 12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection: [printf](https://github.com/elyse502/printf)
Handle the `-` flag character for non-custom conversion specifiers.

## 13. Print is the sharpest and the strongest weapon of our party: [printf](https://github.com/elyse502/printf)
Handle the following custom conversion specifier:
* `r` : prints the reversed string

## 14. The flood of print has turned reading into a process of gulping rather than savoring: [printf](https://github.com/elyse502/printf)
Handle the following custom conversion specifier:
* `R`: prints the rot13'ed string

## 15. *: [printf](https://github.com/elyse502/printf)
All the above options work well together.










