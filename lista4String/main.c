#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


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


int main(){
       setlocale(LC_ALL, "PORTUGUESE");





   printf("                                 ************************\n");
   printf("                                 * Bem vindo a lista 4! *\n");
   printf("                                 ************************\n");

   int menu;

   printf("Escolha o exercicio entre 1 e 10 ou 0 para sair: ");
   scanf("%i",&menu);

   while(menu != 0){

        switch(menu){

        case 0:
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
                printf("Opção inávlida!\n");

        }
         printf("\nEscolha o exercicio entre 1 e 10 ou 0 para sair: ");
         scanf("%i",&menu);
   }

   printf("                                 ************************\n");
   printf("                                 *        OBRIGADO!     *\n");
   printf("                                 ************************\n");


return 0;
}

int ex01(){


/*
            ENTRADA                                          SAIDA
            ola mundo, abc, a, agora                      MAOIR: OLA MUNDO
                                                          MENOR: a
*/

    //        OBSERVAÇÃO: Existe um problema de logica onde as vezes a maoir e menor palavra são trocadas



    printf("\n1 - Leia um conjunto indeterminado de palavras e ao final (estipule você um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente.\n");


    char palavra[51];
    char str1[51] = "a";
    char str2[51] = "abcdefghijklmnopqrstuvxwyz123456789";
    int menu = 1;
    int retorno = 0, retorno2 = 0;
    int tam = 0, tamMaoir = 1, tamMenor = 99999999;


    while(menu != 0){


    printf("\nDigite  uma string de 50 digitos\n");

    fflush(stdin);
    gets(palavra);
    tam = strlen(palavra);

    retorno = strcmp(palavra,str1);                      // comparar a palavra com a minha menor string
    retorno2 = strcmp(palavra,str2);                    //  para armazenar a maior palavra
  //  printf("\nRetorno %i Retorno2 %i\n", retorno, retorno2);
  //  printf("O conteudo de STR1 %s\n Conteudo STR2 %s\n", str1, str2);

    if(retorno > 0 && tam >= tamMaoir){
        strcpy(str1,palavra);
     //   printf("\na maoir palavra foi: %s\n", str1);
    }
     if(retorno2 < 0 && tam <= tamMenor){
        strcpy(str2,palavra);
      //  printf("\na menor palavra foi: %s\n", str2);
    }

    retorno = 0;
    retorno2 = 0;
  //  printf("APOS\nO conteudo de STR1 %s\n Conteudo STR2 %s\n", str1, str2);
    printf("Digite 0 para sair ou 1 para continuar\n");
    scanf("%i", &menu);
    }

    printf("\nA maoir palavra: %s\n", str1);
    printf("\nA menor palavra: %s\n", str2);
    printf("Saiu\n");


  return 0;
}

int ex02(){
    /*
                                            ENTRADA                               SAIDA
                                            palavra a                                3
                                            pAlAvrA a                                3
                                            banana  a                                3
                                            string  a                               0
    */

    printf("\n2 – Ler um string e no máximo 50 caracteres e contar quantas letras A essa palavra possui.\n\n");


    char palavra [50];
    int numA, tam, i;

    printf("\nDigite uma string de no máximo 50 caracteres: \n");

    fflush(stdin);
    gets(palavra);

    tam = strlen(palavra);

    for(i = 0; i < tam; i++){
        if(strchr("aA", palavra[i])!= NULL){
            numA++;
        }
    }
    printf("\nA quantidade de letras A digitada foi: %i\n", numA);

return 0;
}

