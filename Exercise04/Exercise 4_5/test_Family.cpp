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
	Person p1[] = { Person( "121176-1111", "Kurt", "Skov" ),
				    Person ( "090275-2222", "Lise", "Kastrup", "Skov" ),
				    Person ( "030799-3333", "Mikkel", "Skov" ) };

	Person p2[] = { Person("121176-4444", "Bo", "Mark", "Viby"),
					Person("090275-2222", "Anne", "Viby"),
					Person("030799-3333", "Mick", "Viby"),
					Person("270902-4444", "Tove", "Mark", "Viby"),
					Person("270902-4444", "Lotte", "Mark", "Viby") };

	Family skov( p1, 3 );
	Family viby( p2, 5 );

	skov.print();
	viby.print();

	cout << "\nAntal personer oprettet: " << Person::getNumberOfPersons() << endl << endl;

	return 0;
}