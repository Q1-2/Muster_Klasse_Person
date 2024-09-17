#include "Student.h"

Student::Student(string n, int anzahl) {
    name = n; 
    anzahlNoten = anzahl; 
    noten = new int[anzahlNoten]; 
    for (int i = 0; i < anzahlNoten; i++) {
        noten[i] = 0; 
    }

    cout << "Konstruktor wurde aufgerufen von Objekt: " << this << endl;
}


Student::~Student() {
    delete[] noten; 
    noten = nullptr; 

    cout << "Destruktor wurde aufgerufen von Objekt:  " << this << endl;
}

string Student::getName()
{
    return name;
}

void Student::setName(string n)
{
    name = n;
}


void Student::setNote(int index, int note) {
    if (index >= 0 && index < anzahlNoten) {
        noten[index] = note; 
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