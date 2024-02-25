#include<stdio.h>

main(){

int Jogar=0,Sujo=0,Cabeca=0,Tronco=0,BracoEsquerdo=0,BracoDireito=0,PernaEsquerda=0,PernaDireita=0,Bunda=0,Limpar=0;



do{
printf("Voce quer jogar\n   LIMPAR\n1 - Jogar\n2 - Sair\n\n");
scanf("%d",&Jogar);

    if(Jogar==1){
    Sujo=1;
    }
    if (Sujo==1){

        Cabeca=1;
        Tronco=1;
        BracoEsquerdo=1;
        BracoDireito=1;
        PernaEsquerda=1;
        PernaDireita=1;
        Bunda=1;

        system("cls");
    printf("Voce estava brincando na chuva e acabou se sujando todo");
    getch();
    system("cls");
    printf("Sua mae manda voce ir logo tomar banho, e voce vai como um bom filho");
    getch();

    }
    while(Sujo==1){



    system("cls");
    printf("Voce esta no chuveiro, qual parte quer limpar?:\n");
    printf("1 - Cabeca\n2 - Braco Direito\n3 - Braco Esquerdo\n4 - Tronco\n5 - Perna Direita\n6 - Perna Esquerda\n");
    if(Cabeca==0&&Tronco==0&&BracoDireito==0&&BracoEsquerdo==0&&PernaEsquerda==0&&PernaDireita==0){
            printf("7 - Bunda\n");
    }
    printf("\n");
    scanf("%d",&Limpar);
    switch(Limpar){

    case 1:
        if(Cabeca==1){
            system("cls");
            printf("Voce coloca o shampoo na mao e comeca a esfregar seus cabelos\naté voce sentir o coro meio aspero");
            getch();
            system("cls");
            printf("Depois voce usa seu condicionador, e deixara ele até o final do banho");
            Cabeca=0;
        }else{
        system("cls");
        printf("Voce ja lavou sua cabeca, o seu condicionador ainda permanece em seu cabelo");
        getch();
        }
    break;

    case 2:
        if(BracoDireito==1){
            system("cls");
            printf("Voce pega seu sabonete e começa a esfregar no seu braco direito");
            getch();
            system("cls");
            printf("Voce percebe que seu braco esta enorme, academia e braba");
            getch();
            system("cls");
            printf("Talvez se voce exibisse mais, voce teria uma namorada??");
            getch();
            system("cls");
            printf("Nao, tu viajou demais");
            getch();
            BracoDireito=0;
        }else{
            system("cls");
            printf("Voce ja limpou seu braço direito, tanto que voce olhou seu enorme braco");
            getch();
        }
    break;

    case 3:
        if(BracoEsquerdo==1){
            system("cls");
            printf("Voce pega seu sabonete e começa a esfregar no seu braco esquerdo");
            getch();
            system("cls");
            printf("Enquanto voce esfrega, voce sente uma vontade iminente de socar uma pessoa invisivel");
            getch();
            system("cls");
            printf("Voce fecha seus punhos e comeca a socar o ar");
            getch();
            system("cls");
            printf("Voce desvia F E R O Z M E N T E do soco do rapaz, quase ele te nocauteia");
            getch();
            system("cls");
            printf("Mas voce cai na real, voce passou 5 minutos lutando contra ninguem");
            getch();
            system("cls");
            printf("Voce termina de limpar o braco esquerdo, e guarda o sabonete");
            getch();
            BracoEsquerdo=0;
        }else{
            system("cls");
            printf("Voce ja lavou o braco esquerdo, tanto que voce quase quebrou");
            getch();

        }
    break;

    case 4:
        if(Tronco==1){
            system("cls");
            printf("Voce começa a lavar seu tronco, sem esforço nenhum");
            getch();
            system("cls");
            printf("Mas olha esse ABDOMEM, meu deus, so voce mesmo pra ter");
            getch();
            Tronco=0;
        }else{
            system("cls");
            printf("Tem como esquecer este abdomen??");
            getch();
        }
    break;

    case 5:
        if(PernaDireita==1){
            system("cls");
            printf("Voce comeca a limpar sua perna direita");
            getch();
            system("cls");
            printf("Mas que");
            getch();
            system("cls");
            printf("Vontade de DANCAR");
            getch();
            system("cls");
            printf("E VOCE COMECA: manda varios passos que nem o programador consegue descrever");
            getch();
            system("cls");
            printf("Se voce continuar assim, daqui a dois dias voce ja vira pai");
            getch();
            system("cls");
            printf("Mas depois que o seu pe deu uma escorregada pequena, voce simplismente para\ne continua o que estava fazendo anteriormente");
            getch();
            PernaDireita=0;

        }else{
            system("cls");
            printf("Voce agora esta com medo de escorregar");
            getch();
        }
    break;

    case 6:
        if(PernaEsquerda==1){
            system("cls");
            printf("Voce comeca a limpar sua perna esquerda");
            getch();
            system("cls");
            printf("E foi a coisa mais sem graca que voce ja fez nesse dia");
            getch();
            PernaEsquerda=0;
        }else{
            system("cls");
            printf("Foi uma coisa tao sem graca limpar a perna esquerda, que voce esqueceu que limpou, e limpa denovo");
            getch();
        }
    break;

    case 7:
        if(Cabeca==1||Tronco==1||BracoDireito==1||BracoEsquerdo==1||PernaEsquerda==1||PernaDireita==1){
            system("cls");
            printf("Nao existe este membro");
            getch();
        }else{
            system("cls");
            printf("Voce Limpa sua bunda");
            getch();
            system("cls");
            printf("e so");
            getch();
            Bunda=0;
        }
    break;

    }

    if(Cabeca==0&&Tronco==0&&BracoDireito==0&&BracoEsquerdo==0&&PernaEsquerda==0&&PernaDireita==0&&Bunda==0){
            system("cls");
            printf("Voce esta livre");
            getch();
            system("cls");
            printf("Voce desliga o chuveiro e sente aquele prazer");
            getch();
            system("cls");
            printf("Agora voce esta LIMPO");
            getch();
            system("cls");
            printf("Sua mae te chama para ir no mercado, e ela compra salgadinhos para voce");
            getch();
            system("cls");
            printf("Nao so isso, ela leva tambem uma barra de chocolate");
            getch();
            system("cls");
            printf("Mas infelizmente acontece imprevistos");
            getch();
            system("cls");
            printf("Na volta de casa tinha uma poca de agua");
            getch();
            system("cls");
            printf("E quando voce chega do lado");
            getch();
            system("cls");
            printf("Um carro passa");
            getch();
            system("cls");
            printf("E TE MOLHA TODO");
            getch();
            system("cls");
            printf("VOCE TINHA ACABADO DE TOMAR BANHO");
            getch();
            Sujo=0;
            system("cls");
    }

    }

}while(Jogar==1);

}
