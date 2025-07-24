#include "Person.h"
#include "Movie.h"
#include <iostream>
using namespace std;

void testMovie();


int main() {
	testMovie();
}

void testMovie() {
	
	Person director("Brad", "Picklegap", "12/22/1956");
	Person* cast = new Person[3];
	cast[0].setDateOfBirth("12/21/1988");
	cast[0].setFirstName("Todd");
	cast[0].setLastName("Cubert");

	cast[1].setDateOfBirth("12/22/1978");
	cast[1].setFirstName("Cindy");
	cast[1].setLastName("Crawly");

	cast[2].setDateOfBirth("8/15/2000");
	cast[2].setFirstName("Jim");
	cast[2].setLastName("Boolex");

	Movie movie1("string eats strings", director, cast, 3, 120);
	cout << "Movie 1:\n";
	cout << "The Director: is " << director.getFirstName() << " " << director.getLastName() << endl;
	cout << "DOB: " << director.getDateOfBirth() << endl;
	cout << movie1;

	Person director2("Joogle", "Picklegap", "12/22/1978");
	Person* cast2 = new Person[3];
	cast2[0].setDateOfBirth("11/13/1965");
	cast2[0].setFirstName("Coolio");
	cast2[0].setLastName("Cubert");

	cast2[1].setDateOfBirth("12/28/1979");
	cast2[1].setFirstName("Cranb");
	cast2[1].setLastName("Coolidge");

	cast2[2].setDateOfBirth("8/15/2022");
	cast2[2].setFirstName("Cat");
	cast2[2].setLastName("Nip");

	Movie movie2("Crapy jacky", director2, cast2, 3, 135);
	cout << "Movie 2:\n";
	cout << "The Director: is " << director2.getFirstName() << " " << director2.getLastName() << endl;
	cout << "DOB: " << director2.getDateOfBirth() << endl;
	cout << movie2;


	
}
