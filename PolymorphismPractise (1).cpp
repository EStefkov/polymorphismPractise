
#include "stdafx.h"
#include "Figure.h"
#include "MyRectangle.h"
#include "Triangle.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	CFigure *figures[30];
	int numOfFigures = 0, choice;
	float paramSum = 0;
	


	do{
		cout<<"\nMenu\n";
		cout<<"1-enter a new figure chose T for triangle or R for rectangle \n";
		cout<<"2-display all figure's info\n";
		cout<<"3-display the total from the perimeters\n";
		cout<<"0-for end\n";
		cin>>choice;

		switch(choice){
		case 0:break;

		case 1:
			{
				char TorR;
				cout<<"Triangle or Rectangle: ";cin>>TorR;
				if(TorR == 'T' || TorR == 't')
				{
					figures[numOfFigures] = new CTriangle;
					figures[numOfFigures++] -> getData();
				}
				else if(TorR == 'R' || TorR == 'r')
				{
					figures[numOfFigures] = new CMyRectangle;
					figures[numOfFigures++] -> getData();
				}
				break;
			}

		case 2:
			{
				for(int i = 0; i < numOfFigures; i++)
				{
					figures[i] -> display();
				}
				break;
			}

		case 3:
			{
				for(int i = 0; i < numOfFigures; i++)
				{
					paramSum += figures[i] -> perimeter();
					
				}
				cout<<"The sum of the perimeters is "<< paramSum << endl;
				break;
			}

		case 4:
			{
				for(int i = 0; i < numOfFigures; i++)
				{
					CMyRectangle* rect = dynamic_cast<CMyRectangle*>(figures[i]);

					if(rect != nullptr)
					{
					 cout <<"All the rectangles' colors are:  \n";
					 cout << rect ->getColor() << endl;
					}
				}
				break;
			}
			
		};



	}while(choice != 0);


}