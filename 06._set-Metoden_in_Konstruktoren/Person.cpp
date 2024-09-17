#include "Person.hpp"
#include <iostream>

using namespace std;

/*
Es macht Sinn, die Validierung von setAlter() auch in den Konstruktoren zu verwenden. 
Dadurch wird sichergestellt, dass beim Erstellen eines Objekts von Person 
nur g�ltige Werte f�r die Attribute gesetzt werden.

Hier ist die aktualisierte Version der Konstruktoren, die die setAlter-Methode verwendet:
*/

Person::Person() {
    name = "Unbekannt";
    setAlter(0); // Setze das Alter mit der setAlter-Methode
}

Person::Person(string n, int a) {
    name = n;
    setAlter(a); // Verwende die setAlter-Methode f�r die Validierung
}

/*
�nderungen:

    Parameterkonstruktor: 
    Anstatt alter = a; direkt zu setzen, wird jetzt setAlter(a); verwendet. 
    Dadurch wird die Validierung aufgerufen, und nur g�ltige Alterswerte werden akzeptiert.

    Standardkonstruktor: 
    Hier wird ebenfalls setAlter(0); verwendet, um sicherzustellen, 
    dass das Alter beim Erstellen eines Objekts immer auf einen g�ltigen Wert gesetzt wird.

Mit diesen �nderungen wird die Logik der Validierung durchg�ngig angewendet, 
und du kannst beim Erstellen von Objekten keine ung�ltigen Werte mehr setzen.
*/

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

// Setter f�r das Alter mit Validierung
void Person::setAlter(int a) {
    if (a >= 0) { 
        alter = a; 
    }
    else {
        cout << "Das Alter muss positiv sein!" << endl;
        alter = 0; // Standardwert f�r das Alter MUSS hier gesetzt werden.
    }
}


void Person::ausgeben() {
    cout << "Name: " << name << ", Alter: " << alter << endl;
}