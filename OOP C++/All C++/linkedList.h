#include<iostream>
using namespace std;

namespace ds { // userdefined name space
	// خاص بهذا الملف
	// because there is a struct with name "Node" in another file

	template <class temp> // المستخدم هو من يحدد نوع البيانات المدخلة
	struct Node {
		temp val;  // temp
		Node* next;
	};

	template <class T>
	class Vector2 {
	protected: // to be inherited in child classes.. but instance can not access it.
		ds::Node<T>* root = nullptr;

	public:
		Vector2(T root);
		void add(T value);
		ds::Node<T>* getRoot();
 		~Vector2();

	};

	template<class T>
	Vector2<T>::Vector2(T start)
	{
		/*ds::Node<T>* newNode2 = new ds::Node<T>;
		newNode2->val = start;
		root = newNode2 ;
		newNode2->next = nullptr;*/

		/*root = new ds::Node<T>;
		root->val = start;
		root->next = nullptr;*/
		add(start);
	}

	template<class T>
	void Vector2<T>::add(T value) {

		ds::Node<T>* newNode = new ds::Node<T>;
		newNode->val = value;

		if (root == nullptr) {

			root = newNode;
			newNode->next = nullptr;
			return;
		}
		// root always point at fisrt element in linked list
		newNode->next = root;
		root = newNode;

	}

	template<class T>
	Vector2<T>::~Vector2() {
		cout << "vector is deleted";
		while (root != nullptr) {

			ds::Node<T>* temp = root;
			root = root->next;
			delete temp;
		}
	}

	template<class T>
	ds::Node<T>* Vector2<T>::getRoot() {
		return root;
	}

}
namespace ds3 {

	template <class temp> // المستخدم هو من يحدد نوع البيانات المدخلة
	struct Node {
		temp val;  // temp
		Node* next;
	};

	template <class T>
	class Vector3 {
	protected: // to be inherited in child classes.. but instance can not access it.
		ds3::Node<T>* root = nullptr;

	public:
		//Vector3(T root);
		void add(T value);
		ds3::Node<T>* getRoot();
		~Vector3();

	};

	//template<class T>
	//Vector3<T>::Vector3(T start)
	//{
	//	/*ds::Node<T>* newNode2 = new ds::Node<T>;
	//	newNode2->val = start;
	//	root = newNode2 ;
	//	newNode2->next = nullptr;*/

	//	/*root = new ds::Node<T>;
	//	root->val = start;
	//	root->next = nullptr;*/
	//	add(start);
	//}

	template<class T>
	void Vector3<T>::add(T value) {

		ds3::Node<T>* newNode = new ds3::Node<T>;
		newNode->val = value;

		if (root == nullptr) {

			root = newNode;
			newNode->next = nullptr;
			return;
		}
		// root always point at fisrt element in linked list
		newNode->next = root;
		root = newNode;

	}

	template<class T>
	Vector3<T>::~Vector3() {
		cout << "vector is deleted";
		while (root != nullptr) {

			ds3::Node<T>* temp = root;
			root = root->next;
			delete temp;
		}
	}

	template<class T>
	ds3::Node<T>* Vector3<T>::getRoot() {
		return root;
	}

}