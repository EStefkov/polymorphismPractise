#include "StdAfx.h"
#include "Figure.h"
#include <string>
#include <iostream>
using namespace std;


CFigure::CFigure(void)
{
	color = "not specified";
}


CFigure::CFigure(string _color)
{
	_color = color;
}


void CFigure::getData(){
	
	cout<<"Enter color: "; cin >> color;
}


void CFigure::display(){
	cout<<"The color is "<< color << endl;
}