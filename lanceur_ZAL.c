#include "zal.h"

//Code source principal
//A compiler : gcc -W -Wall *.c -o zal

int main(){
    srand(time(NULL));
    afficherRueSavidanVide();
    struct heros jako = initialiserHeros();
    struct zombi Z1 = initialiserZombi();
    struct zombi Z2 = initialiserZombi();
    struct zombi Z3 = initialiserZombi();
    struct zombi Z4 = initialiserZombi();
    struct zombi Z5 = initialiserZombi();
    struct zombi Z6 = initialiserZombi();
    struct zombi Z7 = initialiserZombi();
    struct zombi Z8 = initialiserZombi();
    struct zombi Z9 = initialiserZombi();
    struct zombi Z0 = initialiserZombi();
    afficherPosH(jako);
    afficherPosZ1(Z1);
    afficherPosZ1(Z2);
    afficherPosZ1(Z3);
    afficherPosZ1(Z4);
    afficherPosZ1(Z5);
    afficherPosZ1(Z6);
    afficherPosZ1(Z7);
    afficherPosZ1(Z8);
    afficherPosZ1(Z9);
    afficherPosZ1(Z0);

    return 0; 
    
 
    

    



    
    
}
