// Projekt		øvelser 2. semester
//
// Fil			Person.h
//
// Beskrivelse	Interface til klassen Person
//
// Forfatter	NVJ
//
// Version		1.0 - 310811 - oprindelig version
//				1.1 - 160215 - copy constructor tilføjet

#pragma once

#include <iostream>
#include <string>

using namespace std;


class Person
{
public:
	Person( const string &sSNRef = "000000-0000", const string &fNRef = "N", const string &lNRef = "N" );
	Person( const string &sSNRef, const string &fNRef, const string &mNRef, const string &lNRef );
	Person(const Person &ref);
	~Person();
	void setFirstName( const string &fNRef );
	void setMiddleName( const string &mNRef );
	void setLastName( const string &lNRef );
	void getData( string &sSNRef, string &fNRef, string &mNRef, string &lNRef ) const;
	static int getNumberOfPersons( );
	void printPartially( ) const;
	void printAll( ) const;
	bool checkForSameName( const Person & ) const;
private:
	string socialSecNumber_;
	string firstName_;
	string middleName_;
	string lastName_;
	static int numberOfPersons_;
};