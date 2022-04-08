
// 1. header
class Rectangle
{
private:
	int width, height;

public:
	Rectangle(int w, int h); // constructor
	~Rectangle(); // destructor
	
	void setValues(int w, int h);
	int area();

	Rectangle operator + (const Rectangle& rect);

};
