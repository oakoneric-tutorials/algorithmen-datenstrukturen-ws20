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

#include <stdlib.h> // benötigt für malloc
#include <stdio.h>

typedef struct element *list;
struct element { int value; list next; };

void append(list *lp, int n){
    CODE
}

int sum_rec(list l) {
    CODE
}

int sum_it(list l) {
    CODE
}


/*
problem: beim löschen des ersten listenelements geht der zugriff auf die liste verloren
ausweg: pointer auf pointer - erster pointer hält stets listenanfang fest
*/

void rmEvens_rec(CODE) { /* *lp heißt: wir übergeben einen pointer (list pointer) */
    CODE
}

void rmEvens_it(CODE) {
    CODE
}

list odds(list lp){
    CODE
}


// zwei nuetzliche hilfsfunktionen, die nicht gefordert waren

// hilsfunktion zur erzeugung von listen:
list cons(int n, list next) {
    list l = malloc(sizeof(struct element));
                                 /* reserviere speicher für ein listenelement */
    l->value = n;                /* trage key ein */
    l->next = next;              /* pointer auf nächstes listenelement bzw. restliste */
    return l;
}

// hilfsfunktion zur ausgabe von listen:
void printList(list l) {
    printf("[");
    while(l) {    /* solange liste nicht leer ist (listpointer nicht null*/
        printf("%d", l->value);     /* ausgabe des keys */
        if(l->next) printf(", ");   /* wenn noch weitere elemente existieren (next-pointer nicht null */
        l = l->next;                /* pointer weiterschalten um restliste auszugeben */
    }
    printf("]\n");
}



int main() {
    /* erstelle eine liste [4,2,0,1] */
    CODE
    // list l2 = cons(4, cons(2, cons(0, cons(1, NULL))));

    printf("l: ");
    printList(l);

    printf("sum_rec(l): %d\n", sum_rec(l));
    printf("sum_it(l): %d\n\n", sum_it(l));

    CODE // rmEvens

    CODE // odds
    printf("l: ");
    printList(l);

    return 0;
}