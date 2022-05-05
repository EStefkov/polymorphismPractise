#include "StdAfx.h"
#include "Triangle.h"
#include "Figure.h"
#include <iostream>
using namespace std;


CTriangle::CTriangle(void)
{
	a = 0;
	b = 0;
	c = 0;
	CFigure color = "not specified";
}


CTriangle::CTriangle(float a, float b, float c)
{
	this ->a = a;
	this ->b = b;
	this ->c = c;
}


float CTriangle::perimeter(){
	float P;
	P = a + b + c;
	return P;
}


void CTriangle::getData(){
	cout<<"The triangles' parametårs are:\n";
	CFigure::getData();
	cout<<"Enter the value of the sides:\n";
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
}

void CTriangle::display(){
	CFigure::display();
	cout<<"The value of the sides is\n ";
	cout<<"a = "<< a << endl;
	cout<<"b = "<< b << endl;
	cout<<"c = "<< c << endl;
}



