# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---

**Why C programming is awesome?**  
*Portable. Nice syntax. No style. Macros. Small low level. Memory. Doesn't change. You pretty much already know C++ and Object-C and also many of the other ones are written in C. Hardware interaction. Python, ruby, java, JS, many more major stuff written in C. The main choice for kernel development is C. Writing C will teach you how a computer and embedded systems really works. High job demand. High performance low memory. Runs on so much more things.*  

**Who invented C?**  
*Dennis Ritchie.*  

**Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds?**  
*Dennis Ritchie created C. He also helped Ken Thompson make the Unix OS. Brian Kernighan also helped with the creation of Unix. He is the K in K&R and the K in AWK. Linus Benedict Torvalds was the main person behind Linux kernel. (Linus-->LINUX). He is also the creator of git.*  

**What happens when you type gcc main.c?**  
*4 steps. First step is preprocessing. The program will pull anything it needs and take out anything it doesn't (comments removed, subs the variables values in). Next is the compiler. It translates the preprocessed code into Assembly. Assembly is one abstraction level above machine code, where some dedicated humans can still read and write the code to an extent. The code will get sent into the assembler for the next step and that will translate the code into machine code. If the code is large enough and has many different files, a linker is used to take all the code snippets and sews them together into one program. An executable is made which can be run.
So TLDR: Preprocessing, compiling, assembling, linker.*  

**What is an entry point?**  
*It is where control is transferred from the OS to a program. In some languages or OSs, the initial entry point is not the program but during the run time library. In simple scripting languages, programs begin their execution at the beginning. The C entry point is main.*  

**What is main?**  
*The main is the same as other C functions and has a return type. But the main difference is that main is called by the OS when the user runs the program. Becuase of that, main is always the first code/ function executed when a program starts.*  

**How to print text using printf, puts and putchar?**  
*printf displays formatted text, denoted by the %(letter), to the stdout. printf(format_string, arg1, arg2, ...). Arguments are the variables amd the format tells print how to display the arguments. scanf is kinds the same but we have &arg1 for address of variable.*  

**How to get the size of a specific type using the unary operator sizeof?**  
*sizeof(). sizeof(a) and int a= 4, we print 4. If we have short b, sizeof(b) would be 2. Double is 8. Size of a pointer variable is 1 because the pointer is not an integer, it just points to it.*  

**How to compile using gcc?**  
*type gcc <FILENAME> -o <NAMEYOUWANT>. Make sure there are no errors or warnings so everything is nice.*  

**What is the default program name when compiling with gcc?**  
*a.out*  

**What is the official Holberton C coding style and how to check your code with betty-style?**  
*Betty. I made an alias with bD and BS which stands for betty-doc.pl and betty-style.pl. Others have just Betty and that works.*  

**How to find the right header to include in your source code when using a standard library function?**  
*Make sure the function you want to use is included in that library. Also linking phase handles this during compilation.*  

**How does the main function influence the return value of the program?**  
*Main returns 0 if no error, and other flags will trigger. If a specific error or other things occur we can specify the return value and then have a specific exit.*  



## Each scripts and their output  

*Script 0 - Write a script that prints “Hello, World”, followed by a new line to the standard output.
*Script 1 - Write a script that displays a confused smiley "(Ôo)'.
*Script 2 - Display the content of the /etc/passwd file.
*Script 3 - Display the content of /etc/passwd and /etc/hosts
*Script 4 - Display the last 10 lines of /etc/passwd
*Script 5 - Display the first 10 lines of /etc/passwd
*Script 6 - Write a script that displays the third line of the file iacta. The file iacta will be in the working directory. You’re not allowed to use sed.
Script 7 - Write a shell script that creates a file named exactly *\'"Holberton School"'\$?*****:) containing the text Holberton School ending by a new line.
*Script 8 - Write a script that writes into the file ls_cwd_content the result of the command ls -la. If the file ls_cwd_content already exists, it should be overwritten. If the file ls_cwd_content does not exist, create it.
*Script 9 - Write a script that duplicates the last line of the file iacta. The file iacta will be in the working directory
*Script 10 - Write a script that deletes all the regular files (not the directories) with a .js extension that are present in the current directory and all its subfolders.
*Script 11 - Write a script that counts the number of directories and sub-directories in the current directory. The current and parent directories should not be taken into account. Hidden directories should be counted.
*Script 12 - Create a script that displays the 10 newest files in the current directory.
*Script 13 - Create a script that takes a list of words as input and prints only words that appear exactly once. Input format: One line, one word. Output format: One line, one word. Words should be sorted
*Script 14 - Display lines containing the pattern “root” from the file /etc/passwd
*Script 15 - Display the number of lines that contain the pattern “bin” in the file /etc/passwd
*Script 16 - Display lines containing the pattern “root” and 3 lines after them in the file /etc/passwd.
*Script 17 - Display all the lines in the file /etc/passwd that do not contain the pattern “bin”.
*Script 18 - Display all lines of the file /etc/ssh/sshd_config starting with a letter.
*Script 19 - Replace all characters A and c from input to Z and e respectively.

#### Limitation of C projects:
___
-Allowed editors: vi, vim, emacs
-All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
-All your files should end with a new line
-A README.md file, at the root of the folder of the project
-There should be no errors and no warnings during compilation
-You are not allowed to use system
-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

#### Limitation of Bash projects:
___
-Allowed editors: vi, vim, emacs
-All your scripts will be tested on Ubuntu 14.04 LTS
-All your scripts should be exactly two lines long ($ wc -l file should print 2)
-All your files should end with a new line
-The first line of all your files should be exactly #!/bin/bash
