// Projekt		�velser 2. semester
//
// Fil			Family.cpp
//
// Beskrivelse	Implementering af klassen Family
//
// Forfatter	NVJ
//
// Version		1.1 - 310811 - 4 medlemsdata �ndret til array

#include "Family.h"

	
Family::Family( const Person m[])
{
	for( int i=0; i<SIZE; i++ )
		members_[i] = m[i];
}


void Family::print() const
{
	for( int i=0; i<SIZE; i++ )
		members_[i].printAll();
}