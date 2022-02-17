#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

/*
    Caixa Eletr�nico
    Silas Rodrigues
    github.com/SilasRodrigues19
*/

int main ()

{

    setlocale(LC_ALL, "Portuguese");

    int senha;
    int cont = 0;
    char opcao;
    float valor;
    float saldo = 0;
    int g;


    for( ; ; )
    {
        printf("Digite sua senha:\n");
        scanf ("%d", &senha);
        if(senha == 123)
        {
        system ("cls");
        for ( ; ; )
        {
            printf("------------------------------------------------------------\n");
            printf("\t\t     BANCO DOS FATECANOS\n");
            printf("\t\t   *** MENU PRINCIPAL *** \n");
            printf("\n");
            printf("[1] - Consultar saldo\n");
            printf("[2] - Efetuar saque\n");
            printf("[3] - Fazer dep�sito\n");
            printf("[4] - Limpar tela\n");
            printf("[5] - Finalizar\n");
            printf("------------------------------------------------------------\n");

            fflush(stdin);
            opcao = getchar();
            switch(opcao)
            {
                case '1' : printf("\nSeu saldo � de: R$%2.f\n", saldo);
                system ("pause");
                break;

                /*SAQUE*/

                case '2' : printf("\nDigite o valor que deseja sacar:\n");
                scanf("%f", &valor);

                if(saldo > 0) {
                    saldo = saldo - valor;
                    printf("\nSaque de R$%2.f feito com sucesso\n", valor);
                    printf ("\nVoc� possui R$%2.f de saldo restante \n", saldo);
                    system ("pause");
                    break;
                } else {
                    printf("\nN�o foi poss�vel sacar, seu saldo � de R$%2.f \n", saldo);
                    break;
                }

                /*DEPOSITO*/

                case '3':
                printf("\nDigite o valor que deseja depositar:\n");
                scanf("%f", &valor);
                saldo = saldo + valor;
                printf("\nDep�sito de R$%2.f feito com sucesso\n", valor);
                printf ("\nSeu saldo atual � de: R$%2.f\n", saldo);
                system ("pause");
                break;
                case '4':
                system ("cls");
                break;
                case '5':
                exit(1);
                default: printf("Op��o inv�lida! \n\n As opera��es v�lidas s�o: \n\t[1] - Saldo (Consulte seu saldo)\n\t[2] - Saque(Retire um valor do seu saldo)\n\t[3] - Deposito(Deposite um valor)\n\t[4] - Limpar(Limpar a tela)\n\t[5] - Finalizar(Fechar o programa)\n\n");

                system ("pause");
                system ("cls");
            }
        }

        }

        else
        {
            printf("\nSenha incorreta \n----------------------------\n");
            cont++;
            if(cont > 2) {

            printf("%d tentativas incorretas...\n", cont);
            break;
            }
        }

    }

}
