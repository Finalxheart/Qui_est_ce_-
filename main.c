#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "character.h"
#include "liste.h"

#define NB_PERSO 40

int main(int argc, char *argv[]) {
    srand(time(NULL));
    int i;
    PtListe allPerso = init();
    persoCharacteristic perso;

    for (i = 0; i < 3; i++) {
        perso = createCharacter();
        allPerso = inserthead(allPerso, perso);
    }

    showListe(allPerso);
    printf("perso.name : %s\n\n", perso.name);
    allPerso = deleteCharacter(allPerso, perso);
    showListe(allPerso);

    return 0;
}
