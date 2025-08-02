#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alunos{
    char nome[150]; //dese modo estou criando um char com até 70 caracteres
    int ra;
    float p1;
    float p2;
} Aluno;

int main()
{
    int qtdAlunos = 0;
    
    scanf("%d",&qtdAlunos);
    // Limpar buffer após scanf
    while(getchar() != '\n');
    
    Aluno a[qtdAlunos];
    
    float* media = (float*) malloc(qtdAlunos * sizeof(float));
    
    //Inserindo dados
    for(int i=0;i<qtdAlunos;i++){
        fgets(a[i].nome,sizeof(a[i].nome),stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';
        scanf("%d",&a[i].ra);
        scanf("%f",&a[i].p1);
        scanf("%f",&a[i].p2);
        media[i] = (a[i].p1 + a[i].p2)/2;
        while(getchar() != '\n'); //necessário para começar uma nova ação
    }
    
    //Printando dados
    for(int i=0;i<qtdAlunos;i++){
        printf("%d\t%s\t%.2f\n", a[i].ra, a[i].nome, media[i]);
    }
    
    free(media);
    return 0;
}