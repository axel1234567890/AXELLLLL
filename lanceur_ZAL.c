#include "zal.h"

//Code source principal
//A compiler : gcc -W -Wall *.c -o zal

int main(){
	srand(time(NULL));
	struct heros { int posx; int posy;};
	struct zombi { int zposx; int zposy; int tabZombi[NBZOMBIS]};
    srand(time(NULL));
  
    afficherRueSavidanVide();
    return 0; 
}
