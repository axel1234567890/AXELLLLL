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

int aleatoire(int limite){
    return rand() %limite;
}

struct heros initialiserHeros(){
	struct heros Jako = { LARGEUR_RUE/2, LONGUEUR_RUE, 'H' ,};
	return Jako;
	};


struct zombi initialiserZombi(){
	 int i = aleatoire(LARGEUR_RUE);
	struct zombi Z1 = {i , 0, 'Z' ,};
	 i = aleatoire(LARGEUR_RUE);
	struct zombi Z2 = {i , 0, 'Z' ,};
	 i = aleatoire(LARGEUR_RUE);
	struct zombi Z3 = {i , 0, 'Z' ,};
	 i = aleatoire(LARGEUR_RUE);
	struct zombi Z4 = {i , 0, 'Z' ,};
	 i = aleatoire(LARGEUR_RUE);
	struct zombi Z5 = {i , 0, 'Z' ,};
	 i = aleatoire(LARGEUR_RUE);
	struct zombi Z6 = {i , 0, 'Z' ,};
	 i = aleatoire(LARGEUR_RUE);
	struct zombi Z7 = {i , 0, 'Z' ,};
	 i = aleatoire(LARGEUR_RUE);
	struct zombi Z8 = {i , 0, 'Z' ,};
	 i = aleatoire(LARGEUR_RUE);
	struct zombi Z9 = {i , 0, 'Z' ,};
	
	struct zombi Z0 = {i , 0, 'Z' ,};
	return Z1, Z2, Z3, Z4, Z5, Z6, Z7, Z8, Z9, Z0;
}
/** 
Procédure qui initialise un tableau de zombis passé en paramètre. Ce tableau est de 
type TabZombis (voir étape) et est directement modifié dans la procédure (normal, on ne 
peut pas retourner de tableau depuis une fonction).
*@
param
TabZombis un tableau de 
NBZOMBIS structures de type zombi
*/
void afficherPosH(struct heros Jako){
	
	printf("Votre héros jako est en vie et se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Jako.posx, Jako.posy);
	}
	
void afficherPosZ1(struct zombi Z1){ printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z1.zposx, Z1.zposy);
	}
	void afficherPosZ2(struct zombi Z2){
			printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z2.zposx, Z2.zposy);
		}
	void afficherPosZ3(struct zombi Z3){ printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z3.zposx, Z3.zposy);
}
	void afficherPosZ4(struct zombi Z4){	printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z4.zposx, Z4.zposy);
}
	void afficherPosZ5(struct zombi Z5){	printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z5.zposx, Z5.zposy);
}

	void afficherPosZ6(struct zombi Z6){	printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z6.zposx, Z6.zposy);

}
	void afficherPosZ7(struct zombi Z7){	printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z7.zposx, Z7.zposy);
}
	void afficherPosZ8(struct zombi Z8){	printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z8.zposx, Z8.zposy);
}
	void afficherPosZ9(struct zombi Z9){	printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z9.zposx, Z9.zposy);
}
	void afficherPosZ0(struct zombi Z0){	printf("un zombie se trouve aux coordonnées posX= %d et posY= %d de la rue Jean Savidan.\n", Z0.zposx, Z0.zposy);
}
		
	



