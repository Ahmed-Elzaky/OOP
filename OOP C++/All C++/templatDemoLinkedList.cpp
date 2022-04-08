// design a vector by using linked list
#include"linkedList.h"
#include<iostream>
using namespace std;
using namespace ds; // أنشأته ليكون خاص بملف الفيكتور لتشابه اسم النود استراكت مع ملفات أخري

// Standard Template Language
// C++ stnadard template library std
int main_11() {

	struct Node<int>* newNode = new Node<int>; // struct may be deleted
	newNode->val = 12;
	newNode->next = nullptr;
	cout << newNode->val << endl;

	Node<int> newNode2;
	newNode2.val = 9;
	newNode2.next = nullptr;
	cout << newNode2.val << endl;


	Vector2<int> vec(6);
	vec.add(12);
	vec.add(5);
	vec.add(45);

	Node<int>* currentNode = vec.getRoot();
	while (currentNode != nullptr) {
		cout << currentNode->val << endl;
		currentNode = currentNode->next;
	}
	
	Vector2<string> vec2("ahmed");
	vec2.add("elmetwaly");
	vec2.add("elzeky");
	vec2.add("elmorsy");

	Node<string>* currentNode2 = vec2.getRoot();
	while (currentNode2 != nullptr) {
		cout << currentNode2->val << endl;
		currentNode2 = currentNode2->next;
	}


	system("pause");
	return 0;
}