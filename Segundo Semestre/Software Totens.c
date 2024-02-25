#include <stdio.h>

main(){

int menu=1, qdr, pergunta1,pergunta2, selQuadr, Quadr1=0, Quadr2=0, Quadr3=0, Quadr4=0, Quadr5=0, Quadr6=0, Quadr7=0, Quadr8=0, Quadr9=0, Quadr10=0, Quadr11=0, Quadr12=0, Quadr13=0, Quadr14=0, Quadr15=0, Quadr16=0, Pessimo=0,Ruim=0,Ok=0,Bom=0,Perfeito=0,Comprariam=0,NaoComprariam=0;
do{
    system("cls");//Quando Voltar ao menu, ele ira limpar a tela, e não deixara os textos grudados
    printf("Selecione o quadro da exposicao \n");
    printf("\n1 - Primeira Aquarela Abstrata (1910)");
    printf("\n2 - Amarelo, Vermelho, Azul (1925)");
    printf("\n3 - Composicao IV(1911)");
    printf("\n4 - Moscow (1916)");
    printf("\n5 - Composition in Color a (1917)");
    printf("\n6 - Victory Boogie-Woogie (1944)");
    printf("\n7 - Composition Witch Oval in Color Planes II(1914)");
    printf("\n8 - Composition (1918)");
    printf("\n9 - Southen (tunisian) Gardens (1919)");
    printf("\n10 - Flora On Sand (1927)");
    printf("\n11 - New Harmony (1936)");
    printf("\n12 - Ashevile (1948)");
    printf("\n13 - Woman (1949)");
    printf("\n14 - The Visit (1967)");
    printf("\n15 - Merritt Parkway (1959)");
    printf("\n16 - Simultaneous Windows (2nd Motif, 1st Part)\n\n");
    scanf("%d", &selQuadr);//ira perguntar qual é o quadro para aparecer a descrição
    switch(selQuadr) {
        case 1:
            Quadr1=1;//iniciara o loop do quadro
            while(Quadr1==1){
                system("cls");//limpara a tela
                printf("Primeira Aquarela Abstrata foi um ponto de viragem, um divisor de aguas\n"
                       "nao so na carreira de Kandinsky, mas tambem na propria Historia da Arte.\n"
                       "Ate esse momento, o pintor estava criando telas com paisagens cada vez menos representativas.\n"
                       "Na sequencia dos seus estudos sobre a criacao artistica, em 1910, surgiu Primeira Aquarela Abstrata,\n"
                       "quadro que e apontado como sendo a pintura que inaugurou o abstracionismo na arte ocidental.\n"
                       "Contudo, existem duvidas acerca da sua data, ja que alguns estudiosos afirmam que a obra e de 1913.\n"
                       "A partir deste ponto, o pintor russo se dedicou as telas atravessadas por linhas e cores,\n"
                       "produzindo arte nao figurativa, ou seja, aquela na qual nao conseguimos reconhecer elementos da nossa realidade.\n");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr1=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){

                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }

        break;

        case 2:
           Quadr2=1;//iniciara o loop do quadro
            while(Quadr2==1){
                system("cls");//limpara a tela
                printf("Amarelo, Vermelho, Azul e uma pintura de Wassily Kandinsky e pertence ao abstracionismo\n"
                       "movimento iniciado por ele no inicio do seculo XX.\n"
                       "Considerada sua obra prima, Kandinsky mescla as cores primarias de amarelo, vermelho e azul em complexas\n"
                       "nuvens de cor, que se sobrepoem e se cruzam sem um padrao, e nao formam objetos claramente identificaveis.\n"
                       "Em muitos aspectos, essa liberdade de movimento foi uma sintese dos muitos novos movimentos artisticos\n"
                       "em erupcao na decada de 1920.\n"
                       "Movimentos como o Suprematismo Russo e a escola alema Bauhaus foram revolucionarios\n"
                       "cativando o mundo artistico com suas destemidas composicoes abstratas.\n"
                       "No entanto, isso nao quer dizer que ele tenha apenas retirado fragmentos de ideias de seus contemporaneos\n"
                       "para criar essa bela obra. O artista era um inovador por si so e, de fato, pretendia fazer algo absolutamente unico.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr2=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }

        break;

        case 3:
            Quadr3=1;//iniciara o loop do quadro
            while(Quadr3==1){
                system("cls");//limpara a tela
                printf("Uma historia interessante que indica Kandinsky's exame intelectual na criacao de suas obras gira\n"
                       "em torno dessa composicao.\n"
                       "Ele ficou exausto durante os meses de estudo que estudou em preparacao para esta pintura, e decidiu dar um passeio.\n"
                       "O assistente dele na epoca, gabrielle munter, que estava arrumando o estudio no artist's ausencia, inadvertidamente\n"
                       "virou a tela de lado.\n"
                       "Apos Kandinsky's retorna, ele viu a tela, caiu de joelhos e comecou a chorar com a beleza da pintura.\n"
                       "Sua perspectiva recem-encontrada sobre a peca mudaria sua visao artistica e direcao pelo resto de sua vida.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr3=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }

        break;

        case 4:
            Quadr4=1;//iniciara o loop do quadro
            while(Quadr4==1){
                system("cls");//limpara a tela
                printf("Nessa pintura, Kandinsky criou uma imagem do centro de Moscou, uma de suas cidades favoritas.\n"
                       "Em parte, usando um metodo futurista para transmitir o movimento das formas\nele criou uma especie de curva no meio da Praca Vermelha, mostrando seus principais monumentos.\n"
                       "Kandinsky expressou seu desejo de pintar um retrato de Moscou em  uma carta a sua companheira, Gabriele Munter.\n"
                       "Embora ele continuasse a refinar sua abstracao, ele capturou o espirito da cidade.\n"
                       "Kandinsky pintou os pontos de referencia de forma circular como se ele estivesse no centro da Praca Vermelha\n"
                       "que virou um circulo com todos os monumentos girando sobre ele.\n"
                       "Embora se referindo ao mundo exterior nesta pintura, ele manteve seu compromisso com a sinestesia de cor\n"
                       "som e expressao espiritual na arte.\n"
                       "Kandinsky escreveu que ele amava particularmente o por-do-sol em Moscou\n"
                       "porque era 'o acorde final de uma sinfonia que desenvolve em cada tom uma\n"
                       "vida que forca toda Moscou a ressoar como o fortissimo de uma enorme orquestra'.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr4=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }


        break;

        case 5:
            Quadr5=1;//iniciara o loop do quadro
            while(Quadr5==1){
                system("cls");//limpara a tela
                printf("Composition in colour A e um estudo rumo a esse 'neo-plasticismo puro'.\n"
                       "As cores neste trabalho sao uma versao suave das cores primarias: vermelho rosa escuro, azul profundo e ocre escuro.\n"
                       "As areas coloridas claramente delineadas estao ligadas de todas as maneiras possiveis\n"
                       "juntamente com um ou mais fragmentos de linhas pretas.\n"
                       "As vezes eles sao colocados  lado a lado, as vezes sobrepostos, sem nenhum sistema obvio.\n"
                       "O resultado e que os diferentes elementos parecem flutuar  num espaco indefinivel.\n"
                       "O branco nao e um fundo neutro, mas sim um componente vivo da pintura.\n"
                       "E tanto uma forma quanto as superficies e as linhas.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr5=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }

        break;

        case 6:
            Quadr6=1;//iniciara o loop do quadro
            while(Quadr6==1){
                system("cls");//limpara a tela
                printf("Victory Boogie-Woogie, pintura que Mondrian concebeu na expectativa da vitoria na Segunda Guerra Mundial\n"
                       "e que permaneceu inacabada devido a sua morte em 1 de fevereiro de 1944\n"
                       "acrescenta imensamente as inovacoes de seu periodo americano.\n"
                       "Mesmo semiacabada, a pintura apresenta um enorme enriquecimento em relacao ao desenho de 1943 contendo um primeiro \n"
                       "desenho para a obra.\n"
                       "E notavel ver como Mondrian, ja com mais de setenta anos, era capaz de uma vivacidade\n"
                       "uma receptividade a novas impressoes, uma flexibilidade ao lidar com\n"
                       "a sua propria abordagem - tudo isto em aguda contradicao com a reputacao de dogmatismo\n"
                       "que o rodeava e que ele proprio tinha.\n"
                       "Promovido nos anos posteriores a 1925, em sua controversia dialetica com Theo van Doesburg.\n"
                       "Modrian nao era doutrinario em nenhum sentido do termo, mas foi constantemente mais longe no seu proprio caminho\n"
                       "e as mudancas que ocorreram no seu trabalho nao foram desvios de uma politica dogmatica\n"
                       "mas consequencias das percepcoes e experiencias derivadas dos seus olhos e seu 'pensar com os olhos'\n"
                       "como disse Paul Cezanne.\n"
                       "Victory Boogie-Woogie e um exemplo fascinante e convincente deste desenvolvimento.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr6=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }

        break;

        case 7:
            Quadr7=1;//iniciara o loop do quadro
            while(Quadr7==1){
                system("cls");//limpara a tela
                printf("A mudanca total no esquema de cores e o aspecto digno de nota desta composicao, que foi executada apenas seis meses \n"
                       "depois da Composicao Oval (Arvores) e tambem esta inscrita em forma oval.\n"
                       "A tela de 1913 apresenta nuances de ocre, amarelo e marrom, com alguns toques de azul acinzentado como contraste;\n"
                       "A obra aqui reproduzida e pintada numa triade  de cores que em ultima analise se reduz as tres primarias\n"
                       "vermelho, amarelo, azul.\n"
                       "Ao avaliar esta mudanca, e bom ter em mente que os mestres originais do cubismo, Pablo Picasso e Georges Braque\n"
                       "tinham acabado de trazer de volta a cor as suas pinturas em 1913, reintroduzindo-a em analogia com as suas experiencias com pedacos de papel colorido nas suas pinturas, colagens.\n"
                       "Esta segunda fase ou fase sintetica do cubismo, em que desapareceram o tratamento pictorico e a pincelada livre\n"
                       "teve forte influencia em Mondrian, como se pode verificar numa obra como a Composicao Oval de 1913/14.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr7=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }
        break;

        case 8:
            Quadr8=1;//iniciara o loop do quadro
            while(Quadr8==1){
                system("cls");//limpara a tela
                printf("Van der Leck comecou a pintar composicoes completamente abstratas apos conhecer Piet Mondrian em 1916.\n"
                       "No ano seguinte, tornou-se cofundador da De Stijl, a revista holandesa que promovia uma arte abstrata\n"
                       "altamente geometrica ligada a ideias espirituais e utopicas.\n"
                       "No entanto, ele logo se desentendeu com Mondrian e outros artistas do De Stijl\ne comecou a incluir elementos figurativos em seu trabalho mais uma vez.\n"
                       "Este pode ser um dos seus poucos trabalhos totalmente abstratos, embora seja possivel que nos seus\n"
                       "estagios iniciais a composicao tenha derivado de uma imagem reconhecivel, como um vaso de flores.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr8=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }

        break;

        case 9:
            Quadr9=1;//iniciara o loop do quadro
            while(Quadr9==1){
                system("cls");//limpara a tela
                printf("Sua pintura unica chamada 'Southern Gardens' foi criada em 1919.\n"
                       "Ele sempre se orgulhou de usar materiais do dia a dia, como estopa, papel e papelao.\n"
                       "Klee criou esta bela obra de arte usando uma de suas muitas tecnicas de pinceladas, manchas e manchas.\n"
                       "Os proprios metodos de Klee eram contemporaneos e reprovados pelos de mentalidade mais tradicional.\n"
                       "O uso de cores terrosas, ousadas e brilhantes realmente fazem com que esta peca se destaque das demais de sua colecao.\n"
                       "Seu estilo da vida a uma paisagem exotica e cria uma criacao na qual simplesmente nos aprofundaremos e nos perderemos.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr9=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }

        break;

        case 10:
             Quadr10=1;//iniciara o loop do quadro
            while(Quadr10==1){
                system("cls");//limpara a tela
                printf("Aquarela abstrata que representa as principais influencias de Klee no cubismo\n"
                       "no expressionismo e no seu interesse pela arte infantil.\n"
                       "Os quadrados dramaticos refletem ate que ponto Klee havia dominado a teoria das cores nesta epoca, tendo explorado \n"
                       "extensivamente o topico em seus escritos e ensinamentos.\n"
                       "Ele disse 'A cor e eu somos um', apos a sua descoberta em 1914\n"
                       "depois de ter sido inspirado pela luz na sua visita a Tunisia.\n"
                       "A relacao entre o uso da cor e da forma e simbolica aqui.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr10=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }


        break;

        case 11:
             Quadr11=1;//iniciara o loop do quadro
            while(Quadr11==1){
                system("cls");//limpara a tela
                printf("New Harmony: Abstracao entre as Guerras, 1919 - 1939 explora uma faceta particularmente rica da colecao\ndo seculo XX do Guggenheim, celebrando as tendencias espirituosas da abstracao\nadotadas pelos artistas internacionais que trabalharam na Europa entre as Guerras Mundiais.\n"
                       "A exposicao - intitulada para uma pintura de geometria utopica de Paul Klee de 1936 \n"
                       "que reflete o interesse do artista na teoria da cor e na composicao musical - apresenta 40 pinturas, esculturas e \n"
                       "trabalhos em papel de cerca de 20 artistas, incluindo Alexander Calder, Alberto Giacometti, Fernand Leger, Francis \n"
                       "Picabia e Joaquin Torres-Garcia.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr11=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }


        break;

        case 12:
             Quadr12=1;//iniciara o loop do quadro
            while(Quadr12==1){
                system("cls");//limpara a tela
                printf("Asheville, de Willem Kooning, leva o nome da cidade da Carolina do Norte, perto do Black Mountain College\n"
                       "onde de Kooning lecionou no verao de 1948.\n"
                       "Uma obra pequena, mas extremamente complexa, que reune numerosas alusoes, muitas vezes obliquas\n"
                       "incluindo referencias a faculdade e secoes que lembre-se do treinamento inicial de De Kooning em artesanato \n"
                       "como marmoreio, madeira e letras.\n"
                       "As obras de De Kooning muitas vezes confundem as distincoes entre desenhos, estudos e pinturas.\n"
                       "Em vez da  tradicional progressao academica do estudo ate a pintura final, de Kooning\n"
                       "cria um fluxo constante e uma troca de ideias e formas em  diferentes midias.\n"
                       "Quatro outras versoes de Asheville mostram formas semelhantes as encontradas na pintura da Colecao Phillips\n"
                       "sugerindo que de Kooning refinou conscientemente as formas aparentemente aleatorias da pintura de Phillips \n"
                       "atraves de suas manipulacoes de forma nas obras relacionadas.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr12=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }
        break;

        case 13:
             Quadr13=1;//iniciara o loop do quadro
            while(Quadr13==1){
                system("cls");//limpara a tela
                printf("Resultado de um prolongado periodo de trabalho que envolveu a criacao e destruicao de muitas outras versoes possiveis\n"
                       "Woman I parece estar suspenso num estado de desenvolvimento interrompido.\n"
                       "O efeito foi deliberado: ao longo de sua carreira, de Kooning valorizou a experimentacao\n"
                       "a edicao e os testes. Para esse fim, ele empregou uma variedade de tecnicas\ndesde cortar, mascarar e colar ate raspar, limpar e borrar.\n"
                       "Embora tambem produzisse esboços individuais, os  verdadeiros esbocos aconteciam em suas telas.\n"
                       "No entanto, isto por si so nao explica a qualidade inacabada da sua pintura acabada.\n"
                       "A pincelada propositalmente fluida e indisciplinada de De Kooning e sua tendencia de desconsiderar\n"
                       "as linhas de contorno produzem um caos visual que sugere incompletude, seja espacial, fisica ou tecnica.\n"
                       "'Eu me abstenho de terminar', disse o artista em 1958.\n"
                       "Ele elaborou em 1960: 'Nunca me interessei... [em] como fazer uma boa pintura....  \n"
                       "Eu nao queria definir de jeito nenhum.'");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr13=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }

        break;

        case 14:
             Quadr14=1;//iniciara o loop do quadro
            while(Quadr14==1){
                system("cls");//limpara a tela
                printf("O estilo ousado e expressivo de De Kooning, com suas grossas pinceladas gestuais\n"
                       "fez com que ele fosse frequentemente classificado como um expressionista abstrato.\n"
                       "No entanto, as suas pinturas incluem frequentemente figuras reconheciveis, mesmo que sejam pouco discerniveis.\n"
                       "A figura central de A Visita e uma mulher com as pernas abertas.\n"
                       "No canto direito  ha uma forma que pode ser a mao estendida da mulher ou um rosto de perfil olhando para ela.\n"
                       "O titulo foi sugerido por um dos assistentes de De Kooning\n"
                       "que achou que a composicao lembrava uma pintura medieval da Anunciacao.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr14=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }


        break;

        case 15:
             Quadr15=1;//iniciara o loop do quadro
            while(Quadr15==1){
                system("cls");//limpara a tela
                printf("Ao contrario dos seus contemporaneos Jackson Pollock e Mark Rothko, as pinturas de De Kooning referem-se a formas \n"
                       "naturais e lugares ou eventos especificos, empurrados para a pura abstracao pela sua confiança na cor e na profunda \n"
                       "acumulacao de tinta para criar forma.\n"
                       "Profundidade e perspectiva estao subordinadas aos efeitos achatadores de suas pinceladas violentas e cortantes.\n"
                       "Algumas das 'paisagens abstratas' de 1957 a 1963 sao baseadas na paisagem ao redor de Long Island Sound\n"
                       "incluindo Merritt Parkway, uma rodovia local.\n"
                       "A velocidade e sugerida pelos movimentos controlados do pincel, enquanto a paleta naturalista transmite o cruzamento da estrada pela paisagem.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr15=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
               if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }

        break;

        case 16:
             Quadr16=1;//iniciara o loop do quadro
            while(Quadr16==1){
                system("cls");//limpara a tela
                printf("As Simultaneos Windows sobre a Cidade, de Robert Delaunay, sao enigmaticas.\n"
                       "Onde e a cidade? Onde estão as janelas?\n"
                       "A primeira vista (e possivelmente a segunda e terceira) o que vemos e um padrao fraturado de planos predominantemente \n"
                       "retangulares pintados nas cores do espectro sobre uma tela e sua moldura de madeira.\n"
                       "Se considerarmos a concepcao ocidental pos-renascentista de uma pintura como sendo semelhante a uma janela\n"
                       "entao poderemos interpretar a moldura pintada como uma moldura de janela e a tela interior como representando\n"
                       "a cidade, mas isso pouco nos ajuda a ver uma cidade retratada em a pintura.");
                printf("\n\nOque voce achou do quadro?\n1 - Pessimo\n2 - Ruim\n3 - Ok\n4 - Bom\n5 - Perfeito \n\nResposta:");//Pergunta do quadro
                scanf("%d",&pergunta1);//Resposta da primeira pergunta
                switch(pergunta1){

                    case 1:
                        Pessimo+=1;
                    break;

                    case 2:
                        Ruim+=1;
                    break;

                    case 3:
                        Ok+=1;
                    break;

                    case 4:
                        Bom+=1;
                    break;

                    case 5:
                        Perfeito+=1;
                    break;

                    case 1708:
                        Quadr16=0;//Saira do loop e não ira pontuar nenhuma das opções anteriores
                    break;

                    default:
                        printf("Opcao nao identificada");
                        getch();
                        continue;
                    break;
                }
                if (pergunta1!=1708){
                    printf("\nVoce compraria este quadro?\n1 - Sim\n2 - Nao\n\nResposta:");
                    scanf("%d",&pergunta2);
                    switch(pergunta2){

                        case 1:
                            Comprariam+=1;
                        break;

                        case 2:
                            NaoComprariam+=1;
                        break;

                        default:
                            printf("Opcao nao identificada");
                            getch();
                            continue;//Voltara para a primeira pergunta
                        break;

                    }
                }
            }


        break;


        case 1708:
            menu=0;
        break;
    }

}while(menu==1);
system("cls");
printf("%d pessoas acharam este quadro Pessimo\n",Pessimo);
printf("%d pessoas acharam este quadro Ruim\n",Ruim);
printf("%d pessoas acharam este quadro Ok\n",Ok);
printf("%d pessoas acharam este quadro Bom\n",Bom);
printf("%d pessoas acharam este quadro Perfeito\n",Perfeito);

printf("\n%d pessoas comprariam este quadro\n",Comprariam);
printf("%d pessoas nao comprariam este quadro\n",NaoComprariam);




}
