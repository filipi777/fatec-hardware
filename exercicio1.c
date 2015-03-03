
#include <stdio.h>

/*
 * Mostrando endereço de memória;
 */

int main()
{
    int op;
    puts("Favor digitar um numero: ");
    scanf("%d", &op);
    puts("O respectivo endereco da memoria: ");
    printf("%u", &op);
    system("PAUSE");
    return 0;
};