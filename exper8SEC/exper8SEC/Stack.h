#pragma once
#include <iostream>
#include"IOException.h"

using namespace std;

template<typename T>
class Stack
{
public:
	Stack(const int& num = 10);
	~Stack() { delete[] stack; };
	void push(T num);
	T pop();
	int length();
private:
	T* stack;
	int size;
};

template<typename T>
Stack<T>::Stack(const int& num)
{
	stack = new T[num];
	size = 0;
}

template<typename T>
void Stack<T>::push(T num)
{
	stack[size] = num;
	size++;
}

template<typename T>
T Stack<T>::pop()
{
	T temp = -1;
	size--;
	try
	{
		if (size < 0)
		{
			throw IOException();
		}
		temp = stack[size];
		stack[size] = 0;
	}
	catch (IOException e)
	{
		e.printStack();
	}
	return temp;
}

template<typename T>
int Stack<T>::length()
{
	return this->size;
}
