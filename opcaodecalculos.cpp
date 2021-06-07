#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    main()
{
    int num1,num2,soma,produto,opcao;
    float media,aumento;
        printf("\nDigite um numero escolhido: ");
        scanf("%i",&num1);
        printf("\nDigite outro numero escolido: ");
        scanf("%i",&num2);
        printf("\nEscolha uma opcao para voce saber: \n1 - media, \n2 - soma, \n3 - produto, \n4 - aumento de 10%, \n5 - Todos os calculos \n");
        scanf("%i",&opcao);
            switch(opcao)
            {case 1: media = (num1 + num2)/2;
                printf("\nA media vai ser: %.2f",media);
                break;
            case 2: soma = num1 + num2;
                printf("\nA soma vai ser: %i",soma);
                break;
            case 3: produto = num1 * num2;
                printf("\nO produto vai ser: %i",produto);
                break;
            case 4: aumento = num1 * 1.1;
                printf("\nO aumento de 10 porcento vai ser: %.2f",aumento);
                
                break;
            case 5: 
                media = (num1 + num2)/2;
                soma = num1 + num2;
                produto = num1 * num2;
                aumento = num1 * 1.1;
                printf("\nTodos os calculos foram: ");
                printf("\nA media: %.2f",media);
                printf("\nA soma: %i",soma);
                printf("\nO produto: %i",produto);
                printf("\nO aumento de 10 porcento: %.2f",aumento);
                break;
            default: printf("\nVoce digitou uma opcao invalida, por favor escolha 1,2,3,4 ou 5!!!");
            }
}
