#include <stdio.h>

int main(void) { char nome[40]; printf("Entre com um nome:"); fgets(nome, 40, stdin);

char uf[3]; printf("Entre com a UF:"); fgets(uf, 3, stdin);

int quantidade; printf("Digite a quantidade:"); scanf("%d", &quantidade); getchar();

float valor; printf("Digite o valor:"); scanf("%f", &valor); getchar();

char entrega[2]; printf("Deseja a entrega (S ou N): "); fgets(entrega, sizeof(entrega), stdin); getchar();

float precoInicial = valor*quantidade;

float desconto1=0;

if (quantidade <= 10) { desconto1=0.05 * precoInicial; } else if ( quantidade <= 20) { desconto1=0.10*precoInicial; } else { desconto1=0.15*precoInicial; }

printf("\n%f", precoInicial);

// printf("Valor lido em entrega: %s\n", entrega);

// if (entrega[0] == 'S' || entrega[0] == 's') { // printf("Entrega selecionada.\n"); // } else if (entrega[0] == 'N' || entrega[0] == 'n') { // printf("Entrega não selecionada.\n"); // } else { // printf("Valor inválido para entrega.\n"); // }

return 0; }

