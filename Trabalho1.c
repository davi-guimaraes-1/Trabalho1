#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int array[10];
	int copy[10];
	int state, i = 0, m, n, pose, value, ki, kj, p1, p2;

	setlocale(LC_ALL, "Portuguese"); // Só pra poder ter acento
	
	do {
		printf("***********************************************************************************************\n\n"

		"0 - SAIR DA APLICAÇÃO\n"
		"1 - INICIALIZAR O VETOR DE 10 POSIÇÕES\n"
		"2 - EXIBIR O VETOR COMPLETO\n"
		"3 - EXIBIR O VETOR EM ORDEM INVERSA\n"
		"4 - EXIBIR O ELEMENTO DE UMA POSIÇÃO DO VETOR\n"
		"5 - SUBSTITUIR O ELEMENTO DE UMA POSIÇÃO DO VETOR\n"
		"6 - EXIBIR O MAIOR NÚMERO DO VETOR E SUA POSIÇÃO\n"
		"7 - EXIBIR O MENOR NÚMERO DO VETOR E SUA POSIÇÃO\n"
		"8 - RETORNAR A MÉDIA DOS NÚMEROS DO VETOR\n"
		"9 - RETORNAR A QUANTIDADE DE NÚMEROS DENTRO DE UM INTERVALO KI E KJ\n"
		"10 - RETORNAR A POSIÇÃO DO MAIOR NÚMERO A PARTIR DE UMA POSIÇÃO N INFORMADA\n"
		"11 - RETORNAR A POSIÇÃO DO MENOR NÚMERO A PARTIR DE UMA POSIÇÃO N INFORMADA\n"
		"12 - PERMUTAR DUAS POSIÇÕES DO VETOR\n"
		"13 - CRIAR UMA CÓPIA DO VETOR\n"
		"14 - RESTAURAR A CÓPIA DO VETOR\n"
		"15 - ORDENAR O VETOR\n"
		"16 - SOBRE\n\n"

		"DIGITE A OPÇÃO DESEJADA:\n\n"

		"********************************************************************************************\n\n");
		scanf("%d", &state);
		
		switch (state) {
			case 0:
				printf("\n%d ações executadas.\n");
				stop(); // void stop(); //0 - Encerra
				continue;
			case 1:
				init(array); // void init(int array[]); //1  - Cria o vetor
				continue;
			case 2:
				print(array); // void print(int array[]); //2 - Imprime o vetor
				continue;
			case 3:
				print_inverse(array); // void print_inverse(int array[]); //3 - Imprime o vetor ao contrário
				continue;
			case 4:
				print_unit(array, pose); // void print_unit(int array[], int pose); //4 - Imprime um valor específico do vetor
				continue;
			case 5:
				change(array, pose, value); // void change(int array[], int pose, int value); //5 - Troca um valor do vetor
				continue;
			case 6:
				bigger(array); // void bigger(int array[]); //6 - Imprime o maior valor do vetor
				continue;
			case 7:
				smaller(array); // void smaller(int array[]); //7 - Imprime o menor valor do vetor
				continue;
			case 8:
				average(array); // float average(int array[]); //8 - Retorna a média dos valores do vetor
				continue;
			case 9:
				interval(array, ki, kj); // int interval(int array[], ki, kj); //9 - Retorna a quantidade de valores entre o intervalo (ki, kj)
				continue;
			case 10:
				nbigger(array, n); // int nbigger(int array[], n); //10 - Retorna o maior valor a partir de uma posição N
				continue;
			case 11:
				nsmaller(array, n); // int nsmaller(int array[], n); //11 - Retorna o menor valor a partir de uma posição N
				continue;
			case 12:
				swap(array, p1, p2); // void swap(int array[], int p1, int p2); //12 - Realiza a permuta entre 2 valores do vetor
				continue;
			case 13:
				copy(array, copy); // void copy(int array[], int copy[]); //13 - Copia o vetor para outro
				continue;
			case 14:
				paste(array, copy);// void paste(int array[], int copy[]); //14 - Cola o vetor auxiliar no vetor principal
				continue;
			case 15:
				sort(array);// void sort(int array[]); //15 - Organiza o vetor em ordem crescente
				continue;
			case 16:
				credits(); // void credits(); //16 - Exibe os créditos da aplicação
				continue;
			default:
				printf("Número inválido!");
				continue;
		} 
		i++;
	} while (state != 0);	
	return 0;
}
