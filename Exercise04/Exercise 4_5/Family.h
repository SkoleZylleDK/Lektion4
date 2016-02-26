// Projekt		øvelser 2. semester
//
// Fil			Family.h
//
// Beskrivelse	Interface til klassen Family
//
// Forfatter	NVJ
//
// Version		1.2 - 310811 - statisk array ændret til dynamisk array

#pragma once

#include <iostream>
#include "Person.h"

using namespace std;

//const int SIZE = 4;


class Family
{
public:
	Family( const Person [], const int );
	~Family();
	void print() const;
private:
	Person *members_;
	int numberOfMembers_;
};