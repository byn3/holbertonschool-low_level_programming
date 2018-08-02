At the end of this project you are expected to be able to explain to anyone, without the help of Google:

When and why using linked lists vs arrays
both are used to store linear data. arrays are fixed size. we know their limits in advance and the allocated memory. insertion or deletion in a new element in an array is hella bad. gotta make more room and shift all the elements. so linked lists are very good if you have a dynamic size and need to edit the elements inside a lot. the drawbacks of linked lists are no random access allowed, we have to access starting from the first node so we cant binary search a linked list. We need to use more memory space for the pointers required. arrays have better cache so it can be faster.

How to build and use linked lists
We need a node structure. It will hold data or a value, and we need a pointer to the next, these 2 values are the bare minimum. Linked lists either point to next or null.we need to malloc. 

nodePtr first = NULL
first = malloc (sizeof(node))
first->next = NULL;

first->data = 61;
first->next = malloc size of(node))
first->next->next = NULL;

stuff like this is basic.


