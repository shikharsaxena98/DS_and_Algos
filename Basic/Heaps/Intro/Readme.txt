========================================HEAPS=========================================

Types: (based on priority)
	1. max heap 
	2. min heap

Take a complete binary tree with parent priority greater than child priority (Max priority)

store in bfs_level format in array

if parent idx = i:
	child nodes at : (2*i +1) and (2*i + 2)

if child idx = j:
	parent_node at : floor((j-1)/2)

======Building a MAX HEAP=============

INSERTION
when you add an element you add it on the last position on the bfs representing array:

Case 1:
	the value of this recently added child is greater 

Solution:
	Up heapify: swap the child and parent unless Max priority is satisfied

DELETION
When you delete the peek(root node) element from a heap, made using vectors, tou can delete it by swapping the root node to the last entry in the heap i.e the lowermost and rightmost element and then popping it and then down heapify the heap.

that is:	
	step 1. swap first element with last of heap
	step 2. pop_back
	step 3.	down heapify

	Down heapify:  if the parent is less than tthe child node swap until heap becomes balanced
	

	 
