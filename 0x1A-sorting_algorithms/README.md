By the end of this i should have learned::
At least four different sorting algorithms
Insertion and selection looks bad. Insertion looks okay for nearly sorted data. Selection looks like complete garbage. Bubble also looks like garbage unless it is nearly sorted. Shell, heap, and merge looks nice. Quick and quick 3 uses 2 thingies. 
Depends on the situation but some great O(n) algos are radix, bucket, and counting.
What is the Big O notation, and how to evaluate the time complexity of an algorithm
https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation
http://bigocheatsheet.com/

How to select the best sorting algorithm for a given input
http://bigocheatsheet.com/
depends on the criteria, like a few items, is it almost sorted, do you care about worse case scenarios, want good averages, as few lines of code, do we care about memory and wanna cache, etc.
What is a stable sorting algorithm
if two objects with equal keys appear in the same order in the sorted output as the input array.
insertion, bubble, merge, tim, count are stable. 
unstable is heap, selection, shell, quick
