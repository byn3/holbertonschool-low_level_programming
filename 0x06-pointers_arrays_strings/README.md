What you should learn from this project
At the end of this project you are expected to be able to explain to anyone, without the help of Google:

What are pointers to pointers and how to use them
Pointers to pointers are like **pointer. If we have a list of chars (a string) we can use the pointer to the char. But we can also want a list of words, a sentence so we can use char **sentence. or a list of sentences like ***story. Use ** when you want to preserve the memory allocation or assignment outside of a function call. char *ch has the address of only the single first character and *ch will dereference that char. But char **ch will be the address of an array of character pointers. So multi-level stuff.

What are multidimensional arrays and how to use them
An array of arrays. Increasing the number of dimensions means more data can be held but harder to manage. Most common are 1D or 2D arrays and they are used like matrices. 

What are the most common C standard library functions to manipulate strings
https://en.wikibooks.org/wiki/C_Programming/String_manipulation strcat, strchr, ctrcmp, strcpy, strlen, strncat, strncmp, strncpy, strchr. Learn the string.h header. 


