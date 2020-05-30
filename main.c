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
				fgets(bijeli, 6, stdin);
				figura = bijeli[0];
			
			} while ( figura > 'Z' );
			
		
			
			jSada = slovoUBroj (bijeli[1]);
			iSada = bijeli[2] - 49;
			
			jPosle = slovoUBroj (bijeli[3]);
			iPosle = bijeli[4] -49;
			
			potezB = false;
			pomjeriFiguru (iSada, jSada, iPosle, jPosle, figura);

		} else {
			
			do{
				printf("\nCrni igrač je na potezu: ");				
				fgets(crni, 6, stdin);
				figura = crni[0];

			} while (figura < 'a');
			
				jSada = slovoUBroj (crni[1]);
				iSada = crni[2] - 49;
				
				jPosle = slovoUBroj (crni[3]);
				iPosle = crni[4] -49;
			
			potezB = true;
			pomjeriFiguru (iSada, jSada, iPosle, jPosle, figura);
			
		}
		
		getchar ();
		ispisTab();
		
		
		
		
		
	} while ( sahMat != true );
	
}
