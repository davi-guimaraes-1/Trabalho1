#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(int argc, char *argv[]) {
	int array[10];
	int array2[10];
	int state, i = 0, m, n, pose, value, ki, kj, p1, p2, start = 0;

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
		
		if (start == 0 && state != 0 && state != 1 && state != 16) {
			printf("\n\nVocê deve criar o vetor antes!\n\n");
			continue;
		}
		
		i++;
		
		switch (state) {
			case 0:
				i--;
				stop(i); // void stop(); //0 - Encerra
				break;
			case 1:
				init(array); // void init(int array[]); //1  - Cria o vetor
				start = 1;
				continue;
			case 2:
				print(array); // void print(int array[]); //2 - Imprime o vetor
				continue;
			case 3:
				print_inverse(array); // void print_inverse(int array[]); //3 - Imprime o vetor ao contrário
				continue;
			case 4:
				printf("Informe a posição: ");
				scanf("%d", &pose);
				print_unit(array, pose); // void print_unit(int array[], int pose); //4 - Imprime um valor específico do vetor
				continue;
			case 5:
				printf("Informe a posição: ");
				scanf("%d", &pose);
				printf("Informe o novo valor: ");
				scanf("%d", &value);
				change(array, pose, value); // void change(int array[], int pose, int value); //5 - Troca um valor do vetor
				continue;
			case 6:
				bigger(array); // void bigger(int array[]); //6 - Imprime o maior valor do vetor
				continue;
			case 7:
				smaller(array); // void smaller(int array[]); //7 - Imprime o menor valor do vetor
				continue;
			case 8:
				m = average(array); // float average(int array[]); //8 - Retorna a média dos valores do vetor
				printf("\nA média dos valores do vetor é: %d\n\n", m);
				continue;
			case 9:
				printf("Informe o início do intervalo: ");
				scanf("%d", &ki);
				printf("Informe o fim do intervalo: ");
				scanf("%d", &kj);
				m = interval(array, ki, kj); // int interval(int array[], ki, kj); //9 - Retorna a quantidade de valores entre o intervalo (ki, kj)
				printf("\nExistem %d números entre o intervalo (%d, %d)\n\n", m, ki, kj);
				continue;
			case 10:
				printf("Informe a posição: ");
				scanf("%d", &n);
				m = nbigger(array, n); // int nbigger(int array[], n); //10 - Retorna o maior valor a partir de uma posição N
				printf("O maior número a partir da posição %d é: %d", n, array[m]);
				continue;
			case 11:
				printf("Informe a posição: ");
				scanf("%d", &n);
				m = nsmaller(array, n); // int nsmaller(int array[], n); //11 - Retorna o menor valor a partir de uma posição N
				printf("O menor número a partir da posição %d é: %d", n, array[m]);
				continue;
			case 12:
				printf("Informe a primeira posição: ");
				scanf("%d", &p1);
				printf("Informe a segunda posição: ");
				scanf("%d", &p2);
				swap(array, p1, p2); // void swap(int array[], int p1, int p2); //12 - Realiza a permuta entre 2 valores do vetor
				printf("\nTroca realizada!\n\n");
				continue;
			case 13:
				copy(array, array2); // void copy(int array[], int copy[]); //13 - Copia o vetor para outro
				printf("\nVetor copiado!\n\n");
				continue;
			case 14:
				paste(array, array2);// void paste(int array[], int copy[]); //14 - Cola o vetor auxiliar no vetor principal
				printf("\nVetor restaurado!\n\n");
				continue;
			case 15:
				sort(array);// void sort(int array[]); //15 - Organiza o vetor em ordem crescente
				printf("\n\nVetor ordenado!\n\n");
				continue;
			case 16:
				credits(); // void credits(); //16 - Exibe os créditos da aplicação
				continue;
			default:
				printf("\n\nNúmero inválido!\n\n");
				i--;
				continue;
				
		} 
	} while (state != 0);	
	return 0;
}
