#include<stdio.h>

main(){



char Escolh;

printf("Coloque uma dessas letras\nA  B  C  D  E  \n");
scanf(" %c",&Escolh);


switch(Escolh){

    case 'A':
        printf("OTIMO");
    break;

    case 'B':
        printf("BOM");
    break;

    case 'C':
        printf("REGULAR");

    break;

    case 'D':
        printf("RUIM");
    break;

    case 'E':
        printf("PESSIMO");
    break;

    default:
        printf("CONCEITO INEXISTENTE");
    break;
}

}
