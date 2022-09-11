#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int main()
{
    int op;

    setlocale(LC_ALL,"portuguese");
    system("CLS");

    printf("Escolha uma opção: ");
    printf("\n1 - Exercício 01");
    printf("\n2 - Exercício 02");
    printf("\n3 - Exercício 03");
    printf("\n4 - Exercício 04");
    printf("\n5 - Exercício 05");
    printf("\n6 - Exercício 06");
    printf("\n7 - Exercício 07");
    printf("\n8 - Exercício 08");
    printf("\n9 - Exercício 09");
    printf("\n10 - Exercício 10");
    printf("\n0 - SAIR");
    printf("\n- Escolha: ");
    scanf("%i", &op);

    do
    {
        switch(op)
        {
        case 0:
            return 0;
            break;
        case 1:
            ex01();
            break;
        case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;
        case 4:
            ex04();
            break;
        case 5:
            ex05();
            break;
        case 6:
            ex06();
            break;
        case 7:
            ex07();
            break;
        case 8:
            ex08();
            break;
        case 9:
            ex09();
            break;
        case 10:
            ex10();
            break;
        default:
            return 0;
        }
        system("pause");
    }
    while (op != 0);


    return (0);
}


int ex01()
{
    // 1 - Leia um conjunto indeterminado de palavras e ao final (estipule você um flag) informe qual foi a maior palavra e a
    //menor palavra digitada, em tamanho e lexicograficamente.
    //
    // ENTRADA = amora, paralelepipedo, rafael, corno
    // SAIDA = paralelepipedo / corno // rafael / amora
    //
    char palavra[51], maior[51], menor[51], tamanho_1[51], tamanho_2[51];

    fflush(stdin);
    printf("\n- Digite plavras (flag=\"flag\"): ");
    gets(palavra);

    strcpy(menor,palavra);
    strcpy(maior,palavra);
    strcpy(tamanho_1,palavra);
    strcpy(tamanho_2,palavra);

    while(strcmp(palavra,"flag")!= 0)
    {

        //Comparação de tamanho
        //menor
        if(strlen(menor)>strlen(palavra))
        {
            strcpy(tamanho_1,palavra);
        }
        //maior
        if(strlen(maior)<strlen(palavra))
        {
            strcpy(tamanho_2,palavra);
        }
        //Comparação lexicográfica
        //menor
        if(strcmp(menor,palavra)>0)
        {
            strcpy(menor,palavra);
        }
        //maior
        if(strcmp(maior,palavra)<0)
        {
            strcpy(maior,palavra);
        }
        gets(palavra);
        fflush(stdin);
    }

    getch();
    printf("\n- Lexicograficamente:\nA maior palavra é %s\nA menor palavra é: %s",maior,menor);
    printf("\n- Em tamanho:\nA maior palavra é: %s\nA menor palavra é: %s", tamanho_2, tamanho_1);
    main();
}

int ex02()
{
    //2 – Ler um string de no máximo 50 caracteres e contar quantas letras A essa palavra possui.
    //
    //ENTRADA = amora, arthur
    //SAIDA = 2, 1

    char strpalavra[51];
    int i, j = 0;

    fflush(stdin);
    printf("\n- Digite uma string de até 50 caracteres: ");
    gets (strpalavra);

    for (i = 0; i < strlen(strpalavra); i++)
    {
        if (strpalavra[i] == 'a')
        {
            j++;
        }
        else
        {
            if (strpalavra[i] == 'A')
            {
                j++;
            }
        }
    }
    printf("O numero de A na palavra é: %i", j);
    printf("\n");
    main();

}

int ex03()
{
    //3 – Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra
    //
    //ENTRADA = amora / arthur
    //SAIDA = 0 e 4 / 0

    char strcaracter[51];
    int i;

    fflush(stdin);
    printf("\n- Digite uma string de ate 50 caracteres: ");
    gets (strcaracter);

    for (i = 0; i < strlen(strcaracter); i++)
    {

        if (strcaracter[i] == 'a')
        {
            printf("\n- A posição da letra a é: %i", i);
            printf("\n");
        }
        else
        {

            if (strcaracter[i] == 'A')
            {
                printf("\n- A posição da letra A é: %i", i);
                printf("\n");
            }
        }


    }
    main();
}

int ex04()
{
    //4 – Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere
    //aparece na string lida e quantas vezes ele apareceu.
    //
    //ENTRADA = amora/ arthur
    //SAIDA = 0 e 4 / 2 // 0 / 1

    int i, j = 0;
    char strcaracter[51], chletra;

    fflush(stdin);
    printf("\n- Digite uma string de até 50 caracteres: ");
    gets (strcaracter);
    printf("\n- Digite um char: ");
    scanf("%c", &chletra);

    for (i = 0; i < strlen(strcaracter); i++)
    {

        if (strcaracter[i] == chletra)
        {
            printf("\n- A posição da letra a é: %i", i);
            j++;
        }
        else
        {

            if (strcaracter[i] == chletra)
            {
                printf("\n- A posição da letra A é: %i", i);
                j++;
            }
        }


    }
    printf("\n- O numero de vezes que %c aparece foi %i", chletra, j);
    printf("\n\n");

    fflush(stdin);
    main();
}

