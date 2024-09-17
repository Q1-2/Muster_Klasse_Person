#include "Person.hpp"
#include <iostream>

using namespace std;

int main() {
    // Erstellen eines Objekts mit dem Parameterkonstruktor
    Person person1("Max", -10);
    person1.ausgeben(); // Ausgabe der Personendaten

    // Testen der Setter-Methoden
    person1.setAlter(25); // Setze das Alter auf 25
    person1.ausgeben(); // Ausgabe der aktualisierten Personendaten



    // Erstellen eines Objekts mit dem Standardkonstruktor
    Person person2;
    person2.ausgeben(); // Ausgabe der Standardwerte


    return 0;
}