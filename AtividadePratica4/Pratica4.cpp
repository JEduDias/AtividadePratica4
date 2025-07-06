#include <stdio.h>
#include <locale.h>
#include <math.h> 

int main() {
    setlocale(LC_ALL, "Portuguese"); // pra aceitar acentos

    int tipo;
    float comp, larg, area, iluminancia, fluxoTotal, qtdLamp;

    
    printf("Selecione o tipo de cômodo:\n1 - Quarto\n2 - Escritório\n3 - Cozinha\nDigite a opção desejada: ");
	scanf_s("%d", &tipo); // lê tipo de comomo

    printf("Digite o comprimento do cômodo (m): ");
	scanf_s("%f", &comp); // lê comprimento

    printf("Digite a largura do cômodo (m): ");
	scanf_s("%f", &larg); // lê largura


	area = comp * larg; // calcula área

    // define iluminacia conforme tipo
    if (tipo == 1)
        iluminancia = 150;
    else
        iluminancia = 300;

    // calcula  fluxo total necessario
    fluxoTotal = area * iluminancia / 0.8;

    // calcula qtd mínima de lâmpadas
    qtdLamp = ceil(fluxoTotal / 800);

    
	printf("\nTipo de cômodo: "); // exibe tipo de cômodo
    if (tipo == 1)
        printf("Quarto");
    else if (tipo == 2)
        printf("Escritprio");
    else
        printf("Cozinha");

	printf(" (Iluminâacia recomendada: %.0f lux)\n", iluminancia);  // mostra iluminancia recomendada
	printf("Area do comodo: %.2f m²\n", area); // mostra área do cômodo
	printf("Fluxo luminoso total necessario: %.2f lúmens\n", fluxoTotal); // mostra fluxo luminoso total necessário
	printf("Quantidade minima de lampadas recomndadas: %.0f\n", qtdLamp); // mostra quantidade mínima de lâmpadas recomendadas

    return 0;
}
