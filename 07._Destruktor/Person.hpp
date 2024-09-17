#pragma once
#include <string>

/*
In vielen Beispielen wird oft kein Destruktor erwähnt, 
besonders wenn die Klasse keine dynamischen Ressourcen verwaltet. 
Aber wenn eine Klasse Ressourcen wie dynamisch zugewiesenen Speicher, 
offene Dateien oder Netzwerkverbindungen verwendet, ist es wichtig, 
einen Destruktor zu implementieren, um diese Ressourcen ordnungsgemäß freizugeben.
*/

class Person {
private:
    std::string name;
    int alter;

public:
    Person();
    Person(std::string n, int a);
    Person(const Person& other);

    /*
    Was ist ein Destruktor?
    Ein Destruktor ist eine spezielle Methode, die aufgerufen wird, 
    wenn ein Objekt zerstört wird. Er hat denselben Namen wie die Klasse, 
    aber mit einem vorangestellten Tilde-Zeichen (~), und hat keine Parameter 
    und keinen Rückgabewert. Der Destruktor wird verwendet, 
    um Ressourcen freizugeben und Aufräumarbeiten durchzuführen.
    */

    ~Person(); // Destruktor

    std::string getName() const;
    void setName(const std::string& n);
    int getAlter() const;
    void setAlter(int a);
    void ausgeben();
};
