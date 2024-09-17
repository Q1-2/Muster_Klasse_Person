#include "Person.hpp"
#include "Person.hpp"
#include <iostream>

using namespace std;

Person::Person() {
    name = "Unbekannt";
    setAlter(0); 
}

Person::Person(string n, int a) {
    name = n;
    setAlter(a); 
}

Person::Person(const Person& other) {
    name = other.name;
    alter = other.alter;
}

/*
Wann ist ein Destruktor notwendig?

    Wenn du Speicher mit new zuweist, solltest du sicherstellen, 
    dass du diesen Speicher mit delete im Destruktor freigibst.
    Wenn du andere Ressourcen verwaltest, die manuell geschlossen 
    oder freigegeben werden müssen, solltest du dies im Destruktor tun.

In deinem aktuellen Beispiel mit der Klasse Person, die nur einfache 
Datentypen verwendet, ist ein Destruktor nicht unbedingt erforderlich. 
Aber es ist eine gute Praxis, darüber nachzudenken, 
insbesondere wenn du in Zukunft komplexere Klassen erstellst.
*/

Person::~Person()
{
    // Hier kannst du Ressourcen freigeben, wenn nötig
    // Zum Beispiel: delete[] dynamischerSpeicher;
}

string Person::getName() const {
    return name;
}

void Person::setName(const string& n) {
    name = n;
}

int Person::getAlter() const {
    return alter;
}

void Person::setAlter(int a) {
    if (a >= 0) {
        alter = a;
    }
    else {
        cout << "Das Alter muss positiv sein!" << endl;
        alter = 0; 
    }
}


void Person::ausgeben() {
    cout << "Name: " << name << ", Alter: " << alter << endl;
}