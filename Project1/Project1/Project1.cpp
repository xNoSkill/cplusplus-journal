#include <iostream>
#define myFavoriteNumber 15

int addition(int y)
{
	return myFavoriteNumber + y;
}

int main()
{
	std::cout << addition(7) << std::endl;
	return 0;
}