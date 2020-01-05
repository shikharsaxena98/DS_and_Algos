Repeated Squaring (Fast Modulo Multiplication)

Technique for solving math related problems efficiently.

ex: Compute 3^10

App 1: using a for loop

	int main(){

		int base = 3;
		int exp = 10;
		int ans = 1;
		for(int i = 1; i <= exp; i++){
			ans *= base;
		}
		cout << ans;
		return 0;
	}

ISSUE: Number of Multiplications to be executed, therefore when exp is large this method is not desirable

App 2: x^n = {x*(x^2)^(n-1)/2)	if n is odd}
	    {(x^2)^(n/2)	if n is eeven}

	Complexity: O(logn) squarings
		    O(logn) multiplications

App 3: 
