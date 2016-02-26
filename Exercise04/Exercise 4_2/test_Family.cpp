// Projekt		øvelser 2. semester
//
// Fil			test_Family.cpp
//
// Beskrivelse	Test af klassen Family
//
// Forfatter	NVJ
//
// Version		1.0 - 310811 - oprindelig version

#include "Family.h"


int main()
{
	Family f1( Person( "121176-1111", "Kurt", "Skov" ),
		       Person( "090275-2222", "Lise", "Kastrup", "Skov" ),
			   Person( "030799-3333", "Mikkel", "Kastrup" ),
			   Person( "270902-4444", "Hanne", "Kastrup", "Skov" ) );

	f1.print();

	cout << "\nAntal personer oprettet: " << Person::getNumberOfPersons() << endl << endl;

	return 0;
}