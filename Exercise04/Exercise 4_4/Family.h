// Projekt		øvelser 2. semester
//
// Fil			Family.h
//
// Beskrivelse	Interface til klassen Family
//
// Forfatter	NVJ
//
// Version		1.1 - 310811 - 4 medlemsdata ændret til array

#pragma once

#include <iostream>
#include "Person.h"

using namespace std;

const int SIZE = 4;


class Family
{
public:
	Family( const Person [] );
	void print() const;
private:
	Person members_[SIZE];
};