#include <iostream>
#include "Rectangle.h"
using namespace std;
int perimeter(Rectangle a) {
	return 2*(a.a + a.b);
}
int perimeter(int a, int b) {
	return 2 * (a + b);
}
int main()
{
	Rectangle a(10,5);
	cout << perimeter(a) << endl;
	cout << perimeter(a.geta(), a.getb())<<endl;
	a.seta(5);
	a.setb(20);
	cout << perimeter(a) << endl;
	cout << perimeter(a.geta(), a.getb());
}