#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

float salario, percentual, aumento, novoSalario;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Solicita ao usuário o salário atual
    printf("Insira o seu salario atual:\n");
    scanf("%f", &salario);

    // Solicita ao usuário o percentual de aumento desejado
    printf("Insira o percentual de aumento:\n");
    scanf("%f", &percentual);

    // Calcula o valor do aumento
    aumento = salario * percentual / 100;

    // Calcula o novo salário após o aumento
    novoSalario = salario + aumento;

    // Exibe o valor do aumento e o novo salário na tela printf("Valor do aumento: %.2f\n", aumento);
    printf("Valor do novo salario: %.2f\n", novoSalario);
    // Pausa o programa antes de encerrar (para visualização dos resultados)
    system("pause");
    return 0;
}
