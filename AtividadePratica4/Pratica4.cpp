#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // para aceitar acentos

    int tipo;
    float comp, larg, area, iluminancia, fluxoTotal, qtdLamp;

    
    printf("Selecione o tipo de cômodo:\n1 - Quarto\n2 - Escritório\n3 - Cozinha\nDigite a opção desejada: ");
    scanf_s("%d", &tipo);//solocita o tipo do comomo

    printf("Digite o comprimento do cômodo (m): ");
	scanf_s("%f", &comp);// solicita o comprimento do cômodo
    printf("Digite a largura do cômodo (m): ");
	scanf_s("%f", &larg);// solicita a largura do cômodo

    // calcula a área
    area = comp * larg;

    // define iluminância conforme tipo
    if (tipo == 1)
        iluminancia = 150;
    else
        iluminancia = 300;

    // calcula fluxo total necessário
    fluxoTotal = area * iluminancia / 0.8;

    // calcula qtd mínima de lâmpadas
    qtdLamp = ceil(fluxoTotal / 800);

    // saída
    printf("\nTipo de cômodo: %d (Iluminância recomendada: %.0f lux)\n", tipo, iluminancia);
    printf("Área do cômodo: %.2f m²\n", area);
    printf("Fluxo luminoso total necessário: %.2f lúmens\n", fluxoTotal);
    printf("Quantidade mínima de lâmpadas recomendadas: %.0f\n", qtdLamp);

    return 0;
}
