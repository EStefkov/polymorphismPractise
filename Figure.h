#pragma once
#include <string>
using namespace std;

class CFigure
{
protected:
	string color;
public:
	CFigure(void);
	CFigure(string);
	virtual void getData();
	virtual void display();
	virtual float perimeter(){return 0.0;}  //virtual float perimeter() = 0;  
	string getColor(){return color;};
};

