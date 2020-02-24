

Operations on Heaps in STL:

1. make_heap(): 
	Used to Build a heap

	Take a vector v,
	apply make_heap(v.begin, v.end),
	v is now a heap

2. push_heap():
	Insert an element in the heap
	
	1. push_back() on the container
	2. push_heap() on make it heap
	


3. pop_head():
	Delete the maximum number in the heap
	
	1. use pop_head(v.begin(), v.end()) first
	2. use v.pop_back() after it


4. front():
	Gets teh maximum element from the heap (this is a vector container method)




5. is_heap():
	check if the container is a heap

	is_heap(v.begin(), v.end())

