#include "Person.hpp"
#include <iostream>

using namespace std;

Person::Person() {
    name = "Unbekannt"; 
    alter = 0;
}

Person::Person(string n, int a) {
    name = n; 
    alter = a; 
}

Person::Person(const Person& other) {
    name = other.name;
    alter = other.alter; 
}

string Person::getName() const {
    return name; 
}

void Person::setName(const string& n) {
    name = n; 
}

int Person::getAlter() const {
    return alter; 
}

// Setter f�r das Alter
void Person::setAlter(int a) {
    alter = a; // Setze das Alter
}
/*
In der oberen Implementierung setAlter() gibt es keine �berpr�fung
auf g�ltige Werte in den Setter - Methoden.
Das bedeutet, dass du das Alter auf einen negativen Wert setzen kannst, was unlogisch ist.
Um die Datenkapselung und die Validierung zu verbessern,
k�nntest du in der setAlter - Methode eine �berpr�fung hinzuf�gen.

Hier ist eine aktualisierte Version der Methode setAlter, die sicherstellt,
dass das Alter nur auf einen positiven Wert gesetzt werden kann :
*/

// Setter f�r das Alter mit Validierung
void Person::set_Alter(int a) {
    if (a >= 0) { // �berpr�fe, ob das Alter nicht negativ ist
        alter = a; // Setze das Alter
    }
    else {
        cout << "Das Alter muss positiv sein!" << endl; // Ausgabe einer Warnung
        alter = 0; // Standardwert f�r das Alter MUSS hier gesetzt werden.
    }
}


void Person::ausgeben() {
    cout << "Name: " << name << ", Alter: " << alter << endl;
}