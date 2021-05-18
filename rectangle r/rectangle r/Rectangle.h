#pragma once
class Rectangle
{
private:
	int a, b;
public:
	Rectangle();
	Rectangle(int a, int b);
	friend int perimeter(Rectangle a);
	int geta();
	int getb();
	void seta(int a);
	void setb(int b);
};

