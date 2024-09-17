#include "Person.hpp"
#include <iostream>

using namespace std;

int main() {
    Person person;
    cout << person.getName() << endl;
    person.~Person();

    person.setName("Peter");
    cout << person.getName() << endl;
    return 0;
}

/*
Vermeide den manuellen Destruktoraufruf :
   Du solltest den Destruktor nicht manuell aufrufen,
   weil das Objekt weiterhin existiert,
   und das kann zu undefiniertem Verhalten führen.

   Wenn du den Destruktor manuell aufrufst, 
   bleibt das Objekt im Speicher, aber der Zustand ist nicht mehr gültig. 
   Das führt zu Problemen, wenn du versuchst, auf das Objekt zuzugreifen.

   Wenn du ein Objekt auf dem Stack erstellst, 
   wird der Destruktor automatisch aufgerufen, 
   wenn das Objekt den Gültigkeitsbereich verlässt.
*/