#pragma once
#include <string>

/*
Datenkapselung ist ein zentrales Konzept der objektorientierten Programmierung. 
Sie bedeutet, dass die Daten (Attribute) einer Klasse privat (private) sind und 
nur durch �ffentliche (public) Methoden (auch als Getter und Setter bekannt) 
darauf zugegriffen werden kann. 

Dies sch�tzt die Daten vor unbefugtem Zugriff und Missbrauch.
*/


class Person {
private:
    std::string name; 
    int alter; 

public:
    Person(); 
    Person(std::string n, int a); 
    Person(const Person& other); 

    // Getter f�r den Namen
    std::string getName() const;

    // Setter f�r den Namen
    void setName(string n);

    // Getter f�r das Alter
    int getAlter() const;

    // Setter f�r das Alter
    void setAlter(int a);

    void ausgeben(); // Methode zur Ausgabe der Personendaten - Gehoert nicht zur Datenkapselung!
};

/*
Erl�uterung der Datenkapselung:

    Private Attribute:
    Die Attribute name und alter sind als privat deklariert.
    Das bedeutet, dass sie nur innerhalb der Klasse Person zug�nglich sind.
    Externe Funktionen oder Klassen k�nnen nicht direkt auf diese Attribute zugreifen.

    �ffentliche Methoden (Getter und Setter):
        Getter: Die Methoden getName() und getAlter() geben die Werte der privaten Attribute zur�ck.
        Sie erm�glichen den Zugriff auf die Daten, ohne sie direkt zu ver�ndern.

        Setter: Die Methoden setName() und setAlter() erlauben es, die Werte der privaten Attribute zu �ndern.
        Sie bieten einen kontrollierten Weg, um die Daten zu setzen und k�nnen zus�tzliche Logik enthalten,
        um sicherzustellen, dass die Werte g�ltig sind (z. B. keine negativen Alterswerte).

Durch die Datenkapselung wird die Integrit�t der Daten gewahrt.
Die Klasse kann sicherstellen, dass ihre Attribute immer in einem g�ltigen Zustand sind.
Das macht den Code robuster und einfacher zu warten.
*/