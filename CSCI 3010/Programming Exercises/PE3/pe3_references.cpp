#include <iostream>

// Rebecca Donohoe
// PE3
// 09/08/18

// Write any functions you need here!



int main() {
	// Add as many prints to cout as you need to answer the questions.
	// Leave them in your code when you turn it in.
	// If you have lines of code that cause errors that test the questions,
	// leave this code in your file but comment it out.
	
	// 1) Declare an int
	int x;
	
	// 2) Declare a pointer to that int
	int* y = &x;
	
	// 3) Increment the int via the pointer

	*x = *x + 1;
	//(*x)++;
	
	// 4) Declare a reference to your int
	int& referenceToX = x;
	 
	// 5) Increment the int via the reference
	referenceToX = x++;

	// 6) When you increment the int via the variable declared in #1, from which
	// variables can you see the changes?
	// Answer: 



	// 7) When you increment the int via the pointer declared in #2, from which
	// variables can you see the changes?
	// Answer: 

	// 8) When you increment the int via the reference declared in #4, from which
	// variables can you see the changes?
	// Answer: 

	// 9) Write a function that takes an int * parameter. How would you pass the 
	// variable from #1 into this function? (write the function call below)
	void function1(int* parmeter);

	// 10) Can you pass your reference from #4 to the function from #9?
	// Answer:
	void function1(int& parmeter);

	// 11) Write a function that takes an int & parameter. How would you pass the 
	// variable from #1 into this function? (write the function call below)



	// 12) Can you pass your pointer from #2 to the function from #11?
	// Answer:



	// 13) Can you pass your reference from #4 to the function from #11?
	// Answer:
}