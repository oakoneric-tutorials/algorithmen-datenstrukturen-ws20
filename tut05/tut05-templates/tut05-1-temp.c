/* 
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws20
Website: https://oakoneric.github.io/aud20.html
------------------------------------------------------------------------------
Aufgabe 1
------------------------------------------------------------------------------
*/

#include <stdio.h>

CODE


int main() {
    int x = 0, y = 0, a;
    printf("\nAckermannfunktion\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    
    a = ack(x,y);
    
    printf("ack(%i,%i)=%i.\n", x, y, a);
    
    return 0;
}