// Greatest Common Divisor
// Euclid's algorithm

#include <iostream>

int gcd(int aNumber1, int aNumber2)
{
	int lResult = 0;
	
	if(aNumber2 == 0)
	{
		lResult = aNumber1;
	}
	else
	{
		lResult = gcd(aNumber2, aNumber1%aNumber2);
	}
	
	return lResult;
}

int main()
{
	int lNumber1, lNumber2;
	
	std::cout << "Enter first number: ";
	std::cin >> lNumber1;
	std::cout << "Enter second number: ";
	std::cin >> lNumber2;
	
	int lResult = gcd(lNumber1, lNumber2);
	
	std::cout << "The greatest common divisor is: " << lResult;
	
	return 0;
}