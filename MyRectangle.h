#pragma once
#include "figure.h"
class CMyRectangle :
	public CFigure
{
protected:
	float x , y;
public:
	CMyRectangle(void);
	CMyRectangle(float, float);
	virtual void getData();
	virtual void display();
	float perimeter();
};

