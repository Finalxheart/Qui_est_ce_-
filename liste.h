#ifndef H_LISTE
#define H_LISTE

    #include "structure.h"

    PtListe init();
    PtListe inserthead(PtListe L, persoCharacteristic newCharacter);
    PtListe deleteHead(PtListe L);
    PtListe deleteCharacter(PtListe myListe, persoCharacteristic target);
    void showListe(PtListe L);

#endif
