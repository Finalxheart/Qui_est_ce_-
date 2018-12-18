#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structure.h"
#include "character.h"
#include "liste.h"

PtListe init() {
    return NULL;
}

PtListe inserthead(PtListe L, persoCharacteristic newCharacter){
    PtListe P = (Liste*)malloc(sizeof(Liste));
    P->character = newCharacter;
    P->suivant   = (PtListe)L;

    return P;
}

PtListe deleteHead(PtListe L) {
    PtListe P;
    if (L != NULL) {
        P = L;
        L = (PtListe)L->suivant;
        free(P);
    }
    return P;
}

PtListe deleteCharacter(PtListe myListe, persoCharacteristic target){
    if (myListe == NULL) return NULL;
    else {
        PtListe L = myListe;
        while (L != NULL) {
            if (!strcmp(L->character.name, target.name)) {
                printf("enter in compare\n");
                printf("Delete %s\n", L->character.name);
                L = deleteHead(L);
            }
            L = (PtListe)L->suivant;
        }
    }
    return myListe;
}

void showListe(PtListe L) {
    if (L == NULL) printf("Fin de la liste\n");
    else {
        showCharacter(L->character);
        printf("\n");
        showListe((PtListe)L->suivant);
    }
}
