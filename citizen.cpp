#include <iostream>
#include <string>
#include "Citizen.h"

using namespace std;

Citizen::Citizen(int newId, string newFirstName, string newLastName, string newColor)
{
	id = newId;
	firstname = newFirstName;
	lastname = newLastName;
	color = newColor;
}
// create new data from citizen
Citizen::Citizen(Citizen* newCitizen)
{
	return newCitizen = 0;
}
// get First name of Citizen
string Citizen::getFirstName()
{
	return firstname;
}
// get Last name of Citizen 
string Citizen::getLastName()
{
	return lastname;
}
// return favorite color
string Citizen::getFavoriteColor()
{
	return color;
}
Void Citizen::setFavoriteColor(string newColor)
{
	color = (newColor >= 0) ? newColor : 0;
}