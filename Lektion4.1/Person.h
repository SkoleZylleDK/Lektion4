//========================================================================
// FILENAME : Person.h
// CREATED : 26/02-16
// AUTHOR : Stefan
// DESCR. : Øvelses opgave 4, OOP F16
//
//------------------------------------------------------------------------
//
// REV. DATE/AUTHOR CHANGE DESCRIPTION
// 1.0 26/02 Stefan Oprettet efter skabelon.
//========================================================================

#include <string>
#include <iostream>

using namespace std;

//========================================================================
// CLASS : Person
// DESCR : Indeholder oplysninger om en person, samt det samlede antal personer.
//========================================================================
class Person
{
public:
	Person(const string &sSn = "000000-0000", const string &fN = "N", const string &lN = "N");		//Deafault constructor, defineret i headerfilen.
	Person(const string &sSn, const string &fN, const string &mN, const string &lN);
	~Person();
	void setFirstName(const string &fN);
	void setMiddleName(const string &mN);
	void setLastName(const string &lN);
	void getData(string &sSn, string &fN, string &mN, string &lN) const; 
	static int getNumberOfPersons();
	void printPartially() const;
	void printAll() const;
	bool checkForSameName(const Person &person) const;

private:
	string firstName_;
	string middleName_;
	string lastName_;
	string socialSecNumber_;
	static int numberOfPersons_;
};