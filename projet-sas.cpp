#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int j,i;
int choix,choix_o,choix_Affichage,N;
float montant_O,montant;
char Ncin[10];

typedef struct{
    char cin[10],nom[20],prenom[15];
float montant;


    
}comptes;





void menu(){
    printf("\n\n**************************************Menu**************************************\n1-Creer un compte\n2-Operation\n3-Affichage d'ordre\n4-fidelisation\n5-Quitter l'application\nentrez votre choix:\n \n");

 scanf("%d",&choix);
 
}

    comptes c[100][4];
	

void case_1()
{
  
    printf("entrez le nombre de compte souhaitez: \n");
  	        scanf("%d",&N);
  	        
  	  for(i=0;i<N;i++)
  	  {
        	for(j=0;j<1;j++)
  	     {
  	    
  	            printf("\n\nentrez votre nom: \n");
  			    scanf("%s",c[i][j].nom);
  			    printf("entrez votre prenom: \n");
  			    scanf("%s",c[i][j].prenom);
  			    printf("entrez votre numero de carte d'identite national:\n");
  			    scanf("%s",c[i][j].cin);
  			    printf("entrez le montant:\n");
  			    scanf("%f",&c[i][j].montant);
  			    
  	     }
  	  }
  		
}

void case_2()
{
    printf("entrez le numéro CIN du client");
    scanf("%s",Ncin);
     for(i=0;i<N;i++)
  	  {
        	for(j=0;j<1;j++)
  	     {
  				  if(strcmp(Ncin,c[i][j].cin)==0)
    					montant=c[i][j].montant;
    			else
    			{printf("introuvable");
    			break;
				}
    			
    	}
	  }
	  
    
   printf("1-Depot.\n2-Retrait. \nentrez votre choix:\n");
			scanf("%d",&choix_o);
			
			                    switch(choix_o)
			                    {
			                        case 1: printf("donnez le montant de depot");
			                                scanf("%f",&montant_O);
			                                c[i][j].montant=montant+montant_O;
			                                printf("votre nouveau solde est %f", c[i][j].montant);
			                                break;
			                        case 2: printf("donnez le montant de retrait");
			                                scanf("%f",&montant_O);
			                                c[i][j].montant=montant-montant_O;
			                                printf("votre nouveau solde est %f",c[i][j].montant);
			                                break;
			                       default: printf("erreur s'est produit");
			                       
			                       break;
			                    } 
    
    
    
    
    
}
 


int main()
{
	 
    comptes c[100][4];
    char des[3];
	
	
     do{
     	
	
     
   
	
  menu();
 
   switch(choix)
  {
     
  	case 1: 
  	
  	   case_1();
  	

  		
  		
  	break;
  	
  	
  	case 2:case_2();
  			
  			
  		
  	
  	
  	
  	
  	
  	
	case 3: printf("1- Par Ordre Ascendant\n 2- Par Ordre Descendant\n 3-Par Ordre Ascendant (un montant supérieur à un chiffre introduit) \n 4-Par Ordre Descendant (un montant supérieur à un chiffre introduit)\n 5-Recherche par CIN \n\n");
	        scanf("%d",&choix_Affichage);
	       
	
	
	

	
	
	
	default: menu();
			
			
  }
 printf("vous voulez terminez? [oui/non]");
 scanf("%s",des);
}while( strcmp(des,"oui")==0 || strcmp(des,"OUI")==0  );
}
 
   
 
   

 

