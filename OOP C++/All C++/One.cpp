#include<iostream>
#include<string>

using namespace std;

typedef unsigned int uint;

int main_0()
{
	int x = 5, y(6), z{7}; // many ways to intialization variables
	cout << &x << endl;

	auto q = long(x) + y + z + 3.5 ; // auto datatype foollow the intialzation value type
	cout << q << endl << typeid(q).name() << endl; // data type name of q

	decltype(q) e = 4.5; // e is the same datatype of q

	unsigned int a = 5;
	uint b = 6;
	cout << "Size of b = "<<sizeof(b) << endl;

	long x1 = 100l;
	long long x2 = 100ll;
	unsigned long long x3 = 175ull;

	char ch = 'A';
	string st = "Ahmed";
	wstring wst = L"hellow";
	wchar_t wch = L'M'; // upto 4 bytes
	char32_t ch32 = U'0';
	cout << ch32 << endl;

	int hex = 0xab45; // 0x reffers to that the number is Hexdecimal 
	cout << hex << endl; // the output int 43845
	cout << std::hex << hex << endl; // the output int ab45

	int bin = 0b1010; // 0b reffers to that the number is binarry
	cout << bin << endl; // the output hexa a
	// cout << std::binary << bin << endl; // the output int ab45


	system("pause");
	return 0;
}