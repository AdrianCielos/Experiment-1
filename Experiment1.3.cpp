#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "*** CREDIT CARD ***" << endl;
	cout << endl;

	cout << "Please Enter the Following Data Needed..." << endl;
	cout << endl;
	
	//INPUT DATA
	int w, x, y, z;
	cout << "Net Balance: "; cin >> w;
	cout << "Payment: "; cin >> x;
	cout << "Number of Days in the Billing Cycle: "; cin >> y;
	cout << "Number of Days Payment Made Before Billing Cycle: "; cin >> z;
	cout << endl;
	
	cout << "PROCESSING..." << endl;
	cout << endl;
	
	//AVERAGE DAILY BALANCE COMPUTATION
	cout << setprecision(2) << fixed;
	cout << "The Average Daily Balance is " << "Php " << ((w*y)-(x*z))/y << "." << endl;
	cout << endl;
	
	//INTEREST COMPUTATION
	int a;
	a = ((w*y)-(x*z))/y;
	cout << setprecision(2) << fixed;
	cout << "COMPUTING FOR THE INTEREST..." << endl;
	cout << endl;
	cout << "The Interest on the unpaid balance is " << "Php " << a*0.0097 << "." << endl;
	
	getch();
	return 0;
	
}
