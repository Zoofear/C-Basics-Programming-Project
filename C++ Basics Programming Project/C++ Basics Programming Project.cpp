// C++ Basics Programming Project : Project 1
// Distance Per Gas Per Tank

#include <iostream>
using namespace std;

int main()
{
	//Input Variables
		double tank = 30;
		double citympg = 23.5;
		double highwaympg = 28.9;

	//Calculations to create output variabless
		double citymiles = tank * citympg;
		double highwaymiles = tank * highwaympg;

	//Display of the output variables
		cout << "When driving in the city you can drive " << citymiles << " miles far" << endl;
		cout << "When drivinng in the highway you can drive " << highwaymiles << " miles far" << endl;

	return 0;
}
