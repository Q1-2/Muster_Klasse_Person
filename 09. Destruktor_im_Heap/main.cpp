#include "Student.h"

int main() {
    Student* student = new Student("Max", 3); 
    student->setNote(0, 1); 
    student->setNote(1, 2); 
    student->setNote(2, 3); 
    student->ausgeben(); 

    student->~Student(); // Hier werden nur die Noten gelöscht! Das Objekt student bleigt.
    student->setName("Peter");
    cout << student->getName() << endl;

    delete student;    // Lösche das Objekt und rufe gleichzeitig den Destruktor auf
    student = nullptr; // Optional: Setze den Zeiger auf nullptr, um sicherzustellen, dass er nicht mehr verwendet wird

    // nicht mehr möglich
    // student->setName("Bea");
    // cout << student->getName() << endl;

    return 0; 
}

/*
Wenn du ein Objekt auf dem Stack erstellst, wird der Destruktor automatisch aufgerufen,
wenn das Objekt den Gültigkeitsbereich verlässt. Bei einem dynamisch zugewiesenen Objekt 
musst du sicherstellen, dass du delete verwendest, um den Destruktor korrekt aufzurufen.
*/