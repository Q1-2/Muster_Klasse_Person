#include "Student.h"

// Konstruktor
Student::Student(string n, int anzahl) {
    name = n; // Setze den Namen
    anzahlNoten = anzahl; // Setze die Anzahl der Noten
    noten = new int[anzahlNoten]; // Reserviere Speicher für die Noten
    for (int i = 0; i < anzahlNoten; i++) {
        noten[i] = 0; // Initialisiere die Noten mit 0
    }
}

// Destruktor
Student::~Student() {
    delete[] noten; // Gib den reservierten Speicher für die Noten frei
    noten = nullptr; // Setze den Zeiger auf nullptr, um sicherzustellen, dass er nicht mehr verwendet wird
}

string Student::getName()
{
    return name;
}

// Methode zum Setzen einer Note
void Student::setNote(int index, int note) {
    if (index >= 0 && index < anzahlNoten) {
        noten[index] = note; // Setze die Note an der gegebenen Stelle
    }
}

// Methode zum Ausgeben der Noten
void Student::ausgeben() {
    cout << "Noten fuer " << name << ": ";
    for (int i = 0; i < anzahlNoten; i++) {
        cout << noten[i] << " "; // Gebe jede Note aus
    }
    cout << endl;
}