// C++ Basics Programming Project: Energy Drink Consumption
// This project will take results from a survey and use percentages to approximate different catagories of the survey's results

#include <iostream>
using namespace std;


int main()

{
	//Input Variables
  
		double Customers = 16500;
		
	//These need to be changed into percentages by dividing them by 100	
		double EnergyPercent = 15;
		double CitrusPercent = 58;
	
	//Calculations

		int EnergyDrinkers = Customers * (EnergyPercent / 100);
		int CitrusEnjoyers = EnergyDrinkers * (CitrusPercent / 100);

	//Outputting the Calculations

		cout << "The approximate amount of customers drinking one or more energy drinks per week are " << EnergyDrinkers << endl;
		cout << "The approximate amount of customers who enjoy citrus flavored energy drinks are " << CitrusEnjoyers << endl;

		return 0;
}