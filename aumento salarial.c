#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

float salario, percentual, aumento, novoSalario;
int main()
{
    setlocale(LC_ALL, "Portuguese_Breazil");
    printf("insira o seu salario atual:\n");
    scanf("%f", &salario);
    printf("incira o percentual de aumento:\n");
    scanf("%f", &percentual);
    aumento=salario* percentual/100;
    novoSalario=salario+aumento;
    printf("valor do aumento:%.2f\n",aumento);
    printf("valor do novo salario:%.2f\n",novoSalario);
    system("pause");

    return 0;
}
