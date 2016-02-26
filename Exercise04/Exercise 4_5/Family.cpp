// Projekt		øvelser 2. semester
//
// Fil			Family.cpp
//
// Beskrivelse	Implementering af klassen Family
//
// Forfatter	NVJ
//
// Version		1.2 - 310811 - statisk array ændret til dynamisk array

#include "Family.h"

	
Family::Family( const Person members[], const int numberOfMembers )
{
	numberOfMembers_ = (numberOfMembers > 0 ? numberOfMembers: 0 );

	members_ = new Person[numberOfMembers_];

	for (int i = 0; i<numberOfMembers_; i++)
		members_[i] = members[i];
}

Family::~Family()
{
	delete[] members_;
}


void Family::print() const
{
	for (int i = 0; i<numberOfMembers_; i++)
		members_[i].printAll();

	cout << endl;
}