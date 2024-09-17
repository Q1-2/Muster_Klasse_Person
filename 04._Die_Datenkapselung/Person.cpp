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

// Getter f�r den Namen
string Person::getName() const {
    return name; // Gebe den Namen zur�ck
}

// Setter f�r den Namen
void Person::setName(string n) {
    name = n; // Setze den Namen
}

// Getter f�r das Alter
int Person::getAlter() const {
    return alter; // Gebe das Alter zur�ck
}

// Setter f�r das Alter
void Person::setAlter(int a) {
    alter = a; // Setze das Alter
}

// Methode zur Ausgabe der Personendaten
void Person::ausgeben() {
    cout << "Name: " << name << ", Alter: " << alter << endl;
}