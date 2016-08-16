#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int main(){
	
	int i,j, num, cont, cont2 ,num2, menor=-1;
	float num3, cons, acum, acum2=0, ttl;
	char resp, nombre[20], aux[20];
	
	
	
	printf("\t\t\t\t***REGISTRO***");
	printf("\n\nCuantas Zonas se van a Visitar?\t");
	scanf("%d",&num);
	
	cont2=0;
	for(i=0; i<num; i++){
		
		printf("\n\nCual es Nombre de la Zona\t");
			fflush(stdin);
			gets(nombre);
	
		
		acum=0;	
	    cont=0;
		for(j=0; j<2; j++){
		
			
			
			cont++;
			printf("\nCASA %d", cont);
			
			printf("\nCuantas Personas Habitan en el Hogar\t");
			scanf("%d,",&num2);
		
			printf("\nDe Cuanto es el Consumo Electrico (Kw)\t");
			scanf("%f",&num3);
			acum=acum+num3;
			
			printf("\nIngrese la Condicion Habitacional de acuerdo a:");
			printf("\n1)P: Casa Propia");
			printf("\n2)A: Casa Alquilada");
			printf("\n3)M: Comodato\n");
			resp=tolower(getche());
			
			
			
			cons=num3/num2;
			printf("\nEl Consumo Promedio por Persona en el Hogar es %.1f\n", cons);
			
		
			if (resp=='a' && num3>350.75){
				
				cont2++;
				}
		
		} //for de las 25 casas
		
            ttl=acum;
			printf("\n\nEl Consumo Total de Energia de la Zona es: %.1f", ttl);
			acum2+=ttl;

			if(ttl>menor){
				menor=ttl;
				strcpy(aux,nombre);
			}	

		
	}//for del x zonas
		
		
	
		printf("\n\nEl Consumo Total de Todas las Zonas Visitadas es: %.1f",acum2);
		
		printf("\n\nHogares ALQUILADOS con Consumo Mayor a 350.75 KW son: %d", cont2);
		
		printf("\n\nLa Zona Donde Hubo Mayor Consumo de Energia fue: %s con Consumo de: %.2d", aux, menor);
		
		getch ();
		return 0;		
}








