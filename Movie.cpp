#include "Movie.h"
#include "Person.h"
#include <iostream>
using namespace std;

// Constructors and Destructors
Movie::Movie() {
	Person person;
	title = "No Title";
	numOfCast = 0;
	runTime = 0;
	person.getFirstName() = "No first name";
	person.getLastName() = "No last name";
	person.getDateOfBirth() = "No Date Of Birth";
	cast = new Person[numOfCast];


}
Movie::Movie(string title, Person director, Person* cast, int numOfCast, int runTime) {
	this->title = title;
	this->director = director;
	this->numOfCast = numOfCast;
	this->runTime = runTime;

	for (int i = 0; i < numOfCast; i++) {
		this->cast[i] = cast[i];
	}

}
Movie::~Movie() {
	delete[] cast;
}
Movie::Movie(Movie& otherMovie) {
	this->title = otherMovie.title;
	this->director = otherMovie.director;
	this->numOfCast = otherMovie.numOfCast;
	this->runTime = otherMovie.runTime;
	
	delete[]cast;
	this->cast = new Person[numOfCast];
	for (int i = 0; i < numOfCast; i++) {
		this->cast[i] = otherMovie.cast[i];
	}
	
}
// Getters 
string Movie::getTitle() {
	return title;
}
Person Movie::getDirector() {
	return director;
}
Person* Movie::getCast() {
	return cast;
}
int Movie::getNumOfCast() {
	return numOfCast;
}
int Movie::getRunTime() {
	return runTime;
}
// Setters
void Movie::setTitle(string t) {
	title = t;
}
void Movie::setDirector(Person d) {
	director = d;
}
void Movie::setCast(Person* c) {
	cast = c;
}
void Movie::setNumOfCast(int n) {
	numOfCast = n;
}
void Movie::setRunTime(int r) {
	runTime = r;
}
// Overloaded functions
std::ostream& operator<<(std::ostream& stream, const Movie& right) {
	Person d;
	stream << "The title of this movie is: " << right.title << endl << "The Director: "
		<< d.getFirstName() << " " << d.getLastName() << endl << "DOB: "
		<< d.getDateOfBirth() << endl << "The cast has " << right.numOfCast
		<< " people apart of the cast:\n" << right.cast << endl;


	//for (int i = 0; right.numOfCast; i++) {
	//stream << right.cast[i] << endl;
	//}
		
	return stream;
}
Movie& Movie::operator=(Movie& right) {
	if (this != &right) {
		delete[] cast;
		this->title = right.title;
		this->director = right.director;
		this->numOfCast = right.numOfCast;
		this->runTime = right.runTime;

		this->cast= new Person[numOfCast];
		for (int i = 0; i < numOfCast; i++) {
			this->cast[i] = right.cast[i];
		}
	}
	return *this;
}
bool Movie::isLongMovie(int min) {
	if (min > 135)
		return true;
	else
		return false;
}

