/*  
	BIBLIOTECA DE FUNÇÕES AUTORAIS
	HERICK LIMA NUNES
	ENGENHARIA DE COMPUTAÇÃO
	UNIVERSIDADE FEDERAL DO ESPÍRITO SANTO
	V1.0
*/

#include <math.h>
#include <stdio.h>

//F1:
float calcularAumento(float valor, float percentual){ //função que calcula o aumento de um valor de acordo com um percentual informado
	return valor*(1+(percentual/100));
}
//F2:
void escreveMes(int dia, int mes, int ano){	//Função que retorna data com mês escrito por extenso
	
	char *nomeMes;
	/* Dando um nome ao mês informado respectivo ao seu número */
	if(mes==1) nomeMes = "Janeiro";
	else if(mes==2) nomeMes = "Fevereiro";
	else if(mes==3) nomeMes = "Março";
	else if(mes==4) nomeMes = "Abril";
	else if(mes==5) nomeMes = "Maio";
	else if(mes==6) nomeMes = "Junho";
	else if(mes==7) nomeMes = "Julho";
	else if(mes==8) nomeMes = "Agosto";
	else if(mes==9) nomeMes = "Setembro";
	else if(mes==10) nomeMes = "Outubro";
	else if(mes==11) nomeMes = "Novembro";
	else if(mes==12) nomeMes = "Dezembro";
	
	printf("%i de %s de %i", dia, nomeMes, ano); //Exibindo resultado
}

//F3:
int fibonacci(int n){	//Calcula a sequência de Fibonacci a partir de um número informado
	if(n<2) return n;
	else return fibonacci(n-1)+fibonacci(n-2);
}

//F4:
int fatorial(int n){	//Calcula o fatorial do número informado
	if(n>1) return n*fatorial(n-1);
	else return 1;
}

//F5:
int somaPotencias(int numero, int expoente){	//Realiza uma soma de números elevados a uma potência
	int soma=0;
	if(numero>0){
		soma = pow(numero, expoente)+somaPotencias(numero-1, expoente);
	}
	
	return soma;
}

//F6:
void printvec(int *vet, int qtde){	//Exibe um vetor de inteiros
	for(int i=0; i<qtde; i++){
		printf("%i ", vet[i]);
	}
}
