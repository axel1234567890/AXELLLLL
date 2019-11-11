#include "zal.h"

void afficherRiveGauche(int l){
    char riveGauche[LONGUEUR_RUE][LARGEUR_RIVE] = {"----------------------------||","Rue des Ursulines  !! HELP!!||","----------------------------||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","----------------------------||","Impasse ancienne gendarmerie||","----------------------------||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .........           ||","        .I       .          ||","        . M      .          ||","        .  A	 .          ||","        .   G	 .          ||","        .    E	 .          ||","        .    R	 .          ||","        .   I 	 .          ||","        ...E......          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","----------------------------||","rue compagnie Roger Barbe   ||","----------------------------||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","----------------------------||","----------------------------||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","----------------------------||","Venelle des 3 avocats       ||","----------------------------||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","****************************||"};
      printf("%s",riveGauche[l]);
}
void afficherRiveDroite(int l){
    char riveDroite[LONGUEUR_RUE][LARGEUR_RIVE] ={"||. .","||. .","||..........","||. .","||. .","||. .","||. .","||----------------------------","||Venelle des écoles","||----------------------------","||. .","||. .","||. .","||. .","||..........","||. .","||. .","||. .","||. .","||. .","||. .","||. .","||..........","||. .","||. .","||. .","||----------------------------","||Rue de Keriavily","||----------------------------","||. .","||. .","||. .","||. .","||..........","||. .","||. .","||. .","||. .","||. .","||. .","||----------------------------","||. .","||. .","||. .","||. .","||. .","||..........","||. .","||. .","||. .","||. .","||. .","||----------------------------","||rue Emile le Taillandier","||----------------------------","||. .","||..........","||.M .","||. A .","||. I .","||. R .","||. I .","||......E...","||----------------------------","||place des halles","||----------------------------","||. .","||. .","||. .","||. .","||. .","||. .","||. .","||****************************"};
    printf("%s",riveDroite[l]);
}

void afficherRueSavidanVide(){
    int y,i;
    for(y = 0; y <= LONGUEUR_RUE;y++){
        afficherRiveGauche(y);
        for(i = 0; i < LARGEUR_RUE ;i++){
            printf(" ");
        }   
        afficherRiveDroite(y);
        printf("\n");
    }
}






int aleatoire(int limite)
{ 
	return rand() %limite; 
} 



Heros initialiserHeros()
{
	heros.posx = LARGEUR_RUE/2; 
	heros.posy = LONGUEUR_RUE; 
	heros.Vie = 1; 
	return heros;
} 




Zombi initialiserZombi()
{ 
	zombi.zposy = 0; 
	zombi.zposx = aleatoire(LARGEUR_RUE); 
	return zombi;
} 


void initialiserZombis(tabzombis zombis)
{ 
	int i = 0; 
	while(i < NBZOMBIS)
	{ 
		zombis[i] = initialiserZombi(); 
		i++; 
	} 
} 



void infoHeros(Heros heros)
{ 
	if(heros.Vie == 0)
	{ 
		printf("Votre héros Jako est mort et se trouve aux coordonnées posX=%d et posY=%d de la Rue Jean Savidan. \n",heros.posx,heros.posy); 
	} 
	else
	{ 
		printf("Votre héros Jako est en vie et se trouve aux coordonnées posX=%d et posY=%d de la Rue Jean Savidan. \n",heros.posx,heros.posy);  
	} 
} 


void infoZombiV2(Zombi zombi)
{ 
	printf("Un zombi se trouve aux coordonnées posX=%d et posY=%d de la rue Jean Savidan. \n",zombi.zposx,zombi.zposy); 
} 



void infoZombiAll(tabzombis zombis)
{ 
	int i = 0; 
	while(i < NBZOMBIS)
	{ 
		infoZombiV2(zombis[i]);
		i++; 
	} 
}

