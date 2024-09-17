#include "Person.hpp"
#include <iostream>

using namespace std;


// Standardkonstruktor: 
/* Dieser Konstruktor wird aufgerufen,
wenn ein Objekt ohne Argumente erstellt wird.
Hier setzen wir den Namen auf "Unbekannt" und das Alter auf 0.*/
Person::Person() {
    name = "Unbekannt"; 
    alter = 0; 
}

// Parameterkonstruktor
/* Dieser Konstruktor wird verwendet, 
um ein Objekt mit bestimmten Werten zu initialisieren.
Er nimmt zwei Parameter(Name und Alter) und weist sie den Attributen zu.*/
Person::Person(string n, int a) {
    name = n; 
    alter = a; 
}

// Kopierkonstruktor
/* Dieser Konstruktor wird verwendet, 
um ein neues Objekt als Kopie eines bestehenden Objekts zu erstellen. 
Er nimmt ein Referenzargument des Typs Person und 
kopiert die Attribute des �bergebenen Objekts in das neue Objekt.*/
Person::Person(const Person& other) {
    name = other.name; // Kopiere den Namen vom anderen Objekt
    alter = other.alter; // Kopiere das Alter vom anderen Objekt
}

/*
Die Verwendung von const Person& im Kopierkonstruktor hat mehrere wichtige Aspekte:

    const: Das Schl�sselwort const bedeutet, dass das �bergebene Objekt nicht ver�ndert werden kann. 
    Das sch�tzt das urspr�ngliche Objekt davor, versehentlich modifiziert zu werden, 
    w�hrend es kopiert wird. 
    Es ist eine gute Praxis, Parameter, die nicht ver�ndert werden sollen, als const zu deklarieren.

    Person&: Das & steht f�r eine Referenz. Anstatt das Objekt zu kopieren (was viel Speicher und Zeit kosten kann), 
    wird eine Referenz auf das bestehende Objekt �bergeben. 
    Das spart Ressourcen, da keine zus�tzliche Kopie des Objekts im Speicher erstellt wird.

Zusammengefasst bedeutet const Person& other, dass du 
eine Referenz auf ein unver�nderliches Objekt vom Typ Person �bergibst. 
Dadurch wird der Kopierkonstruktor effizienter, weil er direkt auf das urspr�ngliche Objekt zugreifen kann, 
ohne es zu kopieren.

Das ist besonders wichtig, wenn deine Klasse gro�e Datenstrukturen oder Ressourcen verwaltet. */

// Methode zur Ausgabe der Personendaten
void Person::ausgeben() {
    cout << "Name: " << name << ", Alter: " << alter << endl;
}