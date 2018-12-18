#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structure.h"
#include "character.h"
#include "liste.h"

persoCharacteristic createCharacter(){
    char name[3][20]      = {"Jérémy", "Felix", "Sofiane"};
    char formes[3][20]    = {"Square", "Ovale", "Rond"};
    char longHair[3][20]  = {"None", "Short", "Long"};
    char eyes[4][20]      = {"Blacks", "Browns", "Blues", "Greens"};
    char beard[3][20]     = {"None", "Short", "Long"};
    char mustache[3][20]  = {"None", "Short", "Long"};
    char accessory[3][20] = {"None", "Glasses", "Hat"};

    persoCharacteristic perso;
    strcpy(perso.name,      name[rand()%3]);
    strcpy(perso.formes,    formes[rand()%3]);
    strcpy(perso.longHair,  longHair[rand()%3]);
    strcpy(perso.eyes,      eyes[rand()%4]);
    strcpy(perso.beard,     beard[rand()%3]);
    strcpy(perso.mustache,  mustache[rand()%3]);
    strcpy(perso.accessory, accessory[rand()%3]);

    return perso;
}

void showCharacter(persoCharacteristic perso) {
    printf("Name      : %s\n", perso.name);
    printf("Forme     : %s\n", perso.formes);
    printf("LongHair  : %s\n", perso.longHair);
    printf("Eyes      : %s\n", perso.eyes);
    printf("Beard     : %s\n", perso.beard);
    printf("Mustache  : %s\n", perso.mustache);
    printf("Accessory : %s\n", perso.accessory);
}
