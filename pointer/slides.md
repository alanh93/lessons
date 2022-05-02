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

# Pointers in C
Alan Hung

---

## What is a Pointer
A **pointer** is just something that holds that **address** of another data in memory

<img src="https://external-content.duckduckgo.com/iu/?u=http%3A%2F%2Fcdncontribute.geeksforgeeks.org%2Fwp-content%2Fuploads%2Fpointers-in-c.png&f=1&nofb=1">

----

## Pointer Types

**Pointers** are data types just like **int** and **char**. They can be declared as a type by postfixing `*` after the datatype that the point is pointing to.


```c
int main(void) {
	int x = 5;
	int* px = &x;

	double y = 5.0;
	double* py = &y;
	double* py2 = py;

	printf("x is %d, and its address is %p", x, px);
}
```

To get the **address** of a variable, you need to use the `&` operator and prepend it infront of the variable.

You can also print a pointer with `printf` by using the `%p` **specifier**.

---

## Dereferncing

**Pointers** are great if you want to store a **reference** to some data, so that you can use the same data without copying it around.

Everytime you use an assignment statement, you are **copying** the value evaluated on the right, to the variable on the left. This can waste a lot of memory if you are not simlying coppying `int`, but other data that requires more memory.

You can get the data that the pointer points to by **dereferencing** it using the `*` operator.

```c
int main(void) {
	int x = 10;
	int* px = &x;
	int y = 16;
	int* py = &y;

	printf("The value of address %p is %d", px, *px);
	printf("x * y is %d", *px * *py);
}
```

---

## Arrays in C

A variable reprseting anarray in C is just a pointer, will more specifically, the pointer to the 1st element of the array. 

```c
int main(void) {
	int arr[6] = {1, 3, 10, 2, 4, 6};
	// arr is actually a pointer to index 0, which is number 1
	printf("%p's index 0 is ", arr, *arr);
	// printing other values
	printf("%d, %d, %d", arr[1], arr[2], arr[3]);
}
```

---

## String in C

In fact, strings in C is acutually just an array of chars terminated with the null character (`\0`)

The null character tells various string functions when does the string end.

```c
int main(void) {
	char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char str2[6] = "Hello";
	printf("str is %s\n", str);
	printf("str2 is %s\n", str2);
}

```

---

## Pointer Arithmatic

In C, pointers can be incremented by adding or subtracting using `+` and  `-` 
In fact, accessing the  elemenet of an array  `arr` at index `n` through `arr[n]` is the same as doing `*(arr + n)`

```c
int main(void){
	int arr[6] = {0, 3, 10, 3, 5, 7};

	printf("value at index 3 is %d", arr[3]);
	printf("value at index 3 is %d", *(arr + 3));
}
```
---

## References

### C W3Schools Tutorial
https://www.w3schools.com/c/index.php

### C W3Schools Tutorial's Chapter on Pointer
https://www.w3schools.com/c/c_pointers.php
