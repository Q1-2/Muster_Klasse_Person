#include "Student.h"

int main() {
    Student student("Max", 3); // Erstelle einen Student mit drei Noten
    student.setNote(0, 1); // Setze die erste Note
    student.setNote(1, 2); // Setze die zweite Note
    student.setNote(2, 3); // Setze die dritte Note
    student.ausgeben(); // Gebe die Noten aus

    student.~Student(); // Vermeide den manuellen Destruktoraufruf!
    
    cout << student.getName() << endl;
    student.setName("Peter");
    cout << student.getName() << endl;

    // Wie kann man das Problem lösen?

    return 0;
}