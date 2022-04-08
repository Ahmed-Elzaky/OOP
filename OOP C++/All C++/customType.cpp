#include<iostream>
#include<string>

using namespace std;

struct Info
{
	string name;
	int age;
	float GPA;

};

int main_1()
{
	struct Info ahmedInfo;
	ahmedInfo.name = "Ahmed Elzeky";
	ahmedInfo.age = 26;
	ahmedInfo.GPA = 3.91;
	cout << "Name: " << ahmedInfo.name << endl;
	cout << "Age: " << ahmedInfo.age << endl;
	cout << "GPA: " << ahmedInfo.GPA << endl;

	Info userInfo[2];  
	userInfo[0].name = "Ahmed Adel";
	userInfo[0].age = 20;
	userInfo[0].GPA = 3.74;
	cout << "Name: " << userInfo[0].name << endl;
	cout << "Age: " << userInfo[0].age << endl;
	cout << "GPA: " << userInfo[0].GPA << endl;

	userInfo[1].name = "Ahmed Elzeky";
	userInfo[1].age = 26;
	userInfo[1].GPA = 3.91;
	cout << "Name: " << userInfo[1].name << endl;
	cout << "Age: " << userInfo[1].age << endl;
	cout << "GPA: " << userInfo[1].GPA << endl;

	cout << "the number of the array elements = " << sizeof(userInfo) / sizeof(userInfo[0]) << endl;




	return 0;
}