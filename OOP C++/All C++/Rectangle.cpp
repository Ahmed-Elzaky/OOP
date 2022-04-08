#include"Rectangle.h"
#include<iostream>
using namespace std;


// 2. implementation
Rectangle::Rectangle(int w, int h)
{
	this->width = w;  // this >> هو بوينتر يشير على الكلاس الحالي
	this->height = h;
	cout << "Rectangle is created width * height(" << this->width << " * " << this->height << ")\n";
}

Rectangle::~Rectangle()
{
	cout << "Rectangle is deleted\n";
}

void Rectangle::setValues(int w, int h)
{
	this->width = w;
	this->height = h;
}


int Rectangle::area()
{
	int area = this->width * this->height;
	return area;
}

Rectangle Rectangle::operator + (const Rectangle& rect)
{
	int width = this->width + rect.width;
	int height = this->height + rect.height;
	return Rectangle(width, height);

}