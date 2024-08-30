#include <iostream>
using namespace std;

class Stack{
	public:
	char st[100] = {0};
	char top;
	
	char pop(){
		if (top == 0)
			return '\0';
		else
			return st[--top];
	}
	
	void push(char n){
		st[top] = n;
		top++;
	}
	
	bool isEmpty(){
		if(top == 0)
			return true;
		else
			return false;
	}
	
	int size(){
		return top;
	}
};

bool parethesisCheck(char expression[]) {
	Stack st;
	for(int i = 0; expression[i] != '\0'; i++){
		char ch = expression[i];
		switch (ch){
			case '(':
			case '{':
			case '[':
				st.push(ch);
			break;
			case ')':
				if(!st.isEmpty())
				{
					if(st.pop() != '(')
						return false;
				}
			break;
			case '}':
				if(!st.isEmpty())
				{
					if(st.pop() != '{')
						return false;
				}
			break;
			case ']':
				if(!st.isEmpty())
				{
					if(st.pop() != '[')
						return false;
				}
		}
	}
	return true;
}

int main(){
	
	char expression[100];
	
	cout << "Enter the expression: ";
	cin >> expression;
	
	if(parethesisCheck(expression))
		cout << "The expression is properly parethensized!";
	else
		cout << "The expression is NOT properly parethensized!";
	
	return 0;
}
