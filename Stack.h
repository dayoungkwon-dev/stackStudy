#pragma once

class Stack {
private:
	int top;
	int MAX_SIZE;
	int* stack;
public:
	Stack(int size);
	bool isFull();
	bool isEmpty();
	int pop();
	void push(int element);
	int peek();
	int size();
};
