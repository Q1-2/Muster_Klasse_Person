#pragma once
#include <string>

class Person {
private:
    std::string name;
    int alter;

public:
    Person(); // Standardkonstruktor
    Person(std::string n, int a); // Parameterkonstruktor
    Person(const Person& other); // Kopierkonstruktor
    void ausgeben();
};
