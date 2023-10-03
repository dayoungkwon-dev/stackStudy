#include <iostream>
#include "stack.h"

// stack 자료구조 class로 구현.

using namespace std;

Stack::Stack(int size) {
	MAX_SIZE = size;
	stack = new int[MAX_SIZE];
	top = -1;
}

// Stack이 꽉 찼는지 확인하는 함수
bool Stack::isFull() {
	if (top == MAX_SIZE - 1)
		return 1;
	else
		return 0;
}

// Stack이 비었는지 확인하는 함수
bool Stack::isEmpty() {
	if (top == -1)
		return 1;
	else
		return 0;
}

// Stack에서 최상위 요소를 꺼내는 함수
int Stack::pop() {
	if (isEmpty() == 1)
		cout << "Stack is empty\n";
	else
		return stack[top--];
}

// Stack에 element을 추가하는 함수
void Stack::push(int element) {
	if (isFull() == 1)
		cout << "Stack is full\n";
	else
		stack[++top] = element;
}

// Stack의 최상위 요소를 반환하는 함수
int Stack::peek()
{
	if (!isEmpty()) {
		return stack[top];
	}
	else {
		exit(EXIT_FAILURE);
	}
}

// Stack의 크기를 반환하는 함수
int Stack::size() {
	return top + 1;
}


int main() {
	Stack pt(3);

	pt.push(1);
	pt.pop();

	pt.push(2);
	pt.push(3);

	cout << "=> top element : " << pt.peek() << endl;
	cout << "=> stack size : " << pt.size() << endl;

	pt.pop();
	pt.pop();

	if (pt.isEmpty()) {
		cout << "The stack is empty\n";
	}
	else {
		cout << "The stack is not empty\n";
	}

	return 0;
}