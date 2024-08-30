#include <iostream>
using namespace std;

class Stack{
	public:
	int st[100] = {0};
	int top;
	
	int pop(){
		if (top == 0)
			return -9999;
		else
			return st[--top];
	}
	
	void push(int n){
		st[top] = n;
		top++;
	}
	
	void isEmpty(){
		if(top == 0)
			cout << "Stack is empty!";
		else
			cout << "Stack is NOT empty!";
	}
	
	int size(){
		return top;
	}
};

int main(){
	Stack s;
	int ch;
	while(true){
		cout << "\nMENU:\n1. Push\n2. Pop\n3. Check if the stack is empty\n4. Size\n5. Exit\nEnter your choice: ";
		cin >> ch;
		switch(ch)
		{
			case 1: int push;
					cout << "Enter number: ";
					cin >> push;
					s.push(push);
			break;
			case 2: cout << "Popped Number: " << s.pop();
			break;
			case 3: s.isEmpty();
			break;
			case 4: cout << "Size of the stack: " << s.size();
			break;
			case 5: return 0;
		}
	}
}
