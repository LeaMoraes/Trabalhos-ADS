#include<stdio.h>
#include<string.h>
#include <time.h>
#include <ctype.h>

struct Ingressos{

 int InteirasCompradas;
 int MeiasCompradas;
 int IsentosCompradas;
 float ValorTotal;
 char TipoPagamento[20];

};


main(){

int Menu=1,IngresMeia=0,IngresTipo,EstRA,IdosAno,IdosMes,IdosDia,dataValida,Idade; //Cargos da Meia
char EstNome[50],CPF[12]; //Cargos da Meia

int FormPag,Pagamento=0; //Preços e Valores
float Inteira=5.00,Meia=2.50,ValorMeia,ValorInteira,Preco=0.0,Isento=0.00,ValorIsento; //Preços e Valores

int IngresRemov,IngresQuant,IngresRetirar; //Na escolha de Quantidade de Ingressos

int InteiraTotal=0,MeiaTotal=0,IsentoTotal=0,IngresVendido; //Para o Relatorio
float Ganho=0; //Para Relatorio

int maxIngressos=100,numVendas=0,quantidadeVendas=0; //Lista de Vendas

struct Ingressos ListaVendas[maxIngressos];

do{


    system("cls");
    printf("-----------------------------------\n");
    printf("       Venda de Ingressos\n");
    printf("-----------------------------------\n\n");
    printf("1 - Nova Venda\n");
    printf("2 - Lista de Vendas\n");
    printf("3 - Relatorio\n");
    printf("0 - Sair\n\n");
    scanf("%d",&Menu);

    switch(Menu){

    case 1:

    //Reiniciara as variaveis para que não atrapalhe a proxima venda
    Pagamento=0;
    Preco=0.00;
    ValorInteira=0.00;
    ValorMeia=0.00;
    ValorIsento=0.00;
    dataValida = 0;
    ListaVendas[numVendas].InteirasCompradas=0;
    ListaVendas[numVendas].MeiasCompradas=0;
    ListaVendas[numVendas].IsentosCompradas=0;
    ListaVendas[numVendas].ValorTotal=0.00;
    //Reiniciara as variaveis para que não atrapalhe a proxima venda


        system("cls");
        printf("Insira quantos ingressos voce quer: ");
        scanf("%d",&IngresQuant);//Contara as quantidades de Ingressos Desejados
        IngresVendido+=IngresQuant;//Adicionara Quantos Ingressos foram comprados

            while(IngresQuant>0){
                system("cls");
                printf("Tipos de Ingressos:\n");
                printf("+-------------------------------------------------------------------+----------+\n");
                printf("| 1 - Inteira                                                       |  R$5,00  |\n");
                printf("| 2 - Meia                                                          |  R$2,50  |\n");
                printf("| 3 - Isento (Professores, Idosos)|  R$0,00  |\n");
                printf("+-------------------------------------------------------------------+----------+\n\n");
                printf("Quantas inteiras voce quer? (De 0 ate %d)\n",IngresQuant);
                scanf("%d",&IngresRemov);//Guardara a quantidade de inteiras selecionadas

                if (IngresRemov > IngresQuant) {
                    printf("Quantidade de Inteiras excede o limite disponivel.\n");//Se tentar remover mais do que foi pedido, ele avisara e voltara para a seleção
                    getch();
                    continue;
                }
                InteiraTotal+=IngresRemov;//Ira adicionar quantas inteiras foram compradas no total
                ListaVendas[numVendas].InteirasCompradas+=IngresRemov;//Ira adicionar quantas inteiras foram compradas nesta compra
                ValorInteira+=Inteira*IngresRemov;//Vai calcular o preço, (5,0 vezes a quantidade que foi selecionada)
                IngresQuant-=IngresRemov;//Ira retirar a quantidade selecionada de inteiras

                    if (!IngresQuant<=0){
                        printf("Quantas Meias voce quer? (De 0 ate %d)\n",IngresQuant);
                        scanf("%d",&IngresRemov);//Guardara a quantidade de meias selecionadas

                        if (IngresRemov > IngresQuant) {
                            printf("Quantidade de Meias excede o limite disponivel.\n");//Se tentar remover mais do que foi pedido, ele avisara e voltara para a seleção
                            getch();
                            continue;
                        }
                        MeiaTotal+=IngresRemov;//Ira adicionar quantas meias foram compradas no total
                        ListaVendas[numVendas].MeiasCompradas+=IngresRemov;//Ira adicionar quantas meias foram compradas nesta compra
                        ValorMeia=Meia*IngresRemov;//Vai calcular o preço, (2,5 vezes a quantidade que foi selecionada)
                        IngresMeia+=IngresRemov;//Ira colocar a quantidade de Meias, para depois selecionar o cargo
                        IngresQuant-=IngresRemov;//Ira retirar a quantidade selecionada de meias

                        if (!IngresQuant<=0){
                            printf("Quantos Isentos voce quer? (De 0 ate %d)\n",IngresQuant);
                            scanf("%d",&IngresRemov);//Guardara a quantidade de isentos selecionadas

                            if (IngresRemov > IngresQuant) {
                                printf("Quantidade de Isentos excede o limite disponivel.\n");//Se tentar remover mais do que foi pedido, ele avisara e voltara para a seleção
                                getch();
                                continue;
                            }

                        IsentoTotal+=IngresRemov;//Ira adicionar quantos isentos foram comprados no total
                        ListaVendas[numVendas].IsentosCompradas+=IngresRemov;//Ira adicionar quantas meias foram compradas nesta compra
                        ValorIsento=Isento*IngresRemov;//Vai calcular o preço, (0,0 vezes a quantidade que foi selecionada)
                        IngresQuant-=IngresRemov;//Ira retirar a quantidade selecionada de Isentos

                            if (IngresQuant>0){
                                printf("Sobrou tickets, voce quer retirar estes ou ou revisar?\n1 - Para Retirar\n2 - Para Revisar\n\n");//Se sobrar ingressos para selecionar, ele ira perguntar se deseja retirar ou revisar
                                scanf("%d",&IngresRetirar);

                                if(IngresRetirar==1){
                                    IngresVendido-=IngresQuant;//Retira os ingressos que sobraram do total vendido
                                    IngresQuant-=IngresQuant;//Limpara a variavel para que não repita o processo de seleção de ingressos
                                }


                            }

                        }
                    }
            }



            while (IngresMeia>=1){

                    //Caso tenha 1 ou mais ingressos Meias, perguntara qual cargo deseja selecionar
                    system("cls");
                    printf("Temos %d Meia(s), selecione uma dessas opcoes e coloque informacoes para cada Ingresso\n\n1 - Para Jovem de Baixa Renda\n2 - Para Estudante\n3 - Para Professor\n4 - Para Idoso\n5 - Para Pessoa com Necessidades Especiais\n\n",IngresMeia);
                    scanf("%d",&IngresTipo);

                    switch(IngresTipo){

                    case 1:
                    system("cls");
                    printf("Jovem de Baixa Renda: \n");
                    printf("Para que o jovem de baixa renda possa ser beneficiario do Programa, e necessario atender\naos seguintes requisitos:\n\n");
                    printf("jovem de baixa renda com idade entre 15 e 29 anos\nrenda familiar mensal de ate dois salarios minimos\nestar inscrito no Cadastro Unico para Programas Sociais do Governo Federal (CadUnico)\ne com o cadastro atualizado nos ultimos 24 meses\n\n");
                    printf("Peca para o Cliente a Carteira de Identidade Jovem emitida pela Secretaria Nacional de Juventude\nacompanhada de documento de identidade oficial com foto\n");
                    printf("CPF (somente numero): ");
                    scanf("%s",&CPF);//Perguntara o CPF, mas não ira usar a variavel para nada
                    IngresMeia-=1;//Ira retirar uma meia, pois ja foi selecionada

                    break;

                    case 2:
                    system("cls");
                    printf("Estudante: \n");
                    printf("Pede pela carteirinha do Estudante\nEm seguida, escreve o Nome e o Ra do estudante\n");
                    printf("Nome: ");
                    scanf(" %[^\n]", EstNome);//Cliente Dar seu Nome
                    printf("Ra: ");
                    scanf("%d",&EstRA); //Cliente dar seu RA
                    IngresMeia-=1;//Ira retirar uma meia, pois ja foi selecionada
                    break;

                    case 3:
                    system("cls");
                    printf("Professor: \n");
                    printf("Peca ao Cliente apresentar uma Carteira funcional emitida pela Secretaria Municipal de Educacao de Sao Paulo\nou holerite acompanhado de documento oficial com foto\n");
                    printf("CPF (somente numero): ");
                    scanf("%s",&CPF);//Perguntara o CPF, mas não ira usar a variavel para nada
                    IngresMeia-=1;//Ira retirar uma meia, pois ja foi selecionada
                    break;

                    case 4:
                    dataValida=0;
                    system("cls");
                    printf("Idoso: \n");
                    printf("Peca ao Cliente o documento de identidade oficial com foto, e verifique a data de nascimento\n");
                        while (dataValida!=1){
                            //Enquanto a data não for valida, não continuara o programa
                            printf("Ano de Nascimento: ");
                            scanf("%d", &IdosAno);
                            //Se o ano for maior que 2023, sistema dara a mensagem de invalido, e voltara no inicio
                            if (IdosAno > 2023) {
                                printf("Ano de nascimento invalido. Tente novamente.\n");
                                getch();
                                continue;
                            }

                            printf("Mes de Nascimento: ");
                            scanf("%d", &IdosMes);

                            //Se o mes for menor que 1 ou maior que 12, sistema dara a mensagem de invalido e voltara no inicio
                            if (IdosMes < 1 || IdosMes > 12) {
                                printf("Mes de nascimento invalido. Tente novamente.\n");
                                getch();
                                continue;
                            }

                            //Ira calcular a idade do idoso
                            Idade=2023-IdosAno;
                            //Caso a idade seja menor que 60, ira dara uma mensagem de erro e perguntara novamente
                            if (Idade < 60) {
                                printf("O cliente deve ter pelo menos 60 anos. Tente novamente.\n");
                                getch();
                                dataValida=1;

                            } else {
                                dataValida = 1;
                                printf("CPF (somente numero): ");
                                scanf("%s",&CPF);//Perguntara o CPF, mas não ira usar a variavel para nada

                                IngresMeia-=1;//Ira retirar uma meia, pois ja foi selecionada
                            }
                        }

                    break;

                    case 5:
                    system("cls");
                    printf("Pessoa com Necessidades Especiais: \n");
                    printf("Peca para o cliente apresentar o cartao\n");
                    printf("de beneficio de prestacao continuada de assistencia social\n");
                    printf("ou o documento emitido pela INSS\n");
                    printf("CPF (somente numero): ");
                    scanf("%s",&CPF);//Perguntara o CPF, mas não ira usar a variavel para nada
                    IngresMeia-=1;//Ira retirar uma meia, pois ja foi selecionada
                    break;

                    default:
                    printf("Parece que a opcao de meias que voce escolheu nao e valida. Tente novamente\n");
                    getch();//Quando houver uma seleção errada, ele voltara no menu sem modificações
                    break;
                    }


            }

        Preco=ValorInteira+ValorMeia+ValorIsento;//Juntara o valor dos ingressos inteiros,meios e isentos
        Ganho+=Preco;//Adicionara no ganho total
        ListaVendas[numVendas].ValorTotal+=Preco;//Registrara o valor da compra na lista de vendas

            while(Pagamento==0){
                //Enquanto o pagamento for 0, não continuara
                system("cls");
                printf("Total a Pagar: %.2f\n\n",Preco);
                printf("Escolha uma forma de pagamento\n1 - Para Dinheiro\n2 - Para Credito\n3 - Para Debito\n4 - Para Pix\n\n");
                scanf("%d",&FormPag);//seleção de pagamento

                switch(FormPag){

                case 1:
                system("cls");
                printf("Entregue o dinheiro para o Caixa\n");
                getch();
                Pagamento = 1;
                strcpy(ListaVendas[numVendas].TipoPagamento, "Dinheiro");//Registrara a forma de pagamento na lista de vendas
                break;

                case 2:
                system("cls");
                printf("Passe o cartao na maquina\n");
                getch();
                Pagamento = 1;
                strcpy(ListaVendas[numVendas].TipoPagamento, "Credito");//Registrara a forma de pagamento na lista de vendas
                break;

                case 3:
                system("cls");
                printf("Passe o cartao na maquina\n");
                getch();
                Pagamento = 1;
                strcpy(ListaVendas[numVendas].TipoPagamento, "Debito");//Registrara a forma de pagamento na lista de vendas
                break;

                case 4:
                system("cls");
                printf("Escaneie o codigo QR\n");
                getch();
                Pagamento = 1;
                strcpy(ListaVendas[numVendas].TipoPagamento, "Pix");//Registrara a forma de pagamento na lista de vendas
                break;

                default:
                system("cls");
                printf("Opcao de pagamento invalida. Selecione uma forma de pagamento valida\n");
                getch();
                break;

                }
            }
            system("cls");
            printf("Pagamento feito com exito, obrigado pela sua compra\n\n-----------------------------------------------------------------------\n\n");
            getch();
            numVendas++;//Registrara a compra inteira em um valor de variavel


    break;

    case 2:
    system("cls");
    printf("                           LISTA DE VENDAS\n");
    printf("--------------------------------------------------------------------------\n");
    printf("| %-5s | %-8s | %-5s | %-7s | %-11s | %-18s |\n","Venda", "Inteiras", "Meias", "Isentos", "Valor Total", "Forma de Pagamento");
    printf("|-------|----------|-------|---------|-------------|--------------------|\n");
    for(quantidadeVendas=0;quantidadeVendas<numVendas;quantidadeVendas++){
    printf("| %-5d | %-8d | %-5d | %-7d | %-11.2f | %-18s |\n",quantidadeVendas+1,ListaVendas[quantidadeVendas].InteirasCompradas,ListaVendas[quantidadeVendas].MeiasCompradas,ListaVendas[quantidadeVendas].IsentosCompradas,ListaVendas[quantidadeVendas].ValorTotal,ListaVendas[quantidadeVendas].TipoPagamento);
    printf("|-------|----------|-------|---------|-------------|--------------------|\n");
    }


    getch();
    break;

    case 3:
        system("cls");
        printf("------------------------------------------------------------\n");
        printf("                    RELATORIO DE VENDAS\n");
        printf("------------------------------------------------------------\n");
        printf("Total de Vendas de Ingresso        | %d\n",IngresVendido);
        printf("Ingressos Inteiros Vendidos R$5,00 | %d\n",InteiraTotal);
        printf("Ingressos Meios Vendidos    R$2,50 | %d\n",MeiaTotal);
        printf("Ingressos Insentos Vendidos R$0,00 | %d\n",IsentoTotal);
        printf("Total de Ganhos                    | R$%.2f\n",Ganho);
        printf("------------------------------------------------------------\n");
        getch();
    break;

    case 0:
    system("cls");
    printf("Finalizando o Programa");
    getch();
    break;

    default:
    system("cls");
    printf("Opcao invalida!");
    getch();
    break;
    }

}while(Menu != 0);

}
