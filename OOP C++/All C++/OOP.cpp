#include<iostream>
#include"Rectangle.h"

using namespace std;

// يتكون الكلاس من 
// 1. header
// 2. implementation

int main_()
{
	{ // two carely braces to Local Domain
		Rectangle rect1(5, 6); // 
		// rect1.setValues(10, 20);
		cout << "rect1 area = " << rect1.area() << endl;
		
		Rectangle rect2(7, 9);
		// rect1.setValues(10, 20);
		cout << "rect1 area = " << rect1.area() << endl;

		// to be not remaining till the end of program and 
		// class will be deleted by it's destructor before closing brace

		Rectangle rect3 = rect1 + rect2;
		cout << "rect3 area = " << rect3.area() << endl;

	}

	system("pause");
	return 0;
}