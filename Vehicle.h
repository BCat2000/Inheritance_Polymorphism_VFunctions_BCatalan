//Brennan Catalan
//11/16/2021
//CIS 1202 502
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;
#pragma once



class Vehicle_C
{
protected: // These are protected so that they can be inherited by the car and truck classes
	string manufacturerName;
	int yearBuilt;

public:
	Vehicle_C(); // Constructor

	void virtual Display_Info(Vehicle_C &vehicle) const ; //Getters are declared as const to avoid the alteration of any values

	void Set_Manufacturer(string manufacturer);
	void Set_Year(int year);

	string Get_Manufacturer() const;
	int Get_Year() const;




};



class Car_C : protected Vehicle_C 


{
private:
	int numOfDoors; // This is car specific, so it is private as inheritance for this variable is not necessary


public:
	Car_C();
	void Set_Manufacturer(string manufacturer);
	void Set_Year(int year);

	void Set_Doors(int doors);

	int Get_Doors() const;
	string Get_Manufacturer() const;
	int Get_Year() const;

	void Display_Info(Car_C &car) const;


	

};


class Truck_C :protected Vehicle_C
{

private:
	int towingCap;

public:
	Truck_C();
	void Set_Manufacturer(string manufacturer);
	void Set_Year(int year);
	void Set_Towing_Cap(int towingCapacity);

	string Get_Manufacturer() const;
	int Get_Year() const;
	int Get_Towing_Cap() const;

	void Display_Info(Truck_C& truck) const;

};

















#endif // !VEHICLE_H