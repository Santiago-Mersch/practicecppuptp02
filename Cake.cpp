//Create a Cake structure. Include two public fields that contain the price of the Cake
//and the calorie count of the Cake. Write a main()function that declares a Cake object.
//Prompt the user for field values. Echo the values, and then display the cost per calorie.
//Save the file as Cake.cpp.

#include <iostream>

using namespace std;

struct Cake {
	double price = 0.0;
	int calories = 0;
	
};


int main (){
	Cake RedVelvetCake;
	cout<<"Enter the price of the cake : ";
	cin>>RedVelvetCake.price;
	cout<<"Enter the calories of the cake : ";
	cin>>RedVelvetCake.calories;
	
	cout<<"The cake price is : "<<RedVelvetCake.price<<" the calories of the cake is "<< RedVelvetCake.calories<<endl;
	cout<<"The cost per calorie is : "<<RedVelvetCake.calories/RedVelvetCake.price;
}
