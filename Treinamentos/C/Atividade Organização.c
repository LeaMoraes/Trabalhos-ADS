#include <stdio.h>

main() {
    int num1, num2, num3;

    // Leitura dos n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    // Primeira decis�o para comparar num1 e num2
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Segunda decis�o para comparar num2 e num3
    if (num2 < num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // Loop para garantir que num1 seja o maior
    while (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Sa�da dos n�meros ordenados
    printf("Maior: %d\nIntermediario: %d\nMenor: %d\n", num1, num2, num3);

}
