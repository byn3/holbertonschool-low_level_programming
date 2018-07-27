What you should learn from this project
At the end of this project you are expected to be able to explain to anyone, without the help of Google:

What are variadic functions
Functions that can take an indefinite number of arguments. in C they are used like so "int function( char a, ...)" . There must be another parameter and the ellipses must be proceeded by a comma. C++ this is not the case. we need to use the stdarg.h header file which will let usstep through a list of function arguments of unknown number and type. 

How to use va_start, va_arg and va_end macros
So va_list is the type for iterating through arguments. the macros are va_start which starts iterating arguments with a va_list. va_arg is used to retrieve an argument. va_end is used to free a va_list. and va_copy is used to copy contents of one va_list to another. All ate compatible with C89 but va_copy is for C99. 


Why and how to use the const type qualifier
use it so you get errors if you try and change a constant. it is helpful for security stuff and other reasons. variables can vary and change. but with constants it makes code more readable. using a constant helps because you can use it like a macro and it can save time and work. risky errors are avoided. It is useful for symbolic names for strings which will be useful for supporting multiple languages. also enumerations are helpful and safe.


Extra info: to access the unnamed arguments, you need to first declare a variable of type va_list in the variadic function. the macro_va start is then called with two arguments, the first is the variable of type va_list and the second is the name of the last parameter of the function. after this step, each call of va_arg yields the next argument. first argument to va_arg is va_list and the second is the type of the next argument passed to the function. va_end must be called on the va_list before the function returns. 
