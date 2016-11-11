#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "city.h"
#include "Citizen.h"


using namespace std;
// Constructor
City::City(string newcityName)
{
	ofstream output;
	cityName = newcityName;
	string filename = newcityName + ".txt";
	output.open(filename);
	output << firstname << lastname << color << endl;
	output.close();
	cout << "done" << endl;

	ifstream input(filename);
	if (input.fail())
	{
		cout << "file does not exist" << endl;
	}
	else
	{
		cout << "file exitst" << endl;
	}


}

// deconstructor
City::~City()
{
	// copy file
	string FileName;
	ifstream input(FileName.c_str());
	ofstream output(FileName.c_str());
	char ch = input.get();
	while (!input.eof())
	{
		output.put(ch);
		ch = input.get();
	}
	input.close();
	output.close();
	// used for deconstructor
	cityName--;
}
// get city name
string City::getCityName()
{
	return cityName;
}

// get population by way of index
int City::populationSize()
{
	return index;
}

// gets citizen at a certain index
void Citizen::getCitizenAtIndex(int Newindex)
{
	this->index = (Newindex >= 0) ? Newindex : 0;
}
// find citizen with given ID
void Citizen::citizen* getCitizenWithId(int newId)
{
	this-> id = (NewID >= 0) ? NewID : 0;
}

// Function with Vector of all the citizens
Void Citizen::vector<Citizen*> getCitizensForFavoriteColor(string color)
{
	vector<string> stringColor;
	stringVector.Push_back(firstName);
	stringvector.Push_back(lastName);
	stringvector.Push_back(color);
}

