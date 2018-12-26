# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---   

**What is a dynamic library, how does it work, how to create one, and how to use them?**  
*I wrote a blog about that. (https://www.linkedin.com/pulse/differences-between-static-dynamic-libraries-c-bryan-leung?published=t)*  

**What is the environment variable $LD\_LIBRARY\_PATH and how to use it?**   
*export LD\_LIBRARY\_PATH = $LD\_LIBRARY\_PATH:/path/to/lib  
This env variable is used to fix run time dependency and configure/ specify the
variable to point to the dir path containing the shared obj files.*  

**What are the differences between static and shared libraries?**  
*Static libraries wasts space and has copies of the same function. Dynamic
linking links at run time and not at compile time which means all the functions
are in special memory and all programs can access them. Static libraries are
just collections of compiler generated .o files and dynamic libraries are just
linked.*  

 
## Each scripts and their output  
* Script 0 - Create the dynamic library libholberton.so containing all the functions listed below:  
* Script 1 - Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.    
* Script 100 - Create a dynamic library that contains C functions that can be called from Python. See example for more detail.  

