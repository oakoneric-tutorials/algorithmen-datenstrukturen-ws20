/* 
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws20
Website: https://oakoneric.github.io/aud20.html
------------------------------------------------------------------------------
Aufgabe 2 
------------------------------------------------------------------------------
*/

#include <stdio.h>

void swap(int *x, int *y){ /* hier weist der Stern auf Zeiger hin */
    int tmp;
    
    CODE
    
    /* Der Stern vor einer Variablen bedeutet: Dereferenzieren
       nutze den Wert, der in der Adresse von x steht (insbes. nicht die Adresse)
    */
}


int main() {
    int x = 4, y = 6;
    
    printf("x = %d, y = %d \n", x, y);
    swap( CODE );
    /* Aufruf mit & vor einer Variablen gibt nur die Adresse der Variablen weiter, nicht   aber deren Wert -> Änderung von globalen Variablen durch Funktionen möglich
    */
    printf("x = %d, y = %d \n", x, y);
    
    return 0;
}