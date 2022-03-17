//a. Write a program for a bank that allows the user to enter an amount of money in cents.
//Display the number of whole dollars the bank will give the customer in exchange. Save
//the file as DollarConversion.cpp.
#include <iostream>

using namespace std;

int main (){
	int cents = 0;
	double dollars = 0.0;
	
	cout<<"Enter the amount of cents : ";
	cin>>cents;
	
	while (cents >= 100){
		dollars++;
		cents = cents - 100;
	}
	
	cout<<"You have "<<dollars<<" dollars with "<<cents <<" cents" ;

}
