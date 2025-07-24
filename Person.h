#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person
{
private:
	string firstName;
	string lastName;
	string dob;
public:
	// Constructors
	Person();
	Person(string firstName, string lastName, string dateOfBirth);
	// Getters
	string getFirstName();
	string getLastName();
	string getDateOfBirth();
	// Overload = Operand
	Person& operator=(Person& right);
};

#endif
