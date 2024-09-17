#include "Person.hpp"
#include <iostream>

using namespace std;

int main() {
    // Erstellen eines Objekts mit dem Parameterkonstruktor
    Person person1("Max", 20);
    person1.ausgeben(); // Ausgabe der Personendaten

    // Testen der Setter-Methoden
    person1.setAlter(25); // Setze das Alter auf 25
    person1.ausgeben(); // Ausgabe der aktualisierten Personendaten

    person1.setAlter(-10); // Versuch, das Alter auf einen ungültigen Wert zu setzen
    person1.ausgeben(); // Ausgabe der Personendaten, um zu sehen, ob sich das Alter geändert hat

    // Erstellen eines Objekts mit dem Standardkonstruktor
    Person person2;
    person2.ausgeben(); // Ausgabe der Standardwerte

    // Testen der Setter-Methoden für das zweite Objekt
    person2.setName("Anna"); // Setze den Namen
    person2.setAlter(30); // Setze das Alter auf 30
    person2.ausgeben(); // Ausgabe der aktualisierten Personendaten

    return 0; 
}