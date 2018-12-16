#include <iostream>

int doMultiplication(int x,int y)
{
	return x * y;
}

int doAddition(int x,int y)
{
	return x + y;
}

int doQuaddrierung(int x)
{
	return x * x;
}

int doMinus(int x,int y)
{
	return x - y;
}

int doDivide(int a)
{
	return a / 2;
}

int doSomething()
{
#ifdef userInput
	std::cout << doDividition();
#endif // usersInput
	return 0;

}