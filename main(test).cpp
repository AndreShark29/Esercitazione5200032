#include "polygon.h"
#include "isotrapezoid.h"
#include "rectangle.h"
#include "rhombus.h"
#include <iostream>

using namespace std;

int main() {

	//////////////////test isotrapezoid///////////////////////////
	try {
		//Check default constructor
		isotrapezoid A;
		A.Dump();
		//Check invalid argument for constructor
		isotrapezoid B(-1, -1, -1);
		B.Dump();
		//Check copy constructor
		isotrapezoid C(2, 2, 2);
		isotrapezoid D(C);
		D.Dump();

		//Check SetDim method with invalid values
		A.SetDim(1, 2, 3);
		A.Dump();
		//Check SetDim method with valid values
		A.SetDim(3,2,1);
		A.Dump();
		//cout<<"A mesures: --> "<<A.GetDim() << endl;
		
		//Check SetBase1 method with invalid values
		A.SetBase1(1);
		cout << "A s' Base1 measures: --> " << A.GetBase1() << endl;
		//Check SetBase1 method with valid values
		A.SetBase1(5);
		cout << "A s' Base1 measures: --> " << A.GetBase1() << endl;
		//Check SetBase2 method with valid values
		A.SetBase2(5);
		cout << "A s' Base2 measures: --> " << A.GetBase2() << endl;
		//Check SetHeight method with valid values
		A.SetHeight(5);
		//Check getHeight method
		cout << "A s' Height measures: --> " << A.GetHeight() << endl;
		//Check getSide method
		cout << "A s' side measures: --> " << A.GetSide() << endl;
		//Check getPerimeter method	
		cout << "A s' perimeter and area --> " << A.GetPerimeter() << " & " << A.GetArea() << endl;
		
		A.Draw();
		A.Dump();

		//Check operator == and =
		A.SetDim(6, 1, 1);
		D.Dump();
		D = A;
		D.Dump();

		if (D == A)
		{
			cout << "Eseguito D=A in modo corretto" << endl;
		}

	}
	catch (...) {
		cout << "errore---> analizzare codice" << endl;

	};
	

	//////////////////////////////////////////////////////////////

	//////////////////test Rectangle///////////////////////////



	//////////////////////////////////////////////////////////////

	//////////////////test Rhombus///////////////////////////



	//////////////////////////////////////////////////////////////

}