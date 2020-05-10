#include "tabla.h"




void main(){

	char bijeli[8] = {0}, crni[8] = {0}, figura;
	int i, j, iSada, jSada, iPosle, jPosle;
	bool sahMat = false, potezB = true;
	
	ispisTab();
	
	
	do{
		
		if ( potezB == true){
			
			do{
				printf("\nBijeli igrač je na potezu: ");
				potezB = false;
				
				fgets(bijeli, 7, stdin);
				figura = bijeli[0];
			
			} while ((figura <= 'A') || (figura >= 'Z' ));
			
			jSada = slovoUBroj (bijeli[1]);
			jPosle = slovoUBroj (bijeli[3]);
			
			iSada = slovoUBroj (bijeli[2]);
			iPosle = slovoUBroj (bijeli[4]);
			
			pomjeriFiguru (iSada, jSada, iPosle, jPosle, figura);


		} else {
			
			do{
				printf("\nCrni igrač je na potezu: ");
				potezB = true ;
				
				fgets(bijeli, 7, stdin);
				figura = bijeli[0];
				
			} while ((figura <= 'a') || (figura >= 'z' ));
			
			jSada = slovoUBroj (crni[1]) - 1;
			jPosle = slovoUBroj (crni[3]) - 1;
			
			iSada = slovoUBroj (crni[2]);
			iPosle = slovoUBroj (crni[4]);
			
			pomjeriFiguru (iSada, jSada, iPosle, jPosle, figura);
			
		}
		
		getchar ();
		ispisTab();
		
		
		
		
		
	} while ( sahMat != true );
	
}
