#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

/* 
 call by value, by reference or by pointer
 default parameters
 every Function has it's Signature(return datatype, name, number of parameters and parameters datatype)
 Overloading >> the same function name but different number of parameters
 Polymorphism >> the same function name and the same number of parameters

 function prototype, header and defention.
 void function not returning any thing to operating system.
*/

int add(int a, int b)
{
	return a + b;
}

// function pointer >> has the same signature of the function it is pointing at
int (*addPtr)(int, int);


typedef int (*AddPtr)(int, int);  //////////////////

void printMe(AddPtr ptrFunction)
{
	cout << ptrFunction(3, 7) << endl;
}

int main_6()
{
	 // lambda λ
	auto addFunction1 = [](int a, int b) -> int  // by value
	{
		return a + b;
	};
	auto addFunction2 = [=](int a, int b) -> int  // by value
	{
		a++;
		b++;
		return a + b;
	};
	auto addFunction3 = [](int &a, int &b) -> int  // by reference
	{
		a++;
		b++;
		return a + b;
	};
	auto addFunction4 = [](int* a, int* b) -> int {  // by pointer
		return *a + *b;
	};

	int a = 5, b = 6;
	int r = addFunction1(a, b);
	cout << "r1 = " << r << endl;
	r = addFunction2(a, b);
	cout << "r2 = " << r << endl;
	r = addFunction3(a, b);
	cout << "r3 = " << r << endl;
	cout << "a = " << a << "\tb = " << b << endl;
	r = addFunction4(&a, &b);
	cout << "r4 = " << r << endl;
	cout << "a = " << a << "\tb = " << b << endl;


	// function pointer
	addPtr = &add;
	cout << "addPtr " << addPtr(3, 5) << endl;

	printMe(&add);
	
	// function pointer with lambda
	printMe([](int a, int b) {
		int r = a + b - 1;
		return r;
		});

	system("pause");
	return 0;
}