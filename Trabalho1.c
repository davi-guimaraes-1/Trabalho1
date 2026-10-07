#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int array[10];
	int copy[10];
	int state, i = 0;

	setlocale(LC_ALL, "Portuguese"); // Só pra poder ter acento
	
	while true {
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
				
				continue;
			case 1:

				continue;
			case 3:

				continue;
			case 4:

				continue;
			case 5:

				continue;
			case 6:

				continue;
			case 7:

				continue;
			case 8:

				continue;
			case 9:

				continue;
			case 10:

				continue;
			case 11:

				continue;
			case 12:

				continue;
			case 13:

				continue;
			case 14:

				continue;
			case 15:

				continue;
			case 16:

				continue;
			default:
				printf("Número inválido!");
				continue;
		}
		i++;
	}	
	return 0;
}
