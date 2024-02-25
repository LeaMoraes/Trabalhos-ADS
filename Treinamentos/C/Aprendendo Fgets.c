#include<stdio.h>

main(){

char fala[100];

printf("Escreva uma fala de protagonista:\n");
fgets(fala,sizeof(fala),stdin);

printf("%s",fala);

}
