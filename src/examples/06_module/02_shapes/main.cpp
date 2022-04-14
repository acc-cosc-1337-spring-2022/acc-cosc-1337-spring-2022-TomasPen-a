//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"

using std::unique_ptr; using std::make_unique;
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	Shape* circle = new Circle();
	circle->draw();
	Shape* line = new Line();
	line->draw();

	delete circle;
	delete line;

	unique_ptr<Shape> circle1 = make_unique<Circle>();
	circle1->draw();
	
	return 0;
}