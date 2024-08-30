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

bool checkPalindrome(char str[]){
	int length;
	for (length = 0; str[length] != '\0'; length++);
	
	Stack st;
	
	for (int i = 0; i < length / 2; i++)
		st.push(str[i]);
	
	if(length % 2 == 1)
		length++;
		
	for (int i = length / 2; i < length; i++)
	{
		char ch = str[i];
		if (st.pop() != ch)
			return false;
	}
	return true;
}

int main(){
	
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	
	if (checkPalindrome(str))
		cout << "The string is palindrome.";
	else
		cout << "The string is NOT palindrome.";
	
	return 0;
}
