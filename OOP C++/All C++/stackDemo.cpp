#include<iostream>
#include"Stack.h"
using namespace std;
using namespace ds;

int main_13(){

	Stack2<int> st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);

	cout << st.pop() << "\t" << st.getSize() << endl;
	cout << st.pop() << "\t" << st.getSize() << endl;
	cout << st.pop() << "\t" << st.getSize() << endl;
	cout << st.pop() << "\t" << st.getSize() << endl;
	cout << st.pop() << "\t" << st.getSize() << endl;
	

	system("pause");
	return 0;
}