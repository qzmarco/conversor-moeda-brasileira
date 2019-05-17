#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void Converter_Mil_Reis();
void Converter_Cruzeiro();
void Converter_Cruzeiro_Novo();
void Converter_Cruzado();
void Converter_Cruzado_Novo();
void Converter_Cruzeiro_Real();

main()
{
      int x;    
      
      while(1)
      {                     
      printf("-----Bem vindo ao sistema de conversao de moedas antigas!-----\n");
      printf("\n-----Por favor, escolha uma das alternativas abaixo: -----\n");
      printf("\n\t\t\t\t\t\tDesenvolvido por MATSQ.\n");
      printf("\n\t\t\t\t\t\tTodos os direitos reservados.\n");
      printf("\nOpcao 1: Mil Reis (ate Outubro de 1942) para Real (01/1994 - )\n");
      printf("\nOpcao 2: Cruzeiro (de 01/10/1942 ate 31/01/1967) para Real (01/1994 - )\n");
      printf("\nOpcao 3: Cruzeiro Novo (de 01/02/1967 ate 02/1986) para Real (01/1994 - )\n");
      printf("\nOpcao 4: Cruzado (de 03/1986 a 01/1989) para Real (01/1994 - )\n");
      printf("\nOpcao 5: Cruzado Novo (de 02/1989 ate 07/1993) para Real (01/1994 - )\n");
      printf("\nOpcao 6: Cruzeiro Real (de 08/1993 ate 06/1994) para Real (01/1994 - )\n");
      printf("\nOpcao 0: Sair\n\n");
      scanf("%d", &x);
      system("cls");
               switch(x){
                         case 1: Converter_Mil_Reis();
                         break;
                         case 2: Converter_Cruzeiro();
                         break;
                         case 3: Converter_Cruzeiro_Novo();
                         break;
                         case 4: Converter_Cruzado();
                         break;
                         case 5: Converter_Cruzado_Novo();
                         break;
                         case 6: Converter_Cruzeiro_Real();
                         break;
                         case 0: exit(1);
                         break;
                         default: printf ("\nPorfavor, digite uma opção válida!\n");
                         }
               }
}

void Converter_Mil_Reis()
{
     float resultado, x;
     
     printf("Digite o valor em Mil Reis\n");
     scanf("%f",&x);
     resultado = ((x / pow(1000,5)) / 2750);
     printf("\nO total em Reais eh de: R$%.2f\n", resultado);
     getch();
     system("cls");
}

void Converter_Cruzeiro()
{
     float resultado, x;
     
     printf("Digite o valor em Cruzeiro\n");
     scanf("%f",&x);
     resultado = ((x / pow(1000,4)) / 2750);
     printf("\nO total em Reais eh de: R$%.2f\n", resultado);
     getch();
     system("cls");
}

void Converter_Cruzeiro_Novo()
{
     float resultado, x;
     
     printf("Digite o valor em Cruzeiro Novo\n");
     scanf("%f",&x);
     resultado = ((x / pow(1000,3)) / 2750);
     printf("\nO total em Reais eh de: R$%.2f\n", resultado);
     getch();
     system("cls");
}

void Converter_Cruzado()
{
     float resultado, x;
     
     printf("Digite o valor em Cruzado\n");
     scanf("%f",&x);
     resultado = ((x / pow(1000,2)) / 2750);
     printf("\nO total em Reais eh de: R$%.2f\n", resultado);
     getch();
     system("cls");
}

void Converter_Cruzado_Novo()
{
     float resultado, x;
     
     printf("Digite o valor em Cruzado Novo\n");
     scanf("%f",&x);
     resultado = ((x/1000)/2750);
     printf("\nO total em Reais eh de: R$%.2f\n", resultado);
     getch();
     system("cls");
}

void Converter_Cruzeiro_Real()
{
     float resultado, x;
     
     printf("Digite o valor em Cruzeiro Real\n");
     scanf("%f",&x);
     resultado = x / 2750;
     printf("\nO total em Reais eh de: R$%.2f\n", resultado);
     getch();
     system("cls");

}
