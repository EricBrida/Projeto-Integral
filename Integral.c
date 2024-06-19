#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

// Eric Bueno Corrêa Brida
// Kaue Eduardo Frezzato
// Rubia Vitoria Moreira
// Rogerio Antonio Augusto
// João Victor de Araújo Martinss

int main() {
    float a, b, k, x;
    int menu, resp;

    setlocale(LC_ALL, "Portuguese");

    do{

       men:

       system("cls || clear");

        printf("///////////////////////////////////////////////////\n\n");
        printf("Mensagem: Escolha a função a qual deseja obter a integral de f(x) com x de a até b: \n\n");

        printf("MENU \n\n");

        printf("1- f(x) = k\n");
        printf("2- f(x) = x^k\n");
        printf("3- f(x) = 1/x \n");
        printf("4- f(x) = SAIR\n\n");
        printf("///////////////////////////////////////////////////\n");
        scanf("%d", &menu);


        switch(menu){

                case 1:

                    /* f(x) = k */

                    system("cls || clear");

                    printf("Mensagem: Digite o valor de k para a construção da função desejada.\n");
                    scanf("%f", &k);
                    printf("Mensagem: Digite o valor A do extremo inferior da integral.\n");
                    scanf("%f", &a);
                    printf("Mensagem: Digite o valor B do extremo superior da integral.\n");
                    scanf("%f", &b);

                    system("cls || clear");

                    printf("O valor da integral da função de a até b eh: %f\n\n", (k * b) - (k * a));

                    system("pause");

                    system("cls || clear");

                    printf("Deseja continuar calculando?? SIM (1) || NAO (0)\n");
                    scanf("%d", &resp);

                    if(resp == 1){

                        goto men;

                    }

                    return 0;

                    break;

                case 2:

                    /* f(x) = x^k */
                    system("cls || clear");

                    printf("Mensagem: Digite o valor de k para a construção da função desejada.\n");
                    scanf("%f", &k);
                    printf("Mensagem: Digite o valor A do extremo inferior da integral.\n");
                    scanf("%f", &a);
                    printf("Mensagem: Digite o valor B do extremo superior da integral.\n");
                    scanf("%f", &b);

                    system("cls || clear");

                    printf("Mensagem: O valor da integral da função de a até b eh: %.4f\n\n", pow(b, k + 1) / (k + 1) - pow(a, k + 1) / (k + 1));

                    system("pause");

                    system("cls || clear");

                    printf("Deseja continuar calculando?? SIM (1) || NAO (0)\n");
                    scanf("%d", &resp);

                    if(resp == 1){

                        goto men;

                    }

                    return 0;

                    break;

                case 3:

                    /* 1/x */
                    system("cls || clear");

                    printf("Mensagem: Digite o valor A do extremo inferior da integral.\n");
                    scanf("%f", &a);
                    printf("Mensagem: Digite o valor B do extremo superior da integral.\n");
                    scanf("%f", &b);

                    system("cls || clear");

                    printf("Mensagem: O valor da integral da função de a até b eh: %.4f\n\n", log(b) - log(a));

                    system("pause");

                    system("cls || clear");

                    printf("Deseja continuar calculando?? SIM (1) || NAO (0)\n");
                    scanf("%d", &resp);

                    if(resp == 1){

                        goto men;

                    }

                    return 0;

                    break;

                case 4:

                    /*Menu Sair*/

                    system("cls || clear");

                    printf("Obrigado por utilizar nossa calculadora!!! \n\n");
                    //sleep(2);
                    return 0;
                    break;

                default:

                    break;

            }

 } while (menu != 4);

	return 0;
}