int ex05()
{
    //5 - Ler uma string de no máximo 50 caracteres e em seguida um caractere (entre A e z - consista se o caracter esta nesse
    //intervalo), mostrar quais as posições esse caractere (maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.
    //
    //ENTRADA = amora/ arthur
    //SAIDA = 0 e 4 / 2 // 0 / 1


    int i, j = 0;
    char strcaracter[51], chletra;

    fflush(stdin);
    printf("\n- Digite uma string de até 50 caracteres: ");
    gets (strcaracter);
    printf("\n- Digite um char: ");
    scanf("%c", &chletra);

    for (i = 0; i < strlen(strcaracter); i++)
    {
        if (strcaracter[i] == chletra)
        {
            printf("\n- A posição da letra a é: %i", i);
            j++;
        }
        else
        {

            if (strcaracter[i] == chletra)
            {
                printf("\n- A posição da letra A é: %i", i);
                j++;
            }
        }


    }
    printf("\n- O numero de vezes que %c aparece foi %i", chletra, j);
    printf("\n\n");

    fflush(stdin);
    main();
}
int ex06()
{
    //6 - Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e
    //quantos não são nem números nem letras.
    //
    //ENTRADA = amora123*-
    //SAIDA = 5 / 3 / 2
    //
    //

    char strcaracter[51];
    int i, letra = 0, numero = 0, resto = 0;

    fflush(stdin);
    printf("\n- Digite uma string de até 50 caracteres: ");
    gets (strcaracter);

    for(i = 0; i < strlen(strcaracter); i++)
    {
        if((strcaracter[i] >= 'A' && strcaracter[i] <= 'Z')||(strcaracter[i] >= 'a' && strcaracter[i] <= 'z'))
        {
            letra++;
        }
        else
        {
            if (strcaracter[i] >= '0' && strcaracter[i] <= '9')
            {
                numero++;
            }
            else
            {
                resto++;
            }
        }
    }
    printf("\n- A palavra tem %i letra e %i numero e %i resto", letra, numero, resto);
    printf("\n");
    main();
}
int ex07()
{
    //7 – Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira
    //string será a primeira na nova string e assim sucessivamente.
    //
    //ENTRADA = amora / rafael
    //SAIDA = aroma / leafar
    //
    //

    int i, tamanho;
    char strcaracter[51], inverso[51];

    fflush(stdin);
    printf("\n- Digite uma string de até 50 caracteres: ");
    gets (strcaracter);

    tamanho = strlen(strcaracter);
    strcpy(inverso,strcaracter);

    for(i = 0; i < tamanho; i++)
    {
        inverso[i] = strcaracter[tamanho - i - 1];
    }

    printf("\n- O inverso da palavra é: %s", inverso);
    printf("\n");
    getch();
    main();
}
int ex08()
{
    //8 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Utilize uma string
    //auxiliar
    //
    //ENTRADA = Prefeitura municipal de Caratinga
    //SAIDA = PrefeituramunicipaldeCaratinga
    //
    //

    int i=0,k=0;
    char str[51],str2[51];

    printf("\n- Digite a string para que os espaços em branco sejam retirados: ");
    fflush(stdin);
    gets(str);

    for(; i<51; i++)
    {
        if(str[i]=='\0')
        {
            break;
        }
        if(str[i]==' ')
        {
            continue;
        }


        str2[k]=str[i];
        k++;
    }

    printf("\n- A nova string é:%s",str2);
    getch();
    main();
}
int ex09()
{
    //9 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Sem utilize string
    //auxiliar.
    //ENTRADA = Isadora Pinto
    //SAIDA = IsadoraPinto
    //
    //
    int i, pos, len;
    char string[51];

    fflush(stdin);
    printf("\n- Digite uma string de ate 50 caracteres com espaços em branco: ");
    gets (string);

    len = strlen(string);

    for (i = 0, pos = 0; i < len; i++, pos++)
    {
        if(string[pos] == ' ')pos++;
        string[i] = string[pos];
    }

    printf("\n- A string sem espaços fica: %s", string);

    getch();
    main();
}
int ex10()
{
    //10 - Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas
    //vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.
    //
    //ENTRADA = amora / arthurarthur
    //ENTRADA = amo / art
    //SAIDA = 1 / 2
    //

    char resp[51],caracteres[4];
    int i, j = 0, k = 0 ;

    printf("\n- Me dê uma string para que eu digo em qual posição os caracteres escolhidos estarão: ");
    fflush(stdin);
    gets(resp);

    printf("\n- Me dê o conjunto de 3 caracteres para eu ver em que posição eles se repetem na string acima: ");
    fflush(stdin);
    gets(caracteres);

    for(i = 0 ; i < strlen(resp) ; i = i+3)
    {
        if(strlen(caracteres) == 1)
        {
            if(resp[i] == caracteres[j])
            {

                k++;


            }
        }
        if(strlen(caracteres) == 2)
        {
            if(resp[i] == caracteres[j])
            {
                if(resp[i+1] == caracteres[j+1])
                {

                    k++;

                }
            }
        }
        if(strlen(caracteres) == 3)
        {
            if(resp[i] == caracteres[j])
            {
                if(resp[i+1] == caracteres[j+1])
                {
                    if(resp[i+2]==caracteres[j+2])
                    {
                        k++;
                    }
                }
            }
        }

    }
    printf("A string %s aparece %d vezes na string %s\n\n", caracteres, k, resp);

    getch();
    main();
}

