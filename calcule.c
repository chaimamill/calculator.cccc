#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1, N2;
    char operateur;

    printf(" entrer le numero 1 : ");
    scanf("%d", &N1);
    printf(" entrer le operateur : ");
    scanf("%s", &operateur);
    if (operateur == 'q')
{printf("le programme est arrete ");
exit(0);
}
else
{
printf("entrez Nombre 2:");
scanf("%d", &N2);

    
    switch (operateur)
    {
    case '+' :
        printf("%d",N1 + N2);
        break;

    case '-':
        printf("%d",N1 - N2);
        break;

    case '*':
        printf("%d",N1 * N2);
        break;

    case '/':
        if (N2!= 0)
        {
            printf("%d",N1/N2);
        }
        else
        {
            printf("impossible");}
            break;
    default:
        printf("the program is stopped");
        break;
    }
    }
        return 0;
}

