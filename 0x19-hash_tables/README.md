

What is a hash function
From Wiki:
A hash function is any function that can be used to map data of arbitrary size
to data of a fixed size. The values returned by a hash function are called hash
values, hash codes, digests, or simply hashes. Hash functions are often used in
combination with a hash table, a common data structure used in computer
software for rapid data lookup. Hash functions accelerate table or database
lookup by detecting duplicated records in a large file. One such application is
finding similar stretches in DNA sequences. They are also useful in
cryptography.



What makes a good hash function
4 main characteristics:
1) The hash value is fully determined by the data being
hashed. If something else besides the input is used to make the hash, the hash
value is not completely dependent on the input and allows for worse
distribution of the values.
2) The hash functions uses all the input data. If the hash function does not
use all the input data, then slight variations to the input data can cause
hella collisions. 
3) The hash function uniformly distributes data across all possible hash
values. If the hash does not distribute uniformly, a large number of collisions
will occur and that cuts down on efficiently. 
4) The hash function generates very different hash values for similar strings.
In reality, many data sets have similar data elements and we want theses to be
distributed over a table. 



What is a hash table, how do they work and how to use them
A hashtable is a specific way to implement a dictionary.
The C version of a dictionary. 
Its like an array that stores linked lists. Indexing, buckets, stuff.
https://en.wikipedia.org/wiki/Hash\_table
Big O is 1 constant time but worse case is O(n).



What is a collision and what are the main ways of dealing with collisions in the context of a hash table
When two strings or inputs maps to the same output, that is collision. Dealing
with it is separate chaining, using linked lists chaining, head cells chaining,
using other structures besides linked lists, open addressing, coalesced
hashing, cuckoo hashing, hopscotch hashing, robin hood hashing, 2 choice
hashing.



What are the advantages and drawbacks of using hash tables
Pro: Speed. If we know the size before hand, we can properly distribute and
never have to resize. If we know the data befoer hand, hash tables are great.
Con: Accessing or sorting is time consuming since data is stored in
pseudo-random locations. Sorting is bad. If we have a dynamic resizing,
operations are expensive.
Poor locality of reference. Hash tables are hard to write. Errors can happen.
It depends on a nice hash function. 
It is easy to create a poor hash function.
Hash tables are prone to hacking if you have a traitor.


What are the most common use cases of hash tables
Arrays that hold stuff, database indexing, caching, sets, object stuff, unique
data representation.
