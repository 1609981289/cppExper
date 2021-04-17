#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack<int> stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.push(6);
	stack.push(7);
	stack.push(8);
	stack.push(9);
	stack.push(10);
	stack.push(11);
	stack.push(12);

	cout << "³¤¶È:"<<stack.length() << endl;

	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;

	Stack<char> c_stack;
	c_stack.push('a');
	c_stack.push('b');
	c_stack.push('c');
	c_stack.push('d');
	c_stack.push('e');
	c_stack.push('f');
	c_stack.push('g');
	c_stack.push('h');

	cout << "³¤¶È:" << c_stack.length() << endl;

	cout << c_stack.pop() << endl;
	cout << c_stack.pop() << endl;
	cout << c_stack.pop() << endl;
	cout << c_stack.pop() << endl;
	cout << c_stack.pop() << endl;
	cout << c_stack.pop() << endl;
	cout << c_stack.pop() << endl;
	cout << c_stack.pop() << endl;
	cout << c_stack.pop() << endl;

	Stack<double> d_stack;
	d_stack.push(2.4);
	d_stack.push(3.4);
	d_stack.push(67.43);
	d_stack.push(2.34);
	d_stack.push(66.3);

	cout << "³¤¶È:" << d_stack.length() << endl;

	cout << d_stack.pop() << endl;
	cout << d_stack.pop() << endl;
	cout << d_stack.pop() << endl;
	cout << d_stack.pop() << endl;
	cout << d_stack.pop() << endl;
	cout << d_stack.pop() << endl;

//³¤¶È:12
//12
//11
//10
//9
//8
//7
//6
//5
//4
//3
//2
//1
//The stack is empty!
//- 1
//The stack is empty!
//- 1
//³¤¶È:8
//h
//g
//f
//e
//d
//c
//b
//a
//The stack is empty!
//ÿ
//³¤¶È : 5
//66.3
//2.34
//67.43
//3.4
//2.4
//The stack is empty!
//- 1


	cin.get();
	return 0;
}