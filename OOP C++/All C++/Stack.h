#include"linkedList.h"
using namespace ds3;

template <class T2>
class Stack2 : public Vector3<T2> {
	
private:
	int size = 0;

public:
	//Stack2() : Vector2<T2>(null) {}
	void push(T2 value);
	T2 pop();
	int getSize();
};

/*template<class T2>
inline Stack2<T2>::Stack2() : Vector2<T2>() {

}*/

template<class T2>
void Stack2<T2>::push(T2 value) {
	this->add(value);
	size++;
}

template<class T2>
T2 Stack2<T2>::pop() {
		
	if (size == 0)
		return NULL;

	Node<T2>* temp = this->root;
	this->root = this->root->next;

	T2 val = temp->val;
	delete temp;
	size--;
	return val;
}

template<class T2>
inline int Stack2<T2>::getSize() {

	return size;
}