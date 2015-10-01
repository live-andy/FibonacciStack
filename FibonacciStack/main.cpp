#include <iostream>
#include "fibonacci.h"

int main(void)
{
	Fibonacci Test(30);
	std::cout << Test.answer();
	std::cin.get();
}