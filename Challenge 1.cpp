#include <iostream>
int main()
{
	std::cout << "Enter limit: ";
	int lLimit;
	std::cin >> lLimit;
	
	for(int lIter = 0; lIter <= lLimit; lIter++)
	{
		if((lIter % 3 == 0) || (lIter % 5 == 0))
		{
		    std::cout << lIter << " ";
		}
	}
}