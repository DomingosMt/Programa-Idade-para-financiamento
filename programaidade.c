#include <stdio.h>

int main()
{
    char nome [50];
    int idade;
    
    printf("*** APURAÇÃO DE IDADE PARA FINANCIAMENTO ***\n\n");

    printf("Digite o seu nome\n");
    scanf(" %49[^\n]", nome);
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    puts("");

    // Criança < 12
    // Adolescente 12 <= x < 18
    // Adulto 18 <= x <60
    // Idoso > 60

    // Caso idade = 0

    while (idade == 0)
    {
        printf("Insira um valor válido! \n");
        scanf("%d", &idade);
    }

    // Dados inseridos
    
    printf("*** INFORMAÇÕES ***\n\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n\n", idade);
    
    // Verificação das idades para eligibilidade do financiamento, conforme o valor inserido pelo cliente 

    if (idade < 12)
    {
        printf("Para o financiamento bancário, você precisa ter pelo menos 18 anos completos!\n");
    }
    else if (idade >= 12 && idade < 18)
    {
        printf("Para o financiamento bancário, você precisa ter pelo menos 18 anos completos!\n");
    }
    else if (idade >= 18 && idade < 40)
    {
        printf("Você consegue financiar o seu imóvel!\n");
    }
    else if (idade >= 40 && idade < 60)
    {
        printf("Você consegue financiar o seu imóvel! Porém, o banco pode restringir o seu prazo de financiamento!\n");
        printf("Para mais informações, entre em contato com um de nossos corretores.");
    }
    else
    {
        printf("Infelizmente, devido à sua idade avançada, o banco pode negar o seu crédito de financiamento!\n");
        printf("Para mais informações, entre em contato com um de nossos corretores.");
    }
    
    // Fim do programa!
}