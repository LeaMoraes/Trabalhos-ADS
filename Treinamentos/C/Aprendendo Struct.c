#include<stdio.h>

struct Livro{

    char titulo[100];
    char autor[50];
    int anoPublicacao;
    float preco;

};


main(){
int maxLivros=100,Menu=1,numLivros=0,quantidade=0;
struct Livro listaLivros[maxLivros];

do{
    system("cls");
    printf("Menu dos Livros\n");
    printf("1 - Colocar Novo Livro\n");
    printf("2 - Ver Livros\n");
    printf("0 - Sair\n\n");
    scanf("%d",&Menu);

    switch(Menu){

    case 1:
        system("cls");
        if(numLivros<maxLivros){

        printf("Qual o titulo do seu Livro: ");
        getchar();
        fgets(listaLivros[numLivros].titulo,sizeof(listaLivros[numLivros].titulo),stdin);

        printf("Qual o autor(a) do seu Livro: ");
        fgets(listaLivros[numLivros].autor,sizeof(listaLivros[numLivros].autor),stdin);

        printf("Qual o ano de publicacao do seu Livro: ");
        scanf("%d",&listaLivros[numLivros].anoPublicacao);

        printf("Qual o preco do seu Livro: ");
        scanf("%f",&listaLivros[numLivros].preco);
        system("cls");
        numLivros++;
        printf("Livro Adicionado com sucesso");

        }else{
        printf("Numero de Livros Excedidos");
        }
    break;

    case 2:
        system("cls");
        printf("Lista de Livros\n\n");
        for(quantidade=0;quantidade<numLivros;quantidade++){
            printf("Livro: %s", listaLivros[quantidade].titulo);
            printf("Autor: %s", listaLivros[quantidade].autor);
            printf("Ano de Publicacao: %d\n", listaLivros[quantidade].anoPublicacao);
            printf("Preco: R$ %.2f\n", listaLivros[quantidade].preco);
            printf("------------------------------\n");

        }
        getch();
    break;

    case 0:
    system("cls");
    printf("Finalizando o Sistema!");
    getch();
    break;

    default:
        system("cls");
        printf("Opcao Invalida");
        getch();
    break;
    }

}while(Menu!=0);

}
