#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int loopMAin = 0;

void calculadora()
{
    int loopCalc = 0;
    float x, y;
    char opc[30];

    setlocale(LC_ALL, "");

    printf("Esta é uma calculadora simples!, pois estou com preguiça de fazer uma melhorada.\n\n");

    while (loopCalc < 1)
    {
        printf("Opções:\n Soma\n Subtração\n Multiplicação\n Divisão \n Sair\nOBS: digitar sem acento\n\n");

        printf("SELECT:");
        scanf("%s", &opc);

        if(strcasecmp(opc, "soma") == 0)
        {
            printf("Digite o primeiro valor: ");
            scanf("%f", &x);

            printf("Digite o segundo valor: ");
            scanf("%f", &y);

            printf("Resultado: %.1f\n\n", x + y);

        }

        if(strcasecmp(opc, "subtracao") == 0)
        {
            printf("Digite o primeiro valor: ");
            scanf("%f", &x);

            printf("Digite o segundo valor: ");
            scanf("%f", &y);

            printf("Resultado: %.1f\n\n", x - y);
        }

        if(strcasecmp(opc, "multiplicacao") == 0)
        {
            printf("Digite o primeiro valor: ");
            scanf("%f", &x);

            printf("Digite o segundo valor: ");
            scanf("%f", &y);

            printf("Resultado: %.1f\n\n", x * y);
        }

        if(strcasecmp(opc, "divisao") == 0)
        {
            printf("Digite o primeiro valor: ");
            scanf("%f", &x);

            printf("Digite o segundo valor: ");
            scanf("%f", &y);

            printf("Resultado: %.1f\n\n", x / y);
        }

        if(strcasecmp(opc, "sair") == 0)
        {
            loopCalc = 2;
        }
    }
    

}

void menudeusuario()
{
    int opc;
        char usu[50];
        char ema[50];
        int senha;
        int senhaN;

        setlocale(LC_ALL,"");

        printf("------PAGINA DO USUARIO------\n\n\n");
        printf("1 - Criar Novo Usuario\n");
        printf("2 - Alterara Dados do Usuario\n");
        printf("3 - Informações do Usuario\n");
        printf("4 - Excluir Usuario\n");
        printf("5 - Sair\n\n");
        printf("selecione o numero: ");

        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf("-----PREENCHA AS ABAS-----\n\n\n");

            printf("Novo Usuario: ");
            scanf("%s", &usu);

            printf("Email: ");
            scanf("%s", &ema);

            printf("Nova Senha: ");
            scanf("%d", &senha);

            if (senha != 0)
            {
                printf("----USUARIO CRIADO----\n\n");
            }
            
            menudeusuario();

            break;

        case 2:
            printf("----ALTERAR DADOS DO USUARIO----\n\n\n");

            printf("Nome Do Usuario: ");
            scanf("%s", &usu);

            printf("Senha Antiga : ");
            scanf("%d", &senha);

            printf("Nova Senha: ");
            scanf("%d", &senhaN);

            if (senha != 0)
            {
                printf("SENHA ALTERADA");
            }

            menudeusuario();

            break;

        case 3:
            printf("----INFORMAÇÕES DO USUARIO----\n\n\n");
            
            printf("Usuario: ");
            scanf("%s", &usu);

            printf("Senha: ");
            scanf("%d", &senha);

            if (senha != 0)
            {
                printf("EMALI: xxxxxxxx@gmail.com\n");
                printf("CEP: 00000000\n");
                printf("TELEFONE: 999999999\n");
                printf("IDADE: XX\n");
                printf("SEXO: XX\n");
            }

            menudeusuario();

            break;

        case 4:
            printf("----EXCLUIR USUARIO----\n\n\n");

            printf("USUARIO que deseja EXCLUIR: ");
            scanf("%s", usu);

            printf("SENHA do USUARIO: ");
            scanf("%d", &senha);

            if (senha != 0)
            {
                printf("USUARIO EXCLUIDO\n");
            }
            
            menudeusuario();

            break;

        case 5:

            break;
        
        default:

            break;
        }
    
    
}

void inteiros()
{
    int loopInteiro = 0;
    int a;
    int b;
    int c;
    int menor;
    int maior;
    char out[10];

    setlocale(LC_ALL, "");

         while (loopInteiro < 1)
        {
            printf("Digite o primeiro valor: ");
            scanf("%d", &a);

            printf("Digite o segundo valor: ");
            scanf("%d", &b);

            printf("Digite o terceiro valor: ");
            scanf("%d", &c);

            menor = a;
            maior = a;

            if(menor > b)
                menor = b;
            if(menor > c)
                menor = c;

            if(maior < b)
                maior = b;
            if(maior < c)
                maior = c;

            printf("Media: %d\n", (a + b + c) / 3);

            printf("Soma: %d\n", a + b + c);

            printf("Produto %d\n", a * b * c);
    
            printf("Maior Numero: %d\n", maior);

            printf("Menor Numero: %d\n\n", menor);

            printf("Deseja Sair SIM ou NAO: ");
            scanf("%s", &out);

            if(strcasecmp(out, "nao") == 0)
            {
                loopInteiro = 0;
            }

            if(strcasecmp(out, "sim") == 0)
            {
                loopInteiro = 2;
            }

        }
        
}

int main()
{
    
    setlocale(LC_ALL,"");
    
    printf("Este é talvez meu ultimo codigo em C, então aqui estão meus pojetos do primeiro periodo de SI!!\n\n");
    while (loopMAin < 1)
    {
        int opcMain;
        system("cls");
        printf("\tMEUS PROJETOS\n");
        printf("1° - Calculadora\n2° - Meu De Usuario\n3° - Operações Com Inteiros\n4° - SAIR\n\n");
        printf("Escolha com Sabedoria: ");
        scanf("%d", &opcMain);

        switch (opcMain)
        {
        case 1:
        system("cls");
            calculadora();

            main();

            break;

        case 2:
        system("cls");
            menudeusuario();

            main();

            break;

        case 3:
        system("cls");
            inteiros();

            main();

            break;
        
        case 4:
            loopMAin = 2;

            printf("MUITO OBRIGADO PELA SUA ATENÇÃO!!!");
            getch();
            break;

        default:
            break;
        }

    }
    
    
    
    return 0;
}