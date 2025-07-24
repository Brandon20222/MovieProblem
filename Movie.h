#ifndef MOVIE_H
#define MOVIE_H
#include "Person.h"
#include <iostream>
using namespace std;

class Movie
{
private:
	string title;
	Person director;
	Person* cast;
	int numOfCast;
	int runTime;
public:
	// Constructors and Destructors
	Movie();
	Movie(string title, Person director, Person* cast, int numOfCast, int runTime);
	~Movie();
	Movie(Movie& otherMovie);
	// Getters 
	string getTitle();
	Person getDirector();
	Person* getCast();
	int getNumOfCast();
	int getRunTime();
	// Setters
	void setTitle(string t);
	void setDirector(Person d);
	void setCast(Person* c);
	void setNumOfCast(int n);
	void setRunTime(int r);
	// Overloaded functions
	friend std::ostream& operator<<(std::ostream& stream,const Movie& right);
	Movie& operator=(Movie& right);
	// Static function
	static bool isLongMovie(int min);

};

#endif

