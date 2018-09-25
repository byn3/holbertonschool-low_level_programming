A
the end of this project you are expected to be able to explain to anyone, without the help of Google:

What do LIFO and FIFO mean
Last in, First Out. Like a queue.
First in, First Out. Like plates at a buffet.


What is a stack, and when to use it
A stack of pancakes. Use this when you want just the top and recent data.
Push and pop the data. And peek. Probably a simple singly linked list. 


What is a queue, and when to use it
An ordered collection and you remove or dequeue from the oldest. A que functions like a buffer.
Linked lists and circular buffers are common types. Doubly is more convinent. You can keep a singly linked list but keep a pointer at the last node to be more efficient.


What are the common implementations of stacks and queues
Data type is adapter class. The stack is built on top of other data structures. Stacks have a push, a pop, a peek, and a isEmpty. 
A queue is an adapter class so it is built on other data structures. Similar to stacks, they can be built on linked lists or arrays or vectors, etc.
The queue must have an enqueue (push), dequeue (pop), getFront (peek), isEmpty, and a clear.
Both are O(k) time or O(1) time.

What are the most common use cases of stacks and queues
Common applications of a stack(LIFO) is reversing. Also undo mechanisms in text editors. 
Queues can also be used for simple stuff. Two simplest search techniques are DFS (depth first search) and BFS (breadth first search). Use DFS with a stack. Go until dead end. Go beyond. Plus Ultra.
Once we reach the dead end, go back or pop the stack and get an alternative path.
BFS with queues. Find all possible paths then enqueue them into a queue. 

What is the proper way to use global variables
In the header and with extern. https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files

How to work with git submodules
https://blog.github.com/2016-02-01-working-with-submodules/


