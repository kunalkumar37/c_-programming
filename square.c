// Efficient C++ method to find sum of cubes of 
// first n odd numbers. 
#include <iostream> 
using namespace std; 

int cubeSum(int n) 
{ 
	return n * n * (2 * n * n - 1); 
} 

int main() 
{ 
	cout << cubeSum(4); 
	return 0; 
} 
