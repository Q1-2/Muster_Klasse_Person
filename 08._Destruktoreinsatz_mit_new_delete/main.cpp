#include "Student.h"

int main() {
    Student student("Max", 3); // Erstelle einen Student mit drei Noten
    student.setNote(0, 1); // Setze die erste Note
    student.setNote(1, 2); // Setze die zweite Note
    student.setNote(2, 3); // Setze die dritte Note
    student.ausgeben(); // Gebe die Noten aus

 /*
 Vermeide den manuellen Destruktoraufruf :
    Du solltest den Destruktor nicht manuell aufrufen, 
    weil das Objekt weiterhin existiert, 
    und das kann zu undefiniertem Verhalten führen.
*/
    student.~Student(); 

   

    return 0;
}