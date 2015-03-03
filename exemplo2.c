#include <stdio.h>

/*
 * Apresentação da função SYSTEM;
 */

int main()
{
    int op;
    system("color 3d");
    puts("Favor digitar um numero: ");
    scanf("%d", &op);
    puts("O respectivo endereco da memoria: ");
    printf("%u", &op);
    system("PAUSE");
    return 0;
};
