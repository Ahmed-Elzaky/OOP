#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

//#define SIZE 5 // هذا يكون جزء من اساس الكومبيلر في عملية البريبروسيسنج

int main_4()
{
	int num = 5;
	int* ptrNum = &num;
	int** ptrPtrNum = &ptrNum;

	cout << "num = " << num << endl;
	cout << "&num = " << &num << endl;
	cout << "ptrNum = " << ptrNum << endl;
	cout << "*ptrNum = " << *ptrNum << endl;
	cout << "&ptrNum = " << &ptrNum << endl;
	cout << "ptrPtrNum = " << ptrPtrNum << endl;
	cout << "*ptrPtrNum = " << *ptrPtrNum << endl;
	cout << "**ptrPtrNum = " << **ptrPtrNum << endl;
	cout << "&ptrPtrNum = " << &ptrPtrNum << endl;

	// Dynamically Allocated Memory
	int* dptr = new int;
	*dptr = 103;
	cout << "dptr = " << dptr << endl;
	cout << "*dptr = " << *dptr << endl;
	cout << "&dptr = " << &dptr << endl;
	delete dptr;

	// Dynamically Array Allocated Memory
	int SIZE = 3;
	int* darr = new int[SIZE];
	darr[0] = 10; // equivalent to *( dptr + 0 ) 
	darr[1] = 13; // equivalent to *( dptr + 1 )
	darr[2] = 15; // equivalent to *( dptr + 2 )
	for (int i = 0; i < SIZE; i++)
	{
		cout << darr[i] << " ";
	}
	cout << endl;
	delete[] darr;


	unique_ptr<int> pptr(new int); // smart pointer // delete ptr not needed with smart ptr
	*pptr = 9;



	system("pause");
	return 0;
}