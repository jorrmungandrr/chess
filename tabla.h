#include <stdio.h>
#include <stdlib.h>


typedef enum{ false, true} bool;
typedef enum {a, b, c, d, e, f, g, h} slovo;



char tabla [8] [8] = {	 	{"TSLDKLST"},
							{"PPPPPPPP"},
							{"++++++++"},
							{"++++++++"},
							{"++++++++"},
							{"++++++++"},
							{"pppppppp"},
							{"tsldklst"}
											};
											
										
										

void ispisTab(void){
	system("clear");
	
	int i, j;
	
	for (i = 0; i < 8; i++){
		for (j = 0; j < 8; j++){
			
			printf("%c  ", tabla [i] [j] );
		}
		printf("   %d\n", i + 1);
	}
	printf("\na  b  c  d  e  f  g  h\n");
	
	
}				


int slovoUBroj (char x){
	
	switch (x){
		
		case 'a' :
			return 0;
			break;
			
		case 'b' :
			return 1;
			break;
			
		case 'c' :
			return 2;
			break;
			
		case 'd' :
			return 3;
			break;
			
		case 'e' :
			return 4;
			break;
			
		case 'f' :
			return 5;
			break;
			
		case 'g' :
			return 6;
			break;
			
		case 'h' :
			return 7;
			break;
			
			
			
		case '1' :
			return 0;
			break;
			
		case '2' :
			return 1;
			break;
			
		case '3' :
			return 2;
			break;
			
		case '4' :
			return 3;
			break;
			
		case '5' :
			return 4;
			break;
			
		case '6' :
			return 5;
			break;
			
		case '7' :
			return 6;
			break;
			
		case '8' :
			return 7;
			break;
			
		default :
			printf("\nLoše zadana pozicija\n");
			break;
			
	}
}

void pomjeriFiguru (int iS, int jS, int iP, int jP, char fig){
	
	tabla [iP] [jP] = fig;
	tabla [iS] [jS] = '+';
}
