#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
	float x,y,n1,n2,soma,subtracao,multiplicacao,divisao;
	char continua;
	int op;
	
	do{
	//opção
	printf("\n\t1 - adicao \n\t2 - subtracao \n\t3 - multiplicacao \n\t4 - divisao:");	
	scanf("%d", &op);
	//digite um numero
	printf("digite um numero");
	scanf("%f", &x);
	printf("digite outro numero");
	scanf("%f", &y);
	//soma
	soma = n1+n2;
	printf("a soma eh: %.2f");
	//subtração
	subtracao = n1-n2;	
	printf("a subtracao eh: %.2f");
	//multiplicação	
	multiplicacao = n1*n2;
	printf("a mulitplicacao eh: %.2f");
	//divisão
	divisao = n1/n2;
	printf("a divisao eh: %.2f");			
	}
	while(continua!='s' && continua!='n');{
		printf("digite s para continuar ou n para sair:");
    scanf("%s", &continua);
    if(continua != 's' && continua != 'n'){
    	printf("voce deve digitar s ou n");
	}	
		
	}
	
}

