#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

#define SIZE 5 // هذا يكون جزء من اساس الكومبيلر في عملية البريبروسيسنج

int main_3()
{
	// int SIZE = 5 // intializaition happens at the run time 
	int arr[SIZE] = { 10, 20, 30, 40, 50 }; // array size should be intialized at the compiler time as a const or by #define
	// بذلك يكون الاراي حجمها ثابت ومعروف قبل التنفيذ
	
	char str[SIZE] = "ahme"; // char str[SIZE] = { 'a', 'h', 'm', 'e', '\0' }

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
	
	// 2d array
	int numb[2][3] = { {10, 20, 30} , {4, 5, 10} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setfill(' ') << setw(2) << numb[i][j] << " ";

		}
		cout << endl;
	}
	system("pause");
	return 0;
}
