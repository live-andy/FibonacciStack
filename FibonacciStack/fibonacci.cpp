#include "fibonacci.h"


Fibonacci::Fibonacci(int InputData)
{
	Header = NULL;
	Rear = NULL;
	Elements = 0;
	Answer = 0;
	push(InputData);
}

void Fibonacci::push(int InputData)
{
	Elements = Elements + 1;
	StackNode *OriginalHeader;
	StackNode *Constructer;
	OriginalHeader = Header;
	Constructer = new StackNode;
	Constructer->Data = InputData;
	Constructer->IsFibonacci = true;
	Header = Constructer;
	Constructer->Next = OriginalHeader;

}

StackNode *Fibonacci::pop(void)
{
	if (IsEmpty()) return NULL;
	StackNode *Result;
	Elements = Elements - 1;
	Result = Header;
	Header = Header->Next;
	Result->Next = NULL;
	return Result;
}

bool Fibonacci::IsEmpty(void)
{
	if (Elements == 0) return true;
	else return false;
}

int Fibonacci::answer(void)
{
	StackNode *PopReceiver;
	int PopData;
	while (!IsEmpty())
	{
		PopReceiver = pop();
		if (PopReceiver->Data >= 2)
		{
			PopData = PopReceiver->Data;
			delete PopReceiver;
			push(PopData - 2);
			push(PopData - 1);
		}
		else
		{
			PopData = PopReceiver->Data;
			delete PopReceiver;
			Answer += PopData;
		}
	}
	return Answer;
}