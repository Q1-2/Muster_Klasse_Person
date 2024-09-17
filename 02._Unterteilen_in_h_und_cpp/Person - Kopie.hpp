/*
In der Regel unterteilt man C++ - Programme in 
Header - Dateien(mit der Endung.hpp oder.h) 
und Implementierungsdateien(mit der Endung.cpp).
Das macht den Code übersichtlicher und modularer.
*/

#include <string> // Einbinden der string-Bibliothek

class Person { // Definition der Klasse Person
private:
    std::string name; 
    int alter; 

public:
    Person(std::string n, int a); // Konstruktor
    void ausgeben(); // Methode zur Ausgabe der Personendaten
};

