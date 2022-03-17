//Write a program that allows the user to enter two values. Display the results of adding
//the two values, subtracting them from each other, multiplying them, and dividing them.
//Save the file as MathExercise.cpp.

#include <iostream>

using namespace std;

int main (){
	double a,b;
	cout<<"Enter the values of the two numbers : ";
	cin>>a>>b;

	cout<<"The sum is : "<<a+b<<endl;
	cout<<"The subtact is : "<<a-b<<endl;
	cout<<"The multiplication is : "<<a*b<<endl;
	cout<<"The division is : "<<a/b<<endl;

}