int ex03(){
    /*
                                            ENTRADA                  SAIDA
                                            palavra                     A letra A na posição: 2
                                                                        A letra A na posição: 4
                                                                        A letra A na posição: 6

                                            banana                      A letra A na posição: 2
                                                                        A letra A na posição: 4
                                                                        A letra A na posição: 6
                                            string
    */

    printf("\n3 – Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra.\n\n");


    char palavra [50];
    int numA, tam, i;

    printf("\nDigite uma string de no máximo 50 caracteres: \n");

    fflush(stdin);
    gets(palavra);

    tam = strlen(palavra);

    for(i = 0; i < tam; i++){
        if(strchr("aA", palavra[i])!= NULL){
            numA++;
            printf("A letra A na posição: %i\n", i+1);
        }
    }


return 0;
}

int ex04(){
    /*
                                            ENTRADA                  SAIDA
                                            banana n                    O caracter n na posição: 3
                                                                        O caracter n na posição: 5
                                                                        O caracter n apareceu 2 vezes

                                            banana b                    O caracter b na posição: 1
                                                                        O caracter b apareceu 1 vezes

                                            banana a                    O caracter a na posição: 2
                                                                        O caracter a na posição: 4
                                                                        O caracter a na posição: 6
                                                                        O caracter a apareceu 3 vezes
            */

    printf("\n4 –Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere aparece na string lida e quantas vezes ele apareceu.\n\n");


    char palavra [51], caracter[2];
    int numA, tam, i;

    printf("\nDigite uma string de no máximo 50 caracteres: \n");

    fflush(stdin);
    gets(palavra);

    tam = strlen(palavra);

    printf("Digite o caracter: \n");
    fflush(stdin);
    gets(caracter);

    for(i = 0; i < tam; i++){
        if(strchr(caracter, palavra[i])!= NULL){
            numA++;
            printf("O caracter %s na posição: %i\n", caracter, i+1);
        }
    }
    printf("\nO caracter %s apareceu %i vezes\n", caracter, numA);

return 0;
}

int ex05(){


/*

                                            ENTRADA                  SAIDA
                                            banana N                    O caracter  na posição: 3
                                                                        O caracter  na posição: 5
                                                                        O caracter  apareceu 2 vezes

                                            Banana b                    O caracter  na posição: 1
                                                                        O caracter  apareceu 1 vezes

                                            banAnA a                    O caracter  na posição: 2
                                                                        O caracter  na posição: 4
                                                                        O caracter  na posição: 6
                                                                        O caracter  apareceu 3 vezes



*/






    printf("\n5 - Ler uma stringde no máximo 50 caracteres e em seguida um caractere (entre A e z -consista se o caracteresta nesse intervalo), mostrar quais as posições esse caractere (maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.\n");

    char palavra [51], caracter[2];
    int num, tam, i;

    printf("\nDigite uma string de no máximo 50 caracteres: \n");

    fflush(stdin);
    gets(palavra);

    tam = strlen(palavra);
    strupr(palavra);

    printf("Digite o caracter: \n");
    fflush(stdin);
    gets(caracter);
    strupr(caracter);


    for(i = 0; i < tam; i++){
        if(strchr(caracter, palavra[i])!= NULL){
            num++;
            printf("O caracter na posição: %i\n", i+1);
        }
    }
    printf("\nO caracter apareceu %i vezes\n", num);



return 0;
}

int ex06(){
/*
                                            ENTRADA                  SAIDA
                                            ola mundo 123              Nao sao letra e nem numeros 2
                                                                        Numeros 3
                                                                        Letras 8

                                            ola mundo...                Nao sao letra e nem numeros 4
                                                                        Numeros 0
                                                                        Letras 8
                                            banana a                    O caracter a na posição: 2
                                                                        O caracter a na posição: 4
                                                                        O caracter a na posição: 6
                                                                        O caracter a apareceu 3 vezes

*/



    printf("\n6 -Ler uma string de no máola mundo ximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e quantos não são nem números nem letras.\n");

    char palavra [51];
    int numLetras = 0,numNumeros = 0, numEspaco = 0, i, tam;

    printf("\n Digite uma string: \n");
    fflush(stdin);
    gets(palavra);

    tam = strlen(palavra);

    printf("o tamanho :%i\n",tam);

    for(i = 0; i < tam; i++){
        if(strchr(",.<.;:/?!@#$%&* ", palavra[i])!= NULL){              //filtro para nao letras e numeros contando o espaço
            numEspaco++;
        }else if(strchr("0123456789", palavra[i])!= NULL ){            // filtro para numeros
            numNumeros++;
        }else{                                                        //  o resto que sobrou, as letras
            numLetras++;
        }
    }
    printf("\nNao sao letra e nem numeros %i\n", numEspaco);
    printf("\nNumeros %i\n", numNumeros);
    printf("\nLetras %i\n", numLetras);


return 0;
}

