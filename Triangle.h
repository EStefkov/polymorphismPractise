#pragma once
#include "figure.h"
class CTriangle :public CFigure
{
protected:
  float a, b, c;
public:
	CTriangle(void);
	CTriangle(float, float, float);
	virtual void getData();
	virtual void display();
	float perimeter();
};

