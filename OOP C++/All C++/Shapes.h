#include<iostream>
using namespace std;

namespace sh { // انشأت نيم سبيس خاص بهذا الملف لتشابه اسم بعض الكلاسات مع ملفات أخرى

	class Shape {

	protected:
		int width, height;

	public:
		Shape(int width, int height) {
			this->width = width;
			this->height = height;
			cout << "Shape created\n";
		}
		Shape(int width) { // overloading
			this->width = width;
			this->height = width;
			cout << "Shape created\n";

		}

		// virtual function must be intialized in base class
		//virtual int area() = 0; // must be Overridden in child class // must be implemented on child class
		// في اي كلاس يرث الكلاس الام بجب عمل تعريف خاص بهذه الميثود الفيرشوال

		void setValues(int width, int height) {
			this->width = width;
			this->height = height;
		}
	};

	class Rectangle : public Shape {
	public:
		Rectangle(int width, int height) : Shape(width, height) {
			cout << "Rectangle created\n";

		}
		int area() {
			return this->width * this->height;
		}
	};

	class Square : public Shape {
	public:
		Square(int width) : Shape(width) {
			cout << "Square created\n";

		}
		int area() {
			return this->width * this->width;
		}
	};
	
	class Triangle : public Shape {
	public:
		Triangle(int width, int height) : Shape(width, height) {
			cout << "Square created\n";

		}
		int area() {
			return this->width * this->height / 2;
		}
	};
}