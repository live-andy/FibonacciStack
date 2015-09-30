#include <iostream>
#include "fibonacci.h"

int main(void)
{
	Fibonacci Test(10);
	std::cout << Test.answer();
	std::cin.get();
}