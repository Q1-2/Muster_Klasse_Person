#include "Person.hpp" // Einbinden der Header-Datei
#include <iostream> // Einbinden der iostream-Bibliothek

using namespace std;

// Konstruktor zur Initialisierung der Person
Person::Person(string n, int a) {
    name = n; // Setze den Namen
    alter = a; // Setze das Alter
}

// Methode zur Ausgabe der Personendaten
void Person::ausgeben() {
    cout << "Name: " << name << ", Alter: " << alter << endl; // Ausgabe von Name und Alter
}