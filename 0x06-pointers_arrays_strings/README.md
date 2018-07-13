# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---   

**What are pointers to pointers and how to use them?***   
*Pointers to pointers are like \**pointer. If we have a list of chars (a string) we can use the pointer to the char. But we can also want a list of words, a sentence so we can use char \**sentence. or a list of sentences like \*\**story. Use ** when you want to preserve the memory allocation or assignment outside of a function call. char *ch has the address of only the single first character and *ch will dereference that char. But char \**ch will be the address of an array of character pointers. So multi-level stuff.*  

**What are multidimensional arrays and how to use them?**  
*An array of arrays. Increasing the number of dimensions means more data can be held but harder to manage. Most common are 1D or 2D arrays and they are used like matrices.*   

**What are the most common C standard library functions to manipulate strings?**   
*https://en.wikibooks.org/wiki/C_Programming/String_manipulation strcat, strchr, ctrcmp, strcpy, strlen, strncat, strncmp, strncpy, strchr. Learn the string.h header.*  

## Each scripts and their output  
* Script 0 - Write a function that fills memory with a constant byte.   
* Script 1 - Write a function that copies memory area.   
* Script 2 - Write a function that locates a character in a string.   
* Script 3 - Write a function that gets the length of a prefix substring.   
* Script 4 - Write a function that searches a string for any of a set of bytes.   
* Script 5 - Write a function that locates a substring.   
* Script 7 - Write a function that prints the chessboard.   
* Script 8 - Write a function that prints the sum of the two diagonals of a square matrix of integers.   
* Script 9 - Write a function that sets the value of a pointer to a char.   
* Script 101 - Create a file that contains the password for the crackme2 executable.    

#### Limitation of these projects:  
___
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS
Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
Don’t forget to push your header file