int ex07(){

    /*
                ENTRADA                                                          SAIDA
                socorrame subi no onibus em marrocos                socorram me subino on ibus emarrocos
                a lua me traiu                                                  uiart em aul a
    */


    printf("\n7 –Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira string será a primeira na nova string e assim sucessivamente.\n");

    char frase[51];
    int tam, i;

    printf("\nDigite uma frase para ser invertida: \n");
    fflush(stdin);
    gets(frase);

    tam = strlen(frase);

    printf("Frase digitada: \n%s\n", frase);
    printf("Frase invertida: \n");

    for(i = tam-1;i >= 0; i--){

        printf("%c", frase[i]);
    }
    printf("\n\n");

return 0;
}

int ex08(){

/*
                        ENTRADA                     SAIDA
                        OLA MUNDO                   OLAMUNDO
                        AGORA VAI                   AGORAVAI
*/

    printf("\n8 – Ler uma string de no máximo 50 caracteres e retire dessa string ola mundotodos os espaços em branco. Utilize uma stringauxiliar.\n");

    int i=0,k=0, tam;
    char str[51],str2[51];

     printf("Digite uma frase para retirar os espaços: \n");
     fflush(stdin);
     gets(str);

     printf("A frase digitdada: \n%s\n",str);

     tam = strlen(str);
     printf("\n O tamanho da frase %i", tam);

    for(i = 0; i < tam; i++){

        if(str[i] == ' '){
            continue;
        }
        str2[k]=str[i];
        k++;
    }
    printf("\nA frase sem espaço: \n%s\n", str2);


return 0;
}

int ex09(){

/*
                        ENTRADA                     SAIDA
                        OLA MUNDO                   OLAMUNDO
                        AGORA VAI                   AGORAVAI
*/


    printf("\n9 –Ler uma stringde no ma´ximo 50 caracteres e retire dessa stringtodos os espaços em branco. Sem utilize string auxiliar.\n");

    char str[51];
    int tam, count = 0, i;

    printf("Digite uma frase para retirar os espaços: \n");
    fflush(stdin);
    gets(str);

    tam = strlen(str);

    for(i = 0; i < tam; i++){

        if(str[i]!=' '){
            str[count++]=str[i];
        }
        printf("%s\n",str);
    }

        str[count] = 0;
     printf("\nA frase sem espaço: \n%s\n", str);

return 0;
}

int ex10(){
/*
            ENTRADA                         SAIDA
            vai mundo vai, vai              1,11  2 total
            vai mundo vai, mundo            5     1 total


            observação: o programa econtra um erro na contagem
*/
    printf("\n10 -Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.\n");

    char str[51], str2[4], aux[4];
    int tam, i, j, aux2;

    printf("Digite a primeira string\n");
    fflush(stdin);
    gets(str);

    printf("Digite a segunda string\n");
    fflush(stdin);
    gets(str2);

    tam = strlen(str);

    for(i = 0; i < tam; i++){

            aux[4]= NULL;
        for(j = i; j-i != strlen(str2); j++){

            if(str[j] < tam){
                aux[i-j] = str[j];
            }
        }

        if(strcmp(str2, aux) == 0){
            printf("\nA segunda string aparece na posição : %i\n",i +1);
            aux2++;
        }

    }
    printf("\nlocal? %i\n",aux2+1);
return 0;
}

