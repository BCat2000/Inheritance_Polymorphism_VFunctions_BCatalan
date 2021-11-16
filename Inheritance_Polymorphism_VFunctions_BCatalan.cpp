//Brennan Catalan
//11/16/2021
//CIS 1202 502

#include <iostream>
#include "Vehicle.h"


using namespace std;

int main()
{
	Vehicle_C vehicle;
	Car_C car;
	Truck_C truck;


	string manufacturer;
	int year, doors, towingCap;


	cout <<"Vehicle: " <<endl <<"Enter the manufacturer: ";
	getline(cin, manufacturer);
	vehicle.Set_Manufacturer(manufacturer);
	cout << endl << "Enter the year of manufacture: ";
	cin >> year;
	vehicle.Set_Year(year);

	cout  <<endl;
	vehicle.Display_Info(vehicle);


	cout <<endl << endl << "Car: " <<endl << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	car.Set_Manufacturer(manufacturer);
	cout << endl << "Enter the year of manufacture: ";
	cin >> year;
	car.Set_Year(year);
	cout << endl << "Enter the number of doors: ";
	cin >> doors;
	car.Set_Doors(doors);
	cout << endl;
	cout << endl;
	car.Display_Info(car);


	cout <<endl << endl <<"Truck: " << endl << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	truck.Set_Manufacturer(manufacturer);
	cout << endl << "Enter the year of manufacture: ";
	cin >> year;
	truck.Set_Year(year);
	cout << endl << "Enter the towing capacity: ";
	cin >> towingCap;
	truck.Set_Towing_Cap(towingCap);

	cout << endl;
	
	truck.Display_Info(truck);
	cout << endl;
}

