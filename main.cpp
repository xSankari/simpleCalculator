#include <iostream>
#include <string>

using namespace std;

int addFoo(int, int);
int subFoo(int, int);
int multFoo(int, int);
int divFoo(int, int);

int main()
{
	int operationInput;
	int firstNum;
	int secondNum;

	cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\nYour operation: ";
	cin >> operationInput;

	cout << "Enter your first number: ";
	cin >> firstNum;
	cout << "Enter your second number: ";
	cin >> secondNum;

	if(operationInput == 1)
	{
		addFoo(firstNum, secondNum);
	}
	else if(operationInput == 2)
	{
		subFoo(firstNum, secondNum);
	}
	else if(operationInput == 3)
	{
		multFoo(firstNum, secondNum);
	}
	else if(operationInput == 4)
	{
		divFoo(firstNum, secondNum);
	}
	else
	{
		cout << "Error... Invalid input" << endl;
	}

	cin.get();

	return 0;
}

int addFoo(int n1, int n2)
{
	int finalNum = n1+n2;
	cout << n1 << " + " << n2 << " = " << finalNum << endl;
	return finalNum;
}

int subFoo(int n1,int n2)
{
	int finalNum = n1-n2;
	cout << n1 << " - " << n2 << " = " << finalNum << endl;
	return finalNum;
}

int multFoo(int n1, int n2)
{
	int finalNum = n1*n2;
	cout << n1 << " * " << n2 << " = " << finalNum << endl;
	return finalNum;
}

int divFoo(int n1, int n2)
{
	int finalNum = n1/n2;
	if(n2 == 0)
	{
		cout << "Error, can't divide by zero" << endl;
		return 0;
	}
	else
	{
		cout << n1 << " / " << n2 << " = " << finalNum << endl;
		return finalNum;
	}
}
