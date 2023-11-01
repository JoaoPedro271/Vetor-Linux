#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){


	int n1,list,x,au;

	
	printf("Escolha um valor para determinar um limite para o vetor ");
	scanf("%d",&x);
	

	if(n1 > x){
		printf("Voce excedeu o limite criado por voce mesmo.");
		return 1;
	}

	for(list=0; list < x; list = list + n1){


		printf("Escolha um qualquer valor qualquer ");
		scanf("%d",&n1);

	}





return 0;

}
