// Least Common Multiple

#include <iostream>
#include <cmath>

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

int lcm(int aNumber1, int aNumber2)
{
	int lResult = 0;
	// At least one number should be different than 0 in order to not have division by 0
	if(aNumber1 != 0 || aNumber2 != 0)
	{
		lResult = abs(aNumber1 * aNumber2) / gcd(aNumber1, aNumber2);
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
	
	int lResult = lcm(lNumber1, lNumber2);
	
	std::cout << "The result is: " << lResult ;
	
	return 0;
}