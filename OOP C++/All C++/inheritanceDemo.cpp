#include<iostream>
#include"Shapes.h"
using namespace std;
using namespace sh;

int main_15()
{
	Rectangle rect(2, 6); // sh::Rectangle rect(2, 6); -> if we did not use (using namespace sh;) out the main
	//rect.setValues(10, 20);
	cout << "Rectangl's area = " << rect.area() << endl;
	
	Square Squa(6); // 	sh::Square Squa(6);
	//rect.setValues(10, 20);
	cout << "Square's area = " << Squa.area() << endl;


	system("pause");
	return 0;
}