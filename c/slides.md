---
# try also 'default' to start simple
theme: seriph
# random image from a curated Unsplash collection by Anthony
# like them? see https://unsplash.com/collections/94734566/slidev
background: https://source.unsplash.com/collection/94734566/1920x1080
# apply any windi css classes to the current slide
class: 'text-center'
# https://sli.dev/custom/highlighters.html
highlighter: shiki
# show line numbers in code blocks
lineNumbers: false
# some information about the slides, markdown enabled
drawings:
  persist: false
---

# Into to Programing with C

Alan Hung

---

# Programing Paradigm
Classification of programing languages based on their features

Imperative
```java
class Main {
  public static void main(String[] args) {
    for (int i = 0; i < 10; i++) {
      System.out.println("Hello World");
    }
  }
}
```
- programmer instructs how the machine to change its state

Declarative
```lisp
(define (factorial n) (if (= n 0) 1 (* n (factorial (- n 1) ) ) ))
(factorial 5)
```
- programmer merely declares properties of the desired result

---

# Specific Paradigm
Classification of programing languages

Procedural (imperative)
- groups instructions into prodecure
- e.g. C

Object Orientated (imperative)
- groups instructions with the part of the state they operate on
- Java, C++, Python, Ruby

Functional (declarative)
- result is declared as series of functions and their applications
- Haskell, lisp

---

# Creating a C source file
c tutorial

C source code are files ending in `.c`
create one using the `touch` command and open up in your desired editor

Basic Hello World Program:
```c
#include <stdio.h>
int main() {
  printf("Hello World");
  return 0;
}
```

Compile your source code using the `gcc` or `clang` compiler like `gcc main.c`, then execute will be created an executed with `./a.out`
An executable name can also be inclded `gcc main.c -o main`, then be executed with`./main`

---

# Include directive
header files

In C, a **directive** is something that the preprocessor will execute before compilation.

The include directive tells the compiler what functions and procedures are availabe by inserting them to where the directive is present based on the chosen header file ending in `.h`

Directives begin with a `#`, include is not the only directive

```c
#include <stdio.h>
#include <math.h>
```

System header files are located in `/usr/include`
Header files contain only the **definitions** of procedures, but not how to execute them

---

# Main Function
main

Most non-scritping, procedural and strucutral programing languages starts execution from a main function

```c
int main() {
    // ... rest of code
    return 0;
}
```

Generally, a function in c has the following syntax

*return_type* *function_name*(*arguments*) { ... }

for `main`, the return value is the exit code for your program. `0` is for sucess, anything else is failure

fun fact: you can check the exit code of your last program in a shell with `echo "$?"`

---

# Statements
statements

Under the functoin main, a sequence of statements can be executed.


```c
int main() {
  // expresssion ;
  printf("Hello World!");
  int x = 32;
  printf("Hello %d", x);
  return 0;
}
```

---

# Variable Initialization
Types in c

C is a statically typed programing language, meaning type checking resolves at compile time before the programing is executed

Variables can be declared using an initialization statement: *type* *var_name* = *expression*

Basic types in c:
```c
int main() {
  int x = 32; // assign 32 to x
  double y = 3.2 // assign 3.2 to x, double for floating point
  char* str = "Hello World" // a string of characters
  return 0;
}
```

To check if your code works, use `printf`. It will substitue the formatter `%`*f* to the expression offered in sequence as argument to it after the initial string

```c
printf("%d %f %s", x, y, str);
```

---

# Other Statements and Constructs
intro to C

Interms of syntax, Java is very similar to C.

```c
int main() {
  // comment a line using '//'

  // if statements
  // c does not have a boolean type, everything that is not 0 is true
  if (32) {
    printf("true");
  } else {
    printf("false");
  }

  // for loop
  for (int i = 0; i < 10; i++) {
      printf("i = %d", i);
  }
  // doing math
  printf("%d", 1 + 3 * 4 - 2 / 2);
  return 0;
}
```

---

# End
