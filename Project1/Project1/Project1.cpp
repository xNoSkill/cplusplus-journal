#include <iostream>
#include "add.h"
#define myFavoriteNumber 15.11.18

int doMultiplication;
int doAddition;
int doQuaddrierung;
int doDivide;
int doSomething;

int main()
{
	int a;
	std::cout << "Please enter your wanted input: " << std::endl;
	std::cin >> a;
#define userInput a
#ifdef userInput
	std::cout << doDivide(userInput) ;
#endif // userInput
	return 0;
}