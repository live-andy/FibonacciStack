#pragma once
#ifndef FIBONACCI_H
#define FIBONACCI_H
#define FIBONACCI_ZERO 0
#define FIBONACCI_ONE 1
#include <iostream>

typedef struct StackNode
{
	bool IsFibonacci;
	int Data;
	struct StackNode *Next;
}StackNode;

class Fibonacci
{
public:
	Fibonacci(int InputData);
	int answer(void);
private:
	void push(int InputData);
	StackNode *pop(void);
	bool IsEmpty(void);
	int Elements;
	int Answer;
	StackNode *Header;
	StackNode *Rear;
};

#endif