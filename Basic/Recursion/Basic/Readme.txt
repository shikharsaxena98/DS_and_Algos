Basic features of recursion:

1. It handles a simple “base case” without using recursion.
	e.g: in rec_0.cpp print_hello(0) is the base case

2. It avoids cycles.
	e.g: print_hello(5) calls print_hello(4), thus avoidig an infinite loop 
	     which could have occured if it called print_hello(5) again.

3. Each call of the function represents a complete handling of the given task.
	e.g: Every function call completes the complete function.

