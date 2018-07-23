What you should learn from this project
At the end of this project you are expected to be able to explain to anyone, without the help of Google:

What are macros and how to use them
A macro is a simple identifier that will be replaced by a code fragment. Macros are most commonly used to give symbolic names to numeric constants, like "#define BILLION 1000000000". Creating them is simple. #define is followed by the name of the macro and the token sequence that it is abbreviated for. This is also referred to as the macro's body or expansion or replacement. Macros are written in UPPERCASE, makes reading the names and identifying macros easier. Macro's expansion replaces the macro invocation. You can macro a macro.

What are the most common predefined macros
The most common are __FILE__ which expands to the name of the current input file in the form of a C string constant. This will be the path that the preprocessor used to open the file. Next is __LINE__ which expands the current input line number in the form of a decimal int constant. These 2 macros are very useful for debugging and generating error messages. C99 introduces DATE, TIME, and other useful macros. Plenty of other common ones exist like __COUNTER__, __GFORTRAN__, and theres actually a lot more just check out https://gcc.gnu.org/onlinedocs/cpp/Common-Predefined-Macros.html

How to include guard your header files
Use #ifndef FILENAME. then #define FILENAME after. This prevents duplicate loading and makes sure the given file is only included once. Prevents compile time headaches. If the #ifndef returns false, then the preprocessor skips down to the #endif which helps avoid second definitions. 
EXTRA INFO: Preprocessor will remove comments. It will include header files in source code. (That is why you usually include at the top). It will replace macro names with code. Compiler generates assembly code. Assembler converts to machine or object code. Linker links object files and libraries to make exe.

Whitespace is not a preprocessing token so passing in a space is the same as an empty string.

BE CAREFUL. Macros are dangerous. Picky. Not so safe. Avoid macros in C++.

