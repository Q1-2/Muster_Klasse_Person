#include <iostream> // Einbinden der iostream-Bibliothek für Ein- und Ausgabe

using namespace std; // Verwendung des Namensraums std

class Person { // Definition der Klasse Person
private: // Geschützte Attribute
    string name; // Attribut für den Namen
    int alter; // Attribut für das Alter

public: // Öffentliche Methoden
    // Konstruktor zur Initialisierung der Person
    Person(string n, int a) {
        name = n; // Setze den Namen
        alter = a; // Setze das Alter
    }

    // Methode zur Ausgabe der Personendaten
    void ausgeben() {
        cout << "Name: " << name << ", Alter: " << alter << endl; // Ausgabe von Name und Alter
    }
};

int main() {
    Person person1("Max", 20); // Erstellen eines Objekts der Klasse Person
    person1.ausgeben(); // Aufruf der Methode zur Ausgabe der Personendaten
    return 0; // Programm beendet
}