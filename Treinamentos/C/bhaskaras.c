#include<stdio.h>

main(){
int a,b,c; //colocar as variaveis do que precisa na formula bhaskara
float delta,resultadoMais,resultadoMenos,quadr,raiz,bhask1,bhask2,bhaskDiv;

printf("De um valor para fazer um calculo Bhaskara\nA:");
scanf("%d",&a); //uma coisa que notei, voce s� vai usar o & no scanf, se usar isso no printf, ele vai ficar todo esbugalhadoKKKK tente
printf("B:");
scanf("%d",&b);
printf("C:");
scanf("%d",&c);

quadr=b*b; //aqui seria o B ao quadrado, fiz ele assim porque pensei que poderia dar algum erro
delta=quadr-4*a*c; //aqui sera calculado o delta
printf("%f",delta); //o delta sera entregado para o usuario, pra fazer a raiz quadrada

printf("\nMe fale a raiz quadrada do Delta: "); //nao achei um jeito de fazer a raiz quadrada no C, ent�o deixei para o usuario me entregar a raiz para que a conta continue
scanf("%f",&raiz);// aqui ele digitara a raiz

bhaskDiv=2*a; //simplifiquei a divis�o, pois ela aparece por ultimo na conta bhaskara
bhask1=-b+raiz; //resolvi a conta positiva antes da divis�o do 2*a
bhask2=-b-raiz; //resolvi a conta negativa antes da divis�o do 2*a
resultadoMais = bhask1 / bhaskDiv;//resultadoMais � o resultado quando voce faz o -B+raizquadrada
resultadoMenos = bhask2 / bhaskDiv;//resultadoMenos � o resultado quando voce faz o -B-raizquadrada

printf("O valor do bhaskara positivo e %f \nO valor do bhaskara negativo e %f",resultadoMais,resultadoMenos); // e aqui mostra o resultado Mais e Menos

//algo que n�o entendi, � que os numeros � 0,01 a menos, oq as vezes pode mudar no resultado final, mas nao � nada que possa explodir um predio :D

}
