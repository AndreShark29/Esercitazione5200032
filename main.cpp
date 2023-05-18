#include <iostream>
#include "IsoTriangle.h"
#include "rhombus.h"
#include "rectangle.h"
#define DIM 100

using namespace std;

int menu_display(int index); 

int main() {
	int ObjCount = 0;
	int temp = 0;
	Polygon* container[DIM] = { 0 };
	float b, h = 0;
	float d1, d2 = 0;
	int i = 0;

	do {
		switch (menu_display(ObjCount)) {

		case 1:
		{

			
			container[ObjCount] = new Rectangle();
			Rectangle* rect = dynamic_cast<Rectangle*>(container[ObjCount]);
			cout << "inserisci i valori di base e altezza separati da uno spazio: " << endl;
			scanf_s("%f %f", &b, &h);
			rect->SetDim(b,h);
			ObjCount++;
			break;
		}
		case 2:
		{
			
			container[ObjCount] = new Rhombus();
			Rhombus* romb = dynamic_cast<Rhombus*>(container[ObjCount]);
			cout << "inserisci i valori di diagonale 1 e 2 separati da uno spazio: " << endl;
			scanf_s("%f %f", &d1, &d2);
			romb->SetDim(d1, d2);
			ObjCount++;
			break;
		}
		case 3:
		{
			
			container[ObjCount] = new IsoTriangle();
			IsoTriangle* iso = dynamic_cast<IsoTriangle*>(container[ObjCount]);
			
			cout << "inserisci i valori di base e altezza separati da uno spazio: " << endl;
			scanf_s("%f %f", &b, &h);
			iso->SetParam(b,h);
			
			ObjCount++;
			break;
		}
		case 4:
		{
			temp = ObjCount;
			for (i = 0; i < temp; i++) {
				cout << "\nobject " << i + 1 << " parameters are:\n" << endl;
				cout << "Area-->" << container[i]->GetArea() << endl;
				cout << "Perimeter-->" << container[i]->GetPerimeter() << endl;
			}
		}
		break;
		case 5:
		{
			cout << "Thank you! See you next time " << endl;

			for (i = 0; i < ObjCount; i++) {
				delete(container[i]);
			}

			exit(1);
		}
		}
	} while (true);
	
	
	
}

int menu_display(int index) {

	int choice = 1;
	cout << "------Geometry-------" << endl;
	cout << "--------Menu'--------" << endl;
	cout << "---------------------\n\n" << endl;
	cout << "1-> Rectangle" << endl;
	cout << "2-> Rhombus" << endl;
	cout << "3-> IsoTriangle" << endl;
	cout << "4-> Draw " << endl;
	cout << "5-> exit" << endl;
	cout << "---------------------\n\n" << endl;
	cout << "Enter your selection: " << endl;

	scanf_s("%d", &choice);
	while (choice > 6 || choice < 1) {
		cout << "Given value not valid (must be from 1 to 5):\n " << endl;
	}
	if (index > 98) {
		choice = 5;
		cout << "you reached maximum capacity. Restarting...\n" << endl;
		
	}
	return choice;
}
