#include <stdio.h>

int main() {
    long num1, num2;
    int n;

    printf("Digite dois numeros: ");
    scanf("%ld %ld", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Por favor, somente numeros positivos.\n");
        return 1;
    }

    long a = num1, b = num2, resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    long mdc = a;
    
    long mmc = (num1 / mdc) * num2;

    printf("\nMDC: %ld\n", mdc);
    printf("MMC: %ld\n", mmc);

    printf("\nDigite o N para tabela Zn: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Use um numero ate 20.\n");
        return 1;
    }

    int tabela[20][20];
    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            tabela[linha][coluna] = (linha + coluna) % n;
        }
    }

    printf("\nTabela de Adicao Z_%d\n", n);
    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            printf("%2d ", tabela[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}