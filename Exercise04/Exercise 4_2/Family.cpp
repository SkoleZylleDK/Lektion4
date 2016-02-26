// Projekt		øvelser 2. semester
//
// Fil			Family.cpp
//
// Beskrivelse	Implementering af klassen Family
//
// Forfatter	NVJ
//
// Version		1.0 - 310811 - oprindelig version

#include "Family.h"

	
Family::Family( const Person &dad, const Person &mum, const Person &son, const Person &daughter )
	:dad_(dad), mum_(mum), son_(son), daughter_(daughter)
{
}

void Family::print() const
{
	dad_.printAll();
	mum_.printAll();
	son_.printAll();
	daughter_.printAll();
}