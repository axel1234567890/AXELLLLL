#include "zal.h"

int main(){
    srand(time(NULL));
	afficherRueSavidanVide();
	tabzombis zombis;
	initialiserHeros(); 
	initialiserZombis(zombis);
	infoHeros(heros);
	infoZombiAll(zombis); 
    return 0; 
}
