#include <stdio.h> 

int main(){
	
	int valor, cont = 0, i;

	printf ("Digite o Valor: ");
	scanf ("%d", &valor);

	//Considerando que 1 não é primo

	if (valor >= 2){
		for (i = 1; i <= valor; i++){
			if (valor % i == 0){
				cont++;
			}
		}
	}

	if (cont == 2)
		printf ("É primo!\n");
	else 
		printf ("Não é primo!\n");

	return 0;
}