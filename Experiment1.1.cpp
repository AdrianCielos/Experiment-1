#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "*** TICKET SOLD ***" << endl;
	cout << endl;
	
	cout << "Here are the ticket prices:\n" << "PHP 250.00\n" << "PHP 100.00\n" << "PHP 50.00\n" << "PHP 25.00\n" << endl;
	cout << endl;
	
	double x, y, z, a;
	cout << "Please enter purchased ticket/s sold in PREMIUM: "; cin >> x;
	cout << "Please enter purchased ticket/s sold in SIDELINE: "; cin >> y;
	cout << "Please enter purchased ticket/s sold in BOX: "; cin >> z;
	cout << "Please enter purchased ticket/s sold in GENERAL ADMISSION: "; cin >> a;
	cout << endl;
	cout << endl;
	
	cout << "Ticket Type" << "		" << "Ticket Price" << "	" << "Number of Tickets Sold" << "		" << "Total Amount of Income"<< endl;
	cout <<  "PREMIUM" << "			" <<"Php 250.00" << "	" << x << "				" << "PHP "<< 250*x << ".00" << endl;
	cout <<  "SIDELINE" << "		" <<"Php 100.00" << "	" << y << "				" << "PHP "<< 100*y << ".00" << endl;
	cout <<  "BOX" << "			" <<"Php 50.00" << "	" << z << "				" << "PHP "<< 50*z << ".00" << endl;
	cout <<  "GENERAL ADMISSION" << "	" <<"Php 25.00" << "	" << a << "				" << "PHP "<< 25*a << ".00" << endl;
	
	getch ();
	return 0;
}
