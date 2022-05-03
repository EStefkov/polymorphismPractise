#include "StdAfx.h"
#include "MyRectangle.h"
#include "Figure.h"
#include <iostream>
using namespace std;

CMyRectangle::CMyRectangle(void)
{
	x = 0;
	cout<<endl;
	y = 0;
	cout<<endl;
	CFigure color = "not specified";
}


CMyRectangle::CMyRectangle(float x, float y)
{
	this -> x = x;
	this -> y = y;
}


float CMyRectangle::perimeter(){
	float Per;
	Per = 2*x + 2*y;
	return Per;
}



void CMyRectangle::getData(){
	CFigure::getData();
	cout<<"Enter the value of the sides:\n";
	cout<<"x = ";cin>>x;
	cout<<"y = ";cin>>y;
}

void CMyRectangle::display(){
	cout<<"The rectangles' parametårs are:\n";
	CFigure::display();
	cout<<"The value of the sides is\n ";
	cout<<"x = "<<x << endl;
	cout<<"y = "<<y << endl;
}

