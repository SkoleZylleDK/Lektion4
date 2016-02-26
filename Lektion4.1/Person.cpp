//========================================================================
// FILENAME : Person.h
// CREATED : 26/02-16
// AUTHOR : Stefan
// DESCR. : Øvelses opgave 4, OOP F16
//
//------------------------------------------------------------------------
//
// REV. DATE/AUTHOR CHANGE DESCRIPTION
// 1.0 26/02 Stefan Oprettet efter skabelon.
//========================================================================

#include "Person.h"

int Person::numberOfPersons_ = 0;

//============================================================= 
// METHOD : Person
// DESCR. : (Default)Constructor (implicit + explicit), Opretter et objekt uden mellemnavn 
//=============================================================
Person::Person(const string &sSn, const string &fN, const string &lN)
{
	firstName_ = fN;
	middleName_ = "";
	lastName_ = lN;
	socialSecNumber_ = sSn;
	numberOfPersons_++;
}

//============================================================= 
// METHOD : Person
// DESCR. : Constructor, Opretter et objekt med mellemnavn 
//=============================================================
Person::Person(const string &sSn, const string &fN, const string &mN, const string &lN)
{
	firstName_ = fN;
	middleName_ = mN;
	lastName_ = lN;
	socialSecNumber_ = sSn;
	numberOfPersons_++;
}

//============================================================= 
// METHOD : Destructor
// DESCR. : Decrementere numberOfPersons.
//============================================================
Person::~Person()
{
	numberOfPersons_--;
}

//============================================================= 
// METHOD : setFirstName
// DESCR. : Indstiller fornavnet på et objekt
//============================================================
void Person::setFirstName(const string &fN)
{
	firstName_ = fN;
}

//============================================================= 
// METHOD : setMiddleName
// DESCR. : Indstiller mellemnavnet for på objekt 
//============================================================
void Person::setMiddleName(const string &mN)
{
	middleName_ = mN;
}

//============================================================= 
// METHOD : setLastName
// DESCR. : Indstiller efternavnet for på objekt
//============================================================
void Person::setLastName(const string &lN)
{
	lastName_ = lN;
}

//============================================================= 
// METHOD : getData
// DESCR. : Fylder de 4 strings med information om objektet.
//============================================================
void Person::getData(string &sSn, string &fN, string &mN, string &lN) const
{
	sSn = socialSecNumber_;
	fN = firstName_;
	mN = middleName_;
	lN = lastName_;
}

//============================================================= 
// METHOD : getNumberOfPersons
// DESCR. : Retunerer antallet af objekter i klassen.
//============================================================
int Person::getNumberOfPersons()
{
	return numberOfPersons_;
}

//============================================================= 
// METHOD : printPartially
// DESCR. : Udskriver navn på objekt (Uden det fulde mellemnavn) 
//============================================================
void Person::printPartially() const
{
	cout << "Navn: " << firstName_ << " ";
	if (middleName_ != "")
		cout << middleName_[0] << ". ";
	cout << lastName_ << endl;
	cout << "F\x9B" << "dt: " << socialSecNumber_.substr(0, 5) << endl;
}

//============================================================= 
// METHOD : printAll
// DESCR. : Udskriver det fulde navn på objektet. 
//============================================================
void Person::printAll() const
{
	cout << "Navn: " << lastName_ << ", " << firstName_ << " " << middleName_ << endl;
	cout << "Personnr.: " << socialSecNumber_ << endl;
}

//============================================================= 
// METHOD : checkForSameName
// DESCR. : Undersøger om der findes et objekt med det samme navn.
//============================================================
bool Person::checkForSameName(const Person &person) const
{
	if (person.firstName_ == firstName_ && person.middleName_ == middleName_ && person.lastName_ == lastName_)
	{
		return true;
	}
	else
	{
		return false;
	}
}