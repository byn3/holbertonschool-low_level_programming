# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---  

**What are function pointers and how to use them?**  
*A pointer is just a memory address. We can point to functions. If I had a function, "void fun(int a)" which printed the int, I could call it from the main like so with 2 lines, "void (\*fun_ptr)(int) = &fun;" and the next line would be "(\*fun_ptr)(10);". The output would be 10. *   

**What does a function pointer exactly hold?**  
*"Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code." We do not need to allocate or free memory that function pointers use.*  

**Where does a function pointer point to in the virtual memory?**  
*The start if the executable code. the first byte of code of the function, code basically.*   


## Each scripts and their output  
* Script 0 - Write a function that prints a name.  
* Script 1 - Write a function that executes a function given as a parameter on each element of an array.  
* Script 2 - Write a function that searches for an integer.  
* Script 3 - Write a program that performs simple operations.    
* Script 100 - Write a program that prints the opcodes of its own main function.    
