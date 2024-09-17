#include <iostream>
using namespace std;

class Student {
private:
    string name; 
    int* noten; 
    int anzahlNoten; 

public:
    Student(string n, int anzahl); 
    ~Student(); 
    void setNote(int index, int note); 
    void ausgeben();

    string getName();
    void setName(string n);
};