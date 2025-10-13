    #include <stdio.h>

int main() {
    int alt;

    printf("Segue a baixo uma serie de exercicios de treinamento desenvolvidos com a linguagem C.\n");
    printf("Escolha uma opcao\n");
    printf("1) Calculadora de operacoes fundamentais\n");
    printf("2) Par ou impar\n");
    printf("3) Conversor de temperatura\n");
    printf("4) Media de notas\n");
    printf("5) Sucessor e antecessor\n");
    printf("6) Contador de 1 a 10 usando os comandos While & Do While\n");
    printf("7) Contador  de 1 a 10 usando o comando For\n");
    scanf("%d", &alt);

    switch (alt) {
        // =============================== CALCULADORA ===============================
        case 1: { 
            int  soma, subtr, multi;
            float  n1, n2, divs;

            printf("Digite um numero:\n");
            scanf("%f", &n1);
            printf("Digite outro numero:\n");
            scanf("%f", &n2);

            soma = n1 + n2;
            subtr = n1 - n2;
            multi = n1 * n2;
            
            printf("[SOMA] = %d\n", soma);
            printf("[SUBTRACAO] = %d\n", subtr);
            printf("[MULTIPLICACAO] = %d\n", multi);

             if (n2 == 0){
                printf("[ERRO] OPERACAO INVALIDA");
             } else {
                divs = n1 / n2;
                printf("[DIVISAO] = %.2f\n", divs);
             }

            break;
        }
         // =============================== ÍMPAR OU PAR ===============================
            case 2: {  
                int n1, divs;
                printf("Digite um numero\n");
                scanf("%d", &n1);

                divs = n1 % 2; 
                 if (divs == 0) {
                    printf("[SEU NUMERO E PAR]\n");
                 } else {
                    printf("[SEU NUMERO E IMPAR]\n"); 
                 }
                 break;
                }

                 // =============================== CONVERSOR DE TEMPERATURA ===============================
            case 3: { 
                float celsius, fahr;
                printf("Digite sua temperatura em Celsius: \n");
                scanf("%f", &celsius);
                fahr = (celsius * 9/5) + 32; 
                printf("Temperatura em Graus Celsius: %.2f\n", celsius);
                printf("Temperatura em graus Fahrenheit: %.2f\n", fahr);
                break;
            }
            
            // =============================== MÉDIA DE NOTAS ===============================
            case 4: { 
                float n1, n2, n3, n4, media;
                printf("Digite sua primeira nota:\n");
                scanf("%f", &n1);
                printf("Digite sua segunda nota:\n"); 
                scanf("%f", &n2);
                printf("Digite sua terceira nota:\n");
                scanf("%f", &n3);
                printf("Digite sua quarta nota:\n");
                scanf("%f", &n4);

                media = (n1 + n2 + n3 + n4) / 4;
                printf("Sua media final e de %.2f\n", media);

                if (media >= 7 ) {
                    printf("[APROVADO]\n");
                } else {
                    printf("[REPROVADO]\n");
                }
                break;
            }

            // =============================== SUCESSOR E ANTECESSOR ===============================

             case 5: { 
                int n1, antces, sucess;

                printf("Digite um numero:\n");
                scanf("%d", &n1);
                antces = (n1 - 1);
                sucess = (n1 + 1);
                printf("O antecessor do numero digitado e %d\n", antces);
                printf("O sucessor do numero digitado e %d\n", sucess);  
                break;              
             }
                
            // =============================== CONTADOR DE NÚMEROS USANDO O COMANDO While E Do While;===============================

             case 6: {
                char opc; 

                printf("Escolha um comando para executar o seu contador\n ");
                printf("a) While\n");
                printf("b) Do While\n");
                scanf(" %c", &opc);

                switch (opc)
                {
                case 'a': {
                int i=1; //(inicialização) decalra a variável
                 while (i <= 10) //Condição lógico-relacional
                 {
                    printf ("%d ", i); //corpo do loop
                    i++; //Atualização
                }
                }
                    break;
                
                case 'b': {
                int i = 1;
                do {
                    printf(" %d",i); 
                    i++;
                } while ( i <= 10);
                printf("\n");
                break;
                } 

                default:
                printf ("[opcao invalida]\n");
                break;
            }
            break;
        }

            // =============================== CONTADOR DE DIAS USANDO O COMANDO for; ===============================

            case 7: { 
                int i; 
                for (i = 1; i <= 10; i++) {
                    printf(" %d",i); 
                } 
                printf("\n");
                break;
             }


             // =============================== OPÇÃO INVÁLIDA; ===============================
            default:
             printf("[OPCAO INVALIDA]\n");
            break;
            
        }
            return 0;
    }
