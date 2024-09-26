#include <stdlib.h>
#include <stdio.h>

int main()
{
    char prenom[30];
    int age;
    printf("Bonjour, quel est votre prenom ???\n");
    scanf("%s",prenom);

    printf("Bonjour %s,quel est votre age ???\n",prenom);
    scanf("%d",&age);

    int anne_f=2024-age;
    int anne_d=anne_f+1;

    printf("%s, si vous êtes de la fin d'année vous avez %d sinon vous avez %d",prenom,anne_f,anne_d);




    return 0;
}