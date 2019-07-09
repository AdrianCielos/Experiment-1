#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "*** FINDING THE VOLUME ***" << endl;
	cout << endl;
	
	cout << "Please Enter the Following Data..." << endl;
	
	//MASS AND DENSITY INPUT
	double x, y;
	cout << "Input desired MASS: "; cin >>x;
	cout << "Input desired DENSITY: "; cin >>y;
	cout << endl;
	
	//INPUT VARIABLES
	cout<< "MASS: " << x << "g" << endl;
	cout << "DENSITY: " << y << "g/cm^3" << endl;
	cout << endl;
	
	cout << "COMPUTING FOR VOLUME OF THE OBJECT..." << endl;
	cout << endl;
	
	
	//COMPUTATION AND ANSWER
	cout << setprecision(2) << fixed;
	cout << "The VOLUME of the object is: " << x/(4*y) << "cm^3." << endl;
	
	getch ();
	return 0;
}
