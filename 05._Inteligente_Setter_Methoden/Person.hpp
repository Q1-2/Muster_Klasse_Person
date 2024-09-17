#pragma once
#include <string>

/*
Datenkapselung ist ein zentrales Konzept der objektorientierten Programmierung.
Sie bedeutet, dass die Daten (Attribute) einer Klasse privat (private) sind und
nur durch öffentliche (public) Methoden (auch als Getter und Setter bekannt)
darauf zugegriffen werden kann.

Dies schützt die Daten vor unbefugtem Zugriff und Missbrauch.
*/


class Person {
private:
    std::string name; 
    int alter; 

public:
    Person(); 
    Person(std::string n, int a); 
    Person(const Person& other); 

    std::string getName() const;
    void setName(const std::string& n);
    int getAlter() const;

    // Setter für das Alter
    void setAlter(int a);

    // Setter für das Alter mit Validierung
    void set_Alter(int a);

    void ausgeben(); // Methode zur Ausgabe der Personendaten
};