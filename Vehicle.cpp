//Brennan Catalan
//11/16/2021
//Cis 1202 502

#include "Vehicle.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Vehicle_C::Vehicle_C() // The constructors in this program initialize the variables to garbage values just to prevent uninitialized memory
{
	manufacturerName = "";
	yearBuilt = 0;
}


 void  Vehicle_C::Display_Info(Vehicle_C &vehicle) const
{
	 cout << "The manufacturer is: " << vehicle.manufacturerName;
	 cout << endl << "The year of manufacture is: " << vehicle.yearBuilt;

}

 void Vehicle_C::Set_Manufacturer(string manufacturer)
 {
	 manufacturerName = manufacturer;
 }

 void Vehicle_C::Set_Year(int year)
 {
	 yearBuilt = year;
 }

 string Vehicle_C::Get_Manufacturer() const
 {
	 string manufacturer = manufacturerName;
	 return manufacturer;
 }

 int Vehicle_C::Get_Year() const
 {
	 int year = yearBuilt;
	 return year;
 }


 Car_C::Car_C()
 {
	 manufacturerName = "";
	 yearBuilt = 0;
	 numOfDoors = 0;

 }


 void Car_C::Display_Info(Car_C &car) const
 {
	 Vehicle_C::Display_Info(car); //This calls the display function from the base class, passing in the car object by reference 

	 cout << endl << "The number of doors is: " << car.numOfDoors; //Here the car specific numofDoors is displayed
 }

 void Car_C::Set_Doors(int doors)
 {
	 numOfDoors = doors;
 }

 void Car_C::Set_Manufacturer(string manufacturer)
 {
	 Vehicle_C::Set_Manufacturer(manufacturer);
 }

 void Car_C::Set_Year(int year)
 {
	 Vehicle_C::Set_Year(year);
 }

 int Car_C::Get_Doors() const
 {
	 int doors = numOfDoors;
	 return doors;
 }

 string Car_C::Get_Manufacturer() const
 {
	 string manufacturer=Vehicle_C::Get_Manufacturer();
	 return manufacturer;


 }

 int Car_C::Get_Year() const
 {
	 int year = Vehicle_C::Get_Year();
	 return year;

 }


 Truck_C::Truck_C()
 {
	 manufacturerName = "";
	 yearBuilt = 0;
	 towingCap = 0;
 }

 void Truck_C::Set_Manufacturer(string manufacturer)
 {
	 Vehicle_C::Set_Manufacturer(manufacturer);
 }

 void Truck_C::Set_Year(int year)
 {
	 Vehicle_C::Set_Year(year);
 }

 void Truck_C::Set_Towing_Cap(int towingCapacity)
 {
	 towingCap = towingCapacity;
 }

 string Truck_C::Get_Manufacturer() const
 {
	 string manufacturer = Vehicle_C::Get_Manufacturer();
	 return manufacturer;

 }

 int Truck_C::Get_Year() const
 {
	 int year = Vehicle_C::Get_Year();
	 return year;
 }

 int Truck_C::Get_Towing_Cap() const
 {
	 int towingCapacity = towingCap;
	 return towingCapacity;

 }

 void Truck_C::Display_Info(Truck_C& truck) const
 {
	 Vehicle_C::Display_Info(truck);

	 cout << endl << "The towing capacity is: " << towingCap;
 }