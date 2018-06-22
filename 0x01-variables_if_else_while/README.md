# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---

**What are the arithmetic operators and how to use them
*+, -, *, /, %, ++, --. Self explanatory for all but %. % returns the remainder after integer division.

**What are the logical operators (sometimes called boolean operators) and how to use them
*&&, ||, !. And, Or, Not. Respectively, same when all same, true if  at least 1 true, and opposite.

**What the the relational operators and how to use them
*Relational operators are the > < >= <= != ==. 

**What values are considered TRUE and FALSE in C
*0 is false. anything else is true. if (variable) is pretty much always true unless the variable is zero. This means if variable is not zero, this value is true.

What are the boolean operators and how to use them
Boolean operators are the logical which are and, or and not.

How to use the if, if ... else statements
if ( statement is TRUE )
    Execute this line of code
else if after the ifs to nest checks and else at the end to do a final default. The else is optional if no default is wanted.

How to use comments
Betty style. /* */. Pretty. Concise. Descriptive.

How to declare variables of types char, int, unsigned int
char VARIABLENAME; int NAME; unsigned int;  To assign them add a "= <value>" between the VARIABLENAME and ;.

How to affect values to variables
How to assign variables. Read above for initializing. Or we can go back later and update the variable such as NAME = 11;. 
How to print the values of variables of type char, int, unsignedint with printf

How to use the while loop
while (condition is true) {statements that are executed} 

How to use variables with the while loop
Use something like while (i < 10) {i++}. There should be an increment in the statement that increases the conditional check or modifies it so eventually it can be false and we can exit. If we don't we have an infinite loop.

How to print variables using printf
We need to use the formatted outputs %<type>. The type can be d for decimal, f for floating point, E for scientific notation, x for hexadecimal, c for character, and s for string. Others exist and can be found in the man.

What is the ASCII character set
The ASCII stands for American Standard Code for Information Interchange. Each char, digit, punctuation, special char, and control chars are associated with a integer value. There are 128 values ranging from 0 to 127 so 7 bits or 1 byte is sufficient to display the info. 

What are the purpose of the gcc flags -m32 and -m64
To generate code for a 32-bit or 64 bit environment. In 32 bit, int, long, and pointer are 32 bits while in a 64 bit enviornment we have int to 32 bits and long and pointer are set to 64.


## Each scripts and their output  
*Script 0 - 
*Script 1 -  
*Script 2 -  
*Script 3 - 
*Script 4 - 
*Script 5 - 
*Script 6 - 
*Script 7 - 
*Script 8 -    
*Script 9 -  
*Script 10 -  
*Script 11 - 
*Script 12 -
*Script 13 -  
*Script 14 - 
*Script 15 -
*Script 16 - 





#### Limitation of these projects:  
___
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS
Your programs and functions will compiled with gcc 4.8.4 using the flags -Wall -Werror-Wextra and -pedantic
All your files should end with a new line
A README.md file, at the root of the folder of the project
There should be no errors and no warnings during compilation
You are not allowed to use system
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
