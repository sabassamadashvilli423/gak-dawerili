#include "Rectangle.h"
Rectangle::Rectangle() {

}
Rectangle::Rectangle(int a, int b) {
	this->a = a;
	this->b = b;
}
void Rectangle:: seta(int a) {
	this->a = a;
}
void Rectangle::setb(int b) {
	this->b = b;
}

int Rectangle::geta(){
	return this->a;

}
int Rectangle::getb() {
	return this->b;
}
