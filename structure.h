#ifndef H_STRUCTURE
#define H_STRUCTURE

    typedef struct {
        char name[20];
        char formes[20];  // carré ovale rond
        char longHair[20]; // Aucun, Long et court
        char hair[20]; // 6 couleurs
        char eyes[20]; // 4 couleurs
        char beard[20]; // aucun court long
        char mustache[20]; // aucun petit grand
        char accessory[20]; // aucun, lunette chapeau
    } persoCharacteristic;

    typedef struct {
        persoCharacteristic character;
        struct Liste *suivant;
    } Liste, *PtListe;

#endif
