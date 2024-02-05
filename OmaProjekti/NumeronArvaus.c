#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    //muuttumattomat arvot
    const int MIN = 1;
    const int MAX = 100;

    int vastaus = 0;
    int arvaus = 0;
    int arvauksia = 0;
    

    //hakee kellonajasta siemenluvun
    srand(time(NULL)); 
    //generoi satunnaisluvun MIN ja MAX lukujen väliltä
    vastaus = (rand() % MAX) + MIN;

    //ilmoitus ja ohje pelaajalle
    printf("\nPelataan peli!");
    printf("\nArvaa luku väliltä 1-100\n");

    //pyydetään arvaus ja ilmoitetaan onko luku pienempi vai suurempi kuin pelaajan arvaus.
    do {
        printf("\nSyötä arvauksesi: ");
        scanf("%d", &arvaus);

        if(arvaus < vastaus)
        {
            printf("Luku on suurempi. Arvaa uudelleen\n");    
        }
        else if(arvaus > vastaus)
        {
            printf("Luku on pienempi. Arvaa uudelleen\n");
        }
        else
        {
            printf("Oikein!\n");
        }
        //laskee pelaajan arvaukset
        arvauksia++;

    }while(arvaus != vastaus); //looppi pyörii kunnes arvaus on sama kuin vastaus


    printf("Vastaus: %d\n", vastaus);
    printf("Arvauksia: %d\n", arvauksia);
    printf("-------------------\n");

    return 0;

}