#include "Person.h"
#include <iostream>
using namespace std;


// Constructors
Person::Person() {
	firstName = "Bob";
	lastName = "Marley";
	dob = "12/23/1989";
}
Person::Person(string firstName, string lastName, string dateOfBirth) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->dob = dateOfBirth;
}
// Getters
string Person::getFirstName() {
	return firstName;
}
string Person::getLastName() {
	return lastName;
}
string Person::getDateOfBirth() {
	return dob;
}
// Overload = Operand
Person& Person::operator=(Person& right) {
	this->firstName = right.firstName;
	this->lastName = right.lastName;
	this->dob = right.dob;

	return *this;
}
