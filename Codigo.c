#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char login[20] , senha[20] , cad_login[20] , cad_senha[20];
int ret_login , ret_senha,escolha;

int main(void)
{   //cadastro
    setlocale(LC_ALL,"");
    printf("--------------------------------------\n");
    printf("  CADASTRO LOGIN E SENHA: Use seu CPF\n");
    printf("--------------------------------------\n");

    printf("Cadastre o login:");
    scanf("%s",&cad_login);
    printf("Cadastre a senha:");
    scanf("%s",&cad_senha);
    printf("\n\n------Cadastro realizado com sucesso!------\n\n");
    return cadastro() ;
  }
 int cadastro (void){
    //login
    printf("--------------------------\n");
    printf("      LOGIN E SENHA: \n");
    printf("--------------------------\n");

    printf("Login: ");
    scanf("%s",&login);
    printf("Senha: ");
    scanf("%s",&senha);

    ret_login = strcmp(login,cad_login);
    ret_senha = strcmp(senha,cad_senha);
    if (ret_login==0 && ret_senha==0){
      printf("\nLogin realizado com sucesso!\n");
      }else{
      printf("\nLogin Inv�lido!\n");
      return main();
      }
      system ("cls");
      return servico();
}
int servico(void){
  //cadastro do pet,escolha o servi�o, disponibilidade e horarios.
  setlocale(LC_ALL,"");

  int opcao,ha,hb,hc,hc1,hct,hd1,hdt,hd2,he,hes,hest,hf1,hf2,hft,pt,fim,fone,peso,precof;
  char email[50], end [50], raca [50];

  printf("-----Informe o primeiro ou �nico nome da ra�a do animal-----\n");
  scanf("%s",&raca);
  printf("\n-----Informe o peso do animal-----\n");
  scanf("%s",&peso);
  system ("cls");

  printf("\n\n\t\t\t\t--------Escolha um servi�o--------\n\n");
  printf("\n\t---1-Banho e tosa-R$80---  ---2-Veterin�rio-R$120---  ---3-Creche Pet-R$50/H---\n");
  printf("\n\t---4-Hospedagem-R$10/H---  ---5-Adestramento-R$70---  ---6-Bab� de pet-R$30/H---\n\n");
  scanf("%d",&opcao);

  switch(opcao){
     case 1:
     printf("\n-----Voc� escolheu banho e tosa----- -\n\n*O servi�o est� dispon�vel* -> escolha um dos hor�rios poss�veis: 8 as 18\n\n");
     scanf("%d",&ha);
        if (ha>=8 && ha<=18){
        printf("\n*Hor�rio dispon�vel*\n");
        printf("\n---Se deseja pagar no d�bito digite 1, pagar no cr�dito digite 2---\n");
        scanf("%d",&pt);
        printf("\n---Por favor insira seu email para receber o cupom fiscal---\n");
        scanf("%s",&email);
        printf("\n---Insira seu n�mero de telefone para contato.---\n\n");
        scanf("%d",&fone);
        system ("cls");
       }else
       printf("\n*Hor�rio indispon�vel*\n");
                       if(pt>0 && pt<=2){
                       printf("\n*O pagamento de R$80 foi realizado, o cupom fiscal ser� enviado no seu email*.\n*Caso necess�rio entraremos em contato pelo n�mero de telefone fornecido*\n");
                       }else
                       printf("\n*Op��o de pagamento inv�lida*\n");
                       break;
     case 2:
     printf("\nVoc� escolheu Veterin�rio\n\n*O servi�o esta dispon�vel* -> escolha um dos hor�rios poss�veis: 8 as 18\n");
     scanf("%d",&hb);
        if (hb>=8 && hb<=18){
        printf("\n*Hor�rio dispon�vel*\n");
        printf("\n---Se deseja pagar no d�bito digite 1, pagar no cr�dito digite 2---\n");
        scanf("%d",&pt);
        printf("\n---Por favor insira seu email para receber o cupom fiscal---\n");
        scanf("%s",&email);
        printf("\n---Insira seu n�mero de telefone para contato.---\n\n");
        scanf("%d",&fone);
        system ("cls");
       }else
       printf("\n*Hor�rio indispon�vel*\n");
            if(pt>0 && pt<=2){
            printf("\n*O pagamento de R$120 foi realizado, o cupom fiscal ser� enviado no seu email*.\n*Caso necess�rio entraremos em contato pelo n�mero de telefone fornecido*\n");
            }else
            printf("\n*Op��o de pagamento inv�lida*\n");
            break;
     case 3:
     printf("\nVoc� escolheu Creche pet\n\n*O servi�o est� dispon�vel*\n\n--Informe o n�mero de horas que gostaria de deixar o pet na creche--\n");
     scanf("%d",&hc1);
     printf("\n--Escolha um dos hor�rios poss�veis: 8 as 18--\n");
     scanf("%d",&hc);
        if (hc>=8 && hc<=18){
        printf("\n*Hor�rio dispon�vel*\n");
        hct = hc1*50;
        printf("\n---Se deseja pagar no d�bito digite 1, pagar no cr�dito digite 2---\n");
        scanf("%d",&pt);
        printf("\n---Por favor insira seu email para receber o cupom fiscal---\n");
        scanf("%s",&email);
        printf("\n---Insira seu n�mero de telefone para contato.---\n\n");
        scanf("%d",&fone);
        system ("cls");
        }else
        printf("\n*Hor�rio indispon�vel*\n");
             if(pt>0 && pt<=2){
             printf("\n*O pagamento de R$%d foi realizado, o cupom fiscal ser� enviado no seu email*\n--Caso necess�rio entraremos em contato pelo n�mero de telefone fornecido --\n",hct);
             }else
             printf("\n*Op��o de pagamento inv�lida*\n");
             break;
     case 4:
     printf("\nVoc� escolheu Hospedagem\n\n*O servi�o est� dispon�vel*\n\n--Quantas horas o pet ficar� hospedado?--\n");
     scanf("%d",&hd2);
     printf("\n--Hor�rios dispon�veis = 00 a 24, qual ser� o hor�rio de chegada?--\n");
     scanf("%d",&hd1);
        if (hd1>=00 && hd1<=24){
        printf("\n*Hor�rios dispon�veis*\n");
        hdt = hd2*10;
        printf("\n---Se deseja pagar no d�bito digite 1, pagar no cr�dito digite 2---\n");
        scanf("%d",&pt);
        printf("\n---Por favor insira seu email para receber o cupom fiscal---\n");
        scanf("%s",&email);
        printf("\n---Insira seu n�mero de telefone para contato.---\n\n");
        scanf("%d",&fone);
        system ("cls");
       }else if(hd1<0){
       printf("\n*Hor�rio indispon�vel*\n");
             }if(pt>0 && pt<=2){
             printf("\n*O pagamento de R$%d foi realizado, o cupom fiscal ser� enviado no seu email\n---Caso necess�rio entraremos em contato pelo numero de telefone fornecido---\n",hdt);
             }else
             printf("\n*Op��o de pagamento inv�lida*\n");
             break;
     case 5:
     printf("\nVoc� escolheu Adestramento\n\n*O servi�o est� dispon�vel*\n--Informe quantas sess�es voc� gostaria de contratar--\n");
     scanf("%d",&hes);
     printf("--Escolha um dos hor�rios poss�veis: 8 as 18--\n");
     scanf("%d",&he);
        if (he>=8 && he<=18){
        printf("\n*Hor�rio dispon�vel*\n");
        hest = hes*70;
        printf("\n---Se deseja pagar no d�bito digite 1, pagar no cr�dito digite 2---\n");
        scanf("%d",&pt);
        printf("\n---Por favor insira seu email para receber o cupom fiscal---\n");
        scanf("%s",&email);
        printf("\n---Insira seu n�mero de telefone para contato.---\n\n");
        scanf("%d",&fone);
        system ("cls");
        }else
        printf("\n*Hor�rio indispon�vel*\n");
             if(pt>0 && pt<=2){
             printf("\n*O pagamento de R$%d foi realizado, o cupom fiscal ser� enviado no seu email*\n---Caso necess�rio entraremos em contato pelo numero de telefone fornecido ---\n",hest);
             }else
             printf("\n*Op��o de pagamento inv�lida*\n");
             break;
     case 6:
     printf("\nVoc� escolheu Bab� de Pet\n\n*O servi�o esta dispon�vel*\n--Quantas horas o pet ficar� sob os cuidados da bab�?--\n");
     scanf("%d",&hf1);
     printf("\n--Hor�rios dispon�veis = 00 a 24, qual ser� o hor�rio de chegada da bab�?--\n");
     scanf("%d",&hf2);
        if (hf2>=6 && hf2<=24){
        printf("\n*Hor�rio dispon�vel*\n");
        hft = hf1*30;
        printf("\n---Se deseja pagar no d�bito digite 1, pagar no cr�dito digite 2---\n");
        scanf("%d",&pt);
        printf("\n---Por favor insira seu email para receber o cupom fiscal---\n");
        scanf("%s",&email);
        printf("\n---Insira seu n�mero de telefone para contato.---\n\n");
        scanf("%d",&fone);
        system ("cls");
        }else if(hf2<0){
        printf("\n*Hor�rio indispon�vel*\n");
             }if(pt>0 && pt<=2){
             printf("\n*O pagamento de R$%d foi realizado, o cupom fiscal ser� enviado no seu email*\n ---A bab� avisar� que est� chegando no endere�o mandando uma mensagem para o n�mero de telefone fornecido ---\n",hft);
             }else
             printf("\n*Op��o de pagamento inv�lida*\n");
             break;
     default:
     printf("\n*Op��o inv�lida*\n");
     return servico();
     break;
  }
  printf("\n*Voc� gostaria de realizar a opera��o de novo?*\n--Se sim digite 1, se n�o digite qualquer n�mero acima de 2.--\n");
  scanf("%d",&fim);
  if (fim>0 && fim<2){
         system ("cls");
         return main();
  }else
  printf("--------------------------\n");
  printf(" OBRIGADO E VOLTE SEMPRE! \n");
  printf("--------------------------\n");
}
