#include "Person.hpp" // Einbinden der Header-Datei
#include <iostream>

using namespace std;

int main() {
    Person person1("Max", 20); // Erstellen eines Objekts der Klasse Person
    person1.ausgeben(); // Aufruf der Methode zur Ausgabe der Personendaten
    return 0; // Programm beendet
}