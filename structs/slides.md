---
theme: seriph
background: https://source.unsplash.com/collection/94734566/1920x1080
class: 'text-center'
highlighter: shiki
lineNumbers: false
drawings:
  persist: false
---

# C Structs
Alan Hung

---

## What are Structs

C structures are **user defined types** that are a collection of variables. 
Knowtice the semicolon after the closing bracket of the struct definitions.

```c
struct structName {
	dataType name;
	dataType name1;
	// ...
};
```

For example:

```c
struct person {
	char* first_name;
	cahr* last_name;
};
```

---

## Initializing 

After the struct is declared, a type name `struct structName` has been declared and the type can be initialize like the following

```c
int main(void) {
	char f[5] = "Alan";
	char s[5] = "Nala";


	struct person a;
	a.first_name = f;
	a.last_name = s;

	// or use a designated initializer from C99
	struct person p = {.first_name = f, .last_name = s};

	printf("%s %s\n", p.first_name, p.last_name);
	printf("%s %s\n", a.first_name, a.last_name);
}
```

---

## Typedef

Having `struct` for every userdefined struct can be cumbersome to type.
Use the `tyedef` keyword to assign another name to your struct types.

```c
typedef struct person Person;

int main(void){
	Person p;
	// rest of code
}
```

---

## OOP Style

Although C is not object orintated, we can achieve a similar think by using top level **procedures** instead of **constructors** and **methods**.
Additionally, "self" can be passed as a pointer in the function parameter.


```c
struct person {
	char* first_name;
	char* last_name;
}
typedef struct person Person;

// constructor
Person new_person(char* f, char* l) {
	Person p;
	p.first_name = f;
	p.last_name = l;
	return p;
}

char* change_first_name(Person* self, char* new_name) {
	self->new_name;
}

```

Note, `self->first_name` is a syntactic sugar for `(*self).first_name`.

---

## Challenge

Your challenge is to create a program that computes the distance between two points using the distance formula.

You should have a point type, a constructor for it and a function to compute the distance. 

```c
struct point {
	int x;
	int y;
}
typedef struct point Point;
Point constructor(int x, int y);
double distance(*Point p1, *Point p2);
```

---

Your program should take in four integers, `x1 y1 x2 y2` and output the difference as a double.

```c
#include <stdio.h>
#include <math.h>
// your code ...
int main(void) {
	// you will need scanf for getting input,
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", x1, y1, x2, y2,);
	Point p1 = constructor(x1, y1);
	Point p2 = constructor(x2, y2);
	// you will also need the sqrt and pow function from math.h for computing the distance
	printf("%f\n", distance(&p1, &p2));
}
```

To compile your code, run `gcc main.c -o main -lm`. The `-lm` links to the math library
