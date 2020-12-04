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

palindrom(char feld[], int l, int korrekt) {
    int i = 1;
    l = l - 1;
    while (i < l && korrekt) {
        korrekt = feld[i] == feld[l];
        i = i + 1;
    }
    return korrekt;
}

int main() {
    #define ANZ 4

    char pal[4] = { 'o', 't', 't', 'o' };
    char nopal[5] = { 't', 'o', 't', 'o', 't' };
    int ispal;
    palindrom1(pal, 4, &ispal);
    if (ispal) printf("otto ist ein Palindrom.\n");
    palindrom1(nopal, 5, &ispal);
    if (ispal) printf("totot ist ein Palindrom.\n");


    char feld[ANZ] = { 'o', 't', 't', 'o' };
    int korr;

    korr = palindrom2(feld, 0, ANZ-1);
    printf("korr = %d\n", korr);

    return 0;
}