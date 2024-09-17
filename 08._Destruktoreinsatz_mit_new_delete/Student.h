#include <iostream>
using namespace std;

class Student {
private:
    string name; // Name des Studenten
    int* noten; // Pointer auf die Noten
    int anzahlNoten; // Anzahl der Noten

public:
    Student(string n, int anzahl); // Konstruktor
    ~Student(); // Destruktor
    string getName(); // Methode 
    void setNote(int index, int note); // Methode zum Setzen einer Note
    void ausgeben(); // Methode zum Ausgeben der Noten
};