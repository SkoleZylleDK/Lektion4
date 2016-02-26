// Projekt		øvelser 2. semester
//
// Fil			Family.h
//
// Beskrivelse	Interface til klassen Family
//
// Forfatter	NVJ
//
// Version		1.0 - 310811 - oprindelig version

#pragma once

#include <iostream>
#include "Person.h"

using namespace std;


class Family
{
public:
	Family( const Person &, const Person &, const Person &, const Person & );
	void print() const;
private:
	Person dad_;
	Person mum_;
	Person son_;
	Person daughter_;
};