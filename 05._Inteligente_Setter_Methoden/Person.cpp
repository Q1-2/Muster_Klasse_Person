#include "Person.hpp"
#include <iostream>

using namespace std;

// Standardkonstruktor
Person::Person() {
    name = "Unbekannt"; // Setze den Namen auf "Unbekannt"
    alter = 0; // Setze das Alter auf 0
}

// Parameterkonstruktor
Person::Person(string n, int a) {
    name = n; // Setze den Namen
    alter = a; // Setze das Alter
}

// Kopierkonstruktor
Person::Person(const Person& other) {
    name = other.name; // Kopiere den Namen vom anderen Objekt
    alter = other.alter; // Kopiere das Alter vom anderen Objekt
}

// Getter für den Namen
string Person::getName() const {
    return name; // Gebe den Namen zurück
}

// Setter für den Namen
void Person::setName(const string& n) {
    name = n; // Setze den Namen
}

// Getter für das Alter
int Person::getAlter() const {
    return alter; // Gebe das Alter zurück
}

// Setter für das Alter
void Person::setAlter(int a) {
    alter = a; // Setze das Alter
}
/*
In der oberen Implementierung setAlter() gibt es keine Überprüfung
auf gültige Werte in den Setter - Methoden.
Das bedeutet, dass du das Alter auf einen negativen Wert setzen kannst, was unlogisch ist.
Um die Datenkapselung und die Validierung zu verbessern,
könntest du in der setAlter - Methode eine Überprüfung hinzufügen.

Hier ist eine aktualisierte Version der Methode setAlter, die sicherstellt,
dass das Alter nur auf einen positiven Wert gesetzt werden kann :
*/

// Setter für das Alter mit Validierung
void Person::set_Alter(int a) {
    if (a >= 0) { // Überprüfe, ob das Alter nicht negativ ist
        alter = a; // Setze das Alter
    }
    else {
        cout << "Das Alter muss positiv sein!" << endl; // Ausgabe einer Warnung
    }
}

// Methode zur Ausgabe der Personendaten
void Person::ausgeben() {
    cout << "Name: " << name << ", Alter: " << alter << endl;
}