# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---   

**What are pointers and how to use them?**  
*A variable whose value is the address of another variable. Declare them like so: type variableName. Some programming tasks are better with pointers and dynamic programming or memory allocation requires pointers. All variables have a memory location and each have an address defined which can be accessed with the & operator. & denotes an address in memory eg. &var1 might return bff5a400. the actual value of all pointers, regardless of data type, is a long hexadecimal number that represents a memory address. We can access the value at the memory address by using variableName. A good practice is to assign pointers to NULL when declaring. Can't and shouldn't point to zero since that is for the OS memory. A good check is if (!pointer) to see if it is not null or null. Pointers have 4 arithmetic operators, +, ++, -, --. We can have an array of pointers, we can point to pointers, pass pointers to functions, and return pointers from functions.*  

**What are arrays and how to use them?**  
*A kind of data structure that stores a fixed-size sequential collection of elements of the same type. It is a collection of variables of the same type. It is contiguous memory locations. The lowest address is the first element and the highest address is the last element. To declare and use, type- dataType arrayName [arraySize];. This will make a single-dimensional array. To initialize, we can do an example, double balance[3]={5.0, 2.5, 7.0}; 0 is the first index or element and the size minus one is the last index. To access array elements, we can type double salary = balance[2]; this statement will get the 3rd element from the array and assign it to salary. Important concepts for arrays: C supports multi-dimensional arrays, you can pass arrays to functions, you can return an array from a function, you can point to an array. Remember, & produces the address and * dereferences a pointer.*  


**What are the differences between pointers and arrays?**  
*They are very similar. An important difference is a pointer can take different addresses as values but an array is fixed. Array name gives the address of the first element of an array. Array members are accessed using pointer arithmetic. Array parameters are always passed as pointers. Using sizeof(pointer) will give you the size of the pointer which is usually 1 and then sizeof(array) gives the size of the array, which is bigger and different. A[X] is exactly equivalent to (A+X). Also heap vs stack issues. Arrays cannot be assigned, passed as function arguments, or compared for equality whereas pointers can. Manipulating an array usually involves pointers to individual elements. Arrays are a single, preallocated size of sequential elements all of the same type and fixed in size and location. A pointer is a reference to any data element or type located anywhere. Pointers must be assigned to point to an allocated space and can be resized and it can simulate a dynamically allocated array. Pointers are more general data structures.*  


**How to use strings and how to manipulate them?**  
*Strings are one dimensional arrays that are terminated by the null character \0. char greeting[6] = {'H','e','l','l','o','\0'}; The C compiler automatically places the \0 at the end though when the array is initialized. String.h header has many functions like strcopy which copies string s2 into s1. strcat appends s2 to s1. strlen returns the length. strcmp returns 0 is the 2 strings are the same and negative is s1 s2 and positive if s1 s2. strchar returns a pointer to the first occurrence of character ch in string s1. strstr returns a pointer to the first occurrence of string s2 in string s1.*  


**Scope of variables?**  
*int A[n] is a static array and memory is allocated at run time stack for A. When A is out of scope, the memory is deallocated and A can no longer be referenced. C allows for dynamic declaration of an array like so- int \*A= (int\*)malloc(n\* sizeof(int)); this code will declare a memory block of size n\*sizeof(int) which can be accessed by using a pointer A. This A can be treated as a pointer or array. The dynamic declaration is assigned memory in the dynamic heap, which the programmer must manage. calloc is preferred over malloc when doing dynamic arrays.*  

**Extra side notes I took while crawling the internet:**  
*Computer reserves memory for each variable declared. More or less memory is reserved depending on data type. 1 byte is 8 bits. each bit is 0 or 1. Sizes also depend on the machine, for a 64-bit we have char = 1 byte, int = 4 bytes, float = 4 bytes. A char can hold 2^8 bits which is 256 (-128 to 127 bits which is ASCII baby. Int is 8 bytes or 32 bits so that is 2^32 values which is -2 bil to 2.147 bil. MAPLESTORY MAX MESOS BABY. The space reserved for a variable is the address. Use %p to print addresses or values of pointers with printf. Size of pointers on most 64 bit machines is 8 bytes. A pointer can only point to a variable of the type it was initialized with. Cannot point a char to an int. Dereferencing is manipulating value sstored at the memory address. The * has different meaning depending on the context, arithmetic, declaring, dereferencing pointers. It declares a variable is of type pointer, and it can dereference when used inside code. To refer to array name, 2 ways: sizeof and & operator. Sizeof(array) is size of the object itself so all its components. Address of the first array is the same as the address of the whole array. if a is an array with the address 0x7ffff8f19240, how come a + 1 == 0x7ffff8f19244 and not 0x7ffff8f19241? Because int is 4 bytes.*  

## Each scripts and their output  
* Script 0 -  Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n);
* Script 1 - Write a function that swaps the values of two integers. Prototype: void swap_int(int *a, int *b);  
* Script 2 - Write a function that returns the length of a string. Prototype: int _strlen(char *s); FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.  
* Script 3 - Write a function that prints a string, followed by a new line, to stdout. Prototype: void _puts(char *str); FYI: The standard library provides a similar function: puts. Run man puts to learn more.  
* Script 4 - Write a function that prints a string, in reverse, followed by a new line. Prototype: void print_rev(char *s);  
* Script 5 - Write a function that reverses a string. Prototype: void rev_string(char *s);  
* Script 6 - Write a function that prints one char out of 2 of a string, followed by a new line. Prototype: void puts2(char *str); The function should print only one character out of two, starting with the first one.  
* Script 7 - Write a function that prints half of a string, followed by a new line. Prototype: void puts_half(char *str);. The function should print the second half of the string. If the number of characters is odd, the function should print the (length_of_the_string - 1) / 2 last characters of the string.  
* Script 8 - Write a function that prints n elements of an array of integers, followed by a new line. Prototype: void print_array(int *a, int n); where n is the number of elements of the array to be printed. Numbers must be separated by comma, followed by a space. The numbers should be displayed in the same order as they are stored in the array. You are allowed to use printf.  
* Script 9 - Prototype: char *_strcpy(char *dest, char *src); Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. Return value: the pointer to dest FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.  
* Script 100 - Write a function that convert a string to an integer. Prototype: int _atoi(char *s);. The number in the string can be preceded by an infinite number of characters. You need to take into account all the - and + signs before the number. If there are no numbers in the string, the function must return 0. You are not allowed to use long. You are not allowed to declare new variables of “type” array. You are not allowed to hard-code special values. Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS. We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. If this flag is not available in you version of gcc, you can install the last version on your VM. We will use gcc version 5 or above to compile. FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.  
* Script 101 - Create a program that generates random valid passwords for the program 101-crackme. You are allowed to use the standard library. You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests). man srand, rand, time. gdb and objdump can help.  

#### Limitation of these projects:  
___
-Allowed editors: vi, vim, emacs
-All your files will be compiled on Ubuntu 14.04 LTS
-Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
-All your files should end with a new line
-A README.md file, at the root of the folder of the project is mandatory
-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-You are not allowed to use global variables
-No more than 5 functions per file
-You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
-You are allowed to use _putchar
-You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
-In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
-The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
-Don’t forget to push your header file
