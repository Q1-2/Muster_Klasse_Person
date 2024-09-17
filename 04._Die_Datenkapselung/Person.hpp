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

    // Getter für den Namen
    std::string getName() const;

    // Setter für den Namen
    void setName(string n);

    // Getter für das Alter
    int getAlter() const;

    // Setter für das Alter
    void setAlter(int a);

    void ausgeben(); // Methode zur Ausgabe der Personendaten - Gehoert nicht zur Datenkapselung!
};

/*
Erläuterung der Datenkapselung:

    Private Attribute:
    Die Attribute name und alter sind als privat deklariert.
    Das bedeutet, dass sie nur innerhalb der Klasse Person zugänglich sind.
    Externe Funktionen oder Klassen können nicht direkt auf diese Attribute zugreifen.

    Öffentliche Methoden (Getter und Setter):
        Getter: Die Methoden getName() und getAlter() geben die Werte der privaten Attribute zurück.
        Sie ermöglichen den Zugriff auf die Daten, ohne sie direkt zu verändern.

        Setter: Die Methoden setName() und setAlter() erlauben es, die Werte der privaten Attribute zu ändern.
        Sie bieten einen kontrollierten Weg, um die Daten zu setzen und können zusätzliche Logik enthalten,
        um sicherzustellen, dass die Werte gültig sind (z. B. keine negativen Alterswerte).

Durch die Datenkapselung wird die Integrität der Daten gewahrt.
Die Klasse kann sicherstellen, dass ihre Attribute immer in einem gültigen Zustand sind.
Das macht den Code robuster und einfacher zu warten.
*/