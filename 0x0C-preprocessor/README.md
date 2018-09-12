# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---   

**What are macros and how to use them?**  
*A macro is a simple identifier that will be replaced by a code fragment. Macros are most commonly used to give symbolic names to numeric constants, like "#define BILLION 1000000000". Creating them is simple. #define is followed by the name of the macro and the token sequence that it is abbreviated for. This is also referred to as the macro's body or expansion or replacement. Macros are written in UPPERCASE, makes reading the names and identifying macros easier. Macro's expansion replaces the macro invocation. You can macro a macro.*  

**What are the most common predefined macros?**  
*The most common are \_\_FILE\_\_ which expands to the name of the current input file in the form of a C string constant. This will be the path that the preprocessor used to open the file.* 
*Next is \_\_LINE\_\_ which expands the current input line number in the form of a decimal int constant. These 2 macros are very useful for debugging and generating error messages. C99 introduces DATE, TIME, and other useful macros.* 
*Plenty of other common ones exist like \_\_COUNTER\_\_, \_\_GFORTRAN\_\_, and theres actually a lot more just check out https://gcc.gnu.org/onlinedocs/cpp/Common-Predefined-Macros.html*  

**How to include guard your header files?**  
*Use #ifndef FILENAME. then #define FILENAME after. This prevents duplicate loading and makes sure the given file is only included once. Prevents compile time headaches. If the #ifndef returns false, then the preprocessor skips down to the #endif which helps avoid second definitions.*  

EXTRA INFO:  

* Preprocessor will remove comments. It will include header files in source code. (That is why you usually include at the top). It will replace macro names with code. Compiler generates assembly code. Assembler converts to machine or object code. Linker links object files and libraries to make exe.  
* Whitespace is not a preprocessing token so passing in a space is the same as an empty string.  
* BE CAREFUL. Macros are dangerous. Picky. Not so safe. Avoid macros in C++.  

## Each scripts and their output  
* Script 0 - Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.  
* Script 1 - Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.  
* Script 2 - Write a program that prints the name of the file it was compiled from, followed by a new line.  
* Script 3 - Write a function-like macro ABS(x) that computes the absolute value of a number x.  
* Script 4 - Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.  
* Script 101 - Write a program that can print Hello, Holberton, followed by a new line.  
* Folder blog has my info and code that I have to work on the DitDah blog post  

