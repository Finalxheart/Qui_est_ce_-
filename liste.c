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
    P = L;
    if (L != NULL) {
        P = (PtListe)L->suivant;
        free(P);
    }
    return P;
}

PtListe deleteCharacter(PtListe myListe, persoCharacteristic target){
    PtListe P;
    P = myListe;

    printf("character.name : %s\n", myListe->character.name);
    printf("target.name    : %s\n\n", target.name);

    if (myListe == NULL) {
        return P;
    } else if (strcmp(myListe->character.name, target.name)) {
        // printf("enter\n");
        return deleteHead(myListe);
    } else {
        return deleteCharacter((PtListe)myListe->suivant, target);
    }
    return P;
}

void showListe(PtListe L) {
    if (L == NULL) printf("Fin de la liste\n");
    else {
        showCharacter(L->character);
        printf("\n");
        showListe((PtListe)L->suivant);
    }
}
