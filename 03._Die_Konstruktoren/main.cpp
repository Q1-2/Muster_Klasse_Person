#include "Person.hpp"
#include <iostream>

using namespace std;

int main() {
    Person person1("Max", 20); // Erstellen eines Objekts mit Parameterkonstruktor
    person1.ausgeben(); // Ausgabe der Personendaten

    Person person2; // Erstellen eines Objekts mit Standardkonstruktor
    person2.ausgeben(); // Ausgabe der Personendaten

    Person person3(person1); // Erstellen eines Objekts mit Kopierkonstruktor
    person3.ausgeben(); // Ausgabe der Personendaten von person3

    return 0;
}