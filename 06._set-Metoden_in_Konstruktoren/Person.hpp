#pragma once
#include <string>

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
    void setAlter(int a);
    void ausgeben(); 
};
