#include "tabla.h"




void main(){

	char bijeli[8] = {0}, crni[8] = {0}, figura;
	int i, j, iSada, jSada, iPosle, jPosle;
	bool sahMat = false, potezB = true;
	
	ispisTab();
	
	
	do{
		
		if ( potezB == true){
			
			//do{
				printf("\nBijeli igrač je na potezu: ");
				potezB = false;
				
				fgets(bijeli, 6, stdin);
			
			//} while ( (figura != 'P') || (figura != 'L') || (figura != 'T') || (figura != 'S') || (figura != 'D') || (figura != 'K') );
			
			jSada = slovoUBroj (bijeli[0]);
			iSada = bijeli[1] - 49;
			
			jPosle = slovoUBroj (bijeli[3]);
			iPosle = bijeli[4] -49;
			
			figura = tabla [iSada] [jSada];
			
			
			pomjeriFiguru (iSada, jSada, iPosle, jPosle, figura);


		} else {
			
			//do{
				printf("\nCrni igrač je na potezu: ");
				potezB = true ;
				
				fgets(crni, 6, stdin);
				
			//} while ( (figura != 'p') || (figura != 'l') || (figura != 't') || (figura != 's') || (figura != 'd') || (figura != 'k') );
			
				jSada = slovoUBroj (bijeli[0]);
				iSada = bijeli[1] - 49;
				
				jPosle = slovoUBroj (bijeli[3]);
				iPosle = bijeli[4] -49;
			
			figura = tabla [iSada] [jSada];
			
			
			pomjeriFiguru (iSada, jSada, iPosle, jPosle, figura);
			
		}
		
		getchar ();
		ispisTab();
		
		
		
		
		
	} while ( sahMat != true );
	
}
