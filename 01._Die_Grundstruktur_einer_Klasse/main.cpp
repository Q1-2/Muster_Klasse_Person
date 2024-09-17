#include <iostream> // Einbinden der iostream-Bibliothek f�r Ein- und Ausgabe

using namespace std; // Verwendung des Namensraums std

class Person { // Definition der Klasse Person
private: // Gesch�tzte Attribute
    string name; // Attribut f�r den Namen
    int alter; // Attribut f�r das Alter

public: // �ffentliche Methoden
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