// Projekt		øvelser 2. semester
//
// Fil			test_Family.cpp
//
// Beskrivelse	Test af klassen Family
//
// Forfatter	NVJ
//
// Version		1.1 - 310811 - 4 personer ændret til array

#include "Family.h"


int main()
{
	Person p[] = { Person( "121176-1111", "Kurt", "Skov" ),
				   Person ( "090275-2222", "Lise", "Skov", "Kastrup"  ),
				   Person ( "030799-3333", "Mikkel", "Kastrup" ),
				   Person("270902-4444", "Hanne", "Skov", "Kastrup") };

	Family f1( p );

	f1.print();

	cout << "\nAntal personer oprettet: " << Person::getNumberOfPersons() << endl << endl;

	return 0;
}