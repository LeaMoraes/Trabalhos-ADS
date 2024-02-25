#include<stdio.h>
main(){
int num1, num2, Escolh, Res;
printf("Coloque Dois Numeros\nNumero um: ");
scanf("%d",&num1);
printf("Numero Dois: ");
scanf("%d",&num2);
printf("Escolha: 1 para Somar, 2 para Subtrair, 3 para Dividir e 4 para Multiplicar\n");
scanf("%d",&Escolh);



if (Escolh==1){
    Res = num1 + num2;
    printf("Resultado: %d",Res);
}else if (Escolh==2){
    Res = num1 - num2;
    printf("Resultado: %d",Res);
}else if (Escolh==3){
    Res = num1 / num2;
    printf("Resultado: %d",Res);
} else if (Escolh==4){
    Res = num1 * num2;
    printf("Resultado: %d",Res);
} else {
printf("porra mas eu te dei a instrucao, 1,2,3 ou 4, e n este numero\n");
scanf("%d",&Escolh);
}

}
