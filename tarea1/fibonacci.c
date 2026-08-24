#include <stdio.h>

int main(){
	int n, n1=0, n2=1, suma;
	printf("Numeros de fibonacci para ver: ");
	/*	pregunta hasta cuantos  numeros
	 de la serie de fibonacci  quiere ver
	*/
	scanf("%d",&n);//guarda el valor de la variable n

	for(int i=0; i<n; i++){
	printf("%d ",n1);//imprime el primer cero de la serie
	suma=n1+n2;//suma los primeros dos numeros 
	n1=n2;//guarda el valor de n2 en n1
	n2=suma;//se le asigna la suma al n2 para cuando repita el ciclo
	}
	return 0;
}
