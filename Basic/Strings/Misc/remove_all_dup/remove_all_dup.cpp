#include<iostream>
#include<cstring>

void rem_all_dup(char* s, int n){ 
   	// Used as index in the modified string 
	int index = 0;    
     
   	// Traverse through all characters 
   	for (int i=0; i<n; i++) { 
         
    	 // Check if str[i] is present before it   
     	int j;   
     	for (j=0; j<i; j++){  
        	if (s[i] == s[j]) 
           	break; 
	}
     	// If not present, then add it to 
     	// result. 
     	if (j == i) 
        	s[index++] = s[i]; 
   	} 
     
	s[index] = '\0';
   	return; 
} 

int main(){
	char str[] = "geeksforgeeks";

	rem_all_dup(str, std::strlen(str));

	std::cout<<str;

	return 0;
}
