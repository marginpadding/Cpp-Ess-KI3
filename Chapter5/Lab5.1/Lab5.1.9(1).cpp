// Lab 5.1.9 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	string lastname;
	double weight;
	int age;
};

void print(Person* person)
{
	cout << person->name << " is " << person->age << " years old" << endl;
}

int main()
{
	Person person;

	person.name = "Harry";
	person.lastname = "Jons";
	person.weight = 96.8;
	person.age = 23;
	
	
	cout << "Meet " << person.name + " " + person.lastname << endl;
	print(&person);
	cout << "weight is " << person.weight << "." << endl;

	return 0;
}