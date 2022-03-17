//Create a PhoneCall structure with one public field that contains the number of minutes
//in a call. Write a main()function that instantiates one PhoneCall object, such as
//myCallToGrandmaOnSunday. Assign a value to the minutes field of this object. Print
//the value of the minutes field. Calculate the cost of the call at 10 cents per minute, and
//display the results. Save the file as PhoneCall.cpp.

#include <iostream>

using namespace std;

struct PhoneCall {
	int minutescall = 0;	
};


int main (){
	int cents = 0;
	int dollars = 0;
	
	PhoneCall myCallToGrandmaOnSunday;
	
	myCallToGrandmaOnSunday.minutescall = 23;
	
	cout<<"The minutes of the call is : "<<myCallToGrandmaOnSunday.minutescall<<endl;
	
	cents = myCallToGrandmaOnSunday.minutescall * 10;
	
	while (cents >= 100){
		dollars++;
		cents = cents - 100;
	}
	
	cout<<"The cost of the call is  "<< dollars<< " dollars with  "<<cents<<" cents";

}
