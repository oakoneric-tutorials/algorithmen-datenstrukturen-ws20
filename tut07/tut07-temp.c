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

#include <stdlib.h>
#include <stdio.h>

typedef struct element *list;
struct element { int value; list next; };

typedef struct node *tree;
struct node { int key; tree left, right; };


// Teil (a)

tree createNode(int n, tree l, tree r) {
    CODE
}


// Teil (b)

void insertl(tree *tp, int n) {
    CODE
}


// Teil (c)

int leafprod(tree t){
    CODE
}


// Teil (d)

defol(tree *tp){
    CODE
}

// Teil (e)

void append(list *lp, int n){
    while(*lp != NULL)
        lp = &((*lp)->next) ;
    (*lp) = malloc(sizeof(struct element));
    (*lp)->value  = n;
    (*lp)->next = NULL;
}

CODE

//  Teil (f)

baz(tree s, tree t) {
    CODE
}

/* ----------------------------------------- */

void printTree(tree t, int depth) { /* ausgabe eines baumes */
    if (t) {
        for (int i = 0; i < depth; i++) printf("\t");
        printf("%d\n", t->key);
        printTree(t->left, depth+1);
        printTree(t->right, depth+1);
    }
}

void printList(list l) { /* ausgabe einer liste */
    printf("[");
    while(l) {
        printf("%d", l->value);
        if(l->next) printf(", ");
        l = l->next;
    }
    printf("]\n");
}


int main() {

    // zu Teil (a)
    printf("\n============ Teil (a) ========================\n");
    CODE
    printf("bsp = ");
    printTree(bsp, 0);

    tree s = createNode(2, createNode(3, createNode(2, NULL, NULL), createNode(4, NULL, NULL)), createNode(1, NULL, NULL));
    printf("s = ");
    printTree(s, 0);

    tree t = createNode(2, createNode(2, NULL, NULL), createNode(3, NULL, NULL));
    printf("t = ");
    printTree(t, 0);

    // zu Teil (b)
    printf("\n============ Teil (b) ========================\n");
    insertl(&bsp, 18);
    printf("bsp = ");
    printTree(bsp, 0);

    // zu Teil (c)
    printf("\n============ Teil (c) ========================\n");
    int prod = leafprod(bsp);
    printf("leafprod(bsp) = %d\n", prod);
    prod = leafprod(s);
    printf("leafprod(s) = %d\n", prod);
    prod = leafprod(t);
    printf("leafprod(t) = %d\n", prod);

    // zu Teil (d)
    printf("\n============ Teil (d) ========================\n");
    defol(&bsp);
    printf("defol(bsp) = \n");
    printTree(bsp, 0);


    // zu Teil (e)
    printf("\n============ Teil (e) ========================\n");

    printf("\ntreeToList(bsp) = ");
    printList(treeToList(bsp));

    printf("\ntreeToList(s) = ");
    printList(treeToList(s));

    printf("\ntreeToList(t) = ");
    printList(treeToList(t));

    // zu Teil (f)
    printf("\n============ Teil (f) ========================\n");
    tree x = baz(s, t);
    printf("\nbaz(s, t) = \n");
    printTree(x, 0);

    return 0;
}