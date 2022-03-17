//Write a C++ program in which you declare variables that will hold an hourly wage, a
//number of hours worked, and a withholding percentage. Prompt the user to enter values
//for each of these fields. Compute and display net weekly pay, which is calculated as
//hours times rate, minus the percentage of the gross pay that is withholding. Save the file
//as NetPay.cpp

#include <iostream>

using namespace std;

int main (){
	double hourlyWage = 0.0;
	int hoursWork = 0;
	double whitholding = 0.0;
	double finalPay = 0.0;
	
	cout<<"Enter the value for hourly wage : ";
	cin >>hourlyWage;
	cout<<"Enter the value for hours of Work : ";
	cin>>hoursWork;
	cout<<"Enter the value of whitholding : ";
	cin>>whitholding;
	finalPay = (hourlyWage*hoursWork);
	finalPay = finalPay - (finalPay*0.10);
	
	cout<<"The final weekly pay is :" << finalPay;
}
	
