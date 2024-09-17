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
    void setNote(int index, int note); // Methode zum Setzen einer Note
    void ausgeben(); // Methode zum Ausgeben der Noten

    string getName(); // Getter zur Namensrueckgabe
    void setName(string n); // Setter zur setzen des Attributes name
};