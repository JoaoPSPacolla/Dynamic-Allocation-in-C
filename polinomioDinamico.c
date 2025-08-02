#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int grau=0;
    
    scanf("%d",&grau);
    
    int qtdCoefi = grau + 1;
    
    //Ponteiro alocado dinamicamente tem um comportamento parecido com o de um array, porém com valor não fixo
    float* coeficientes = malloc(qtdCoefi * sizeof(float));
    
    
    //Verificando se a alocação deu certo
    if(coeficientes == NULL){
        //alocação deu ruim
        printf("Alocação de memória falhou");
        return 1;
    }
    else{
        float x = 0;
        float total = 0;
        
        //Dando entrada nos coeficientes
        for(int i=0;i<qtdCoefi;i++){
            scanf("%f",&coeficientes[i]);
        }
        
        //Printando só por teste
        /*for(int i=0;i<qtdCoefi;i++){
            printf("%.2f ",coeficientes[i]);
        }*/
        
        scanf("%f",&x);
        
        for(int i=0;i<=grau;i++){
            total += coeficientes[i] * pow(x,i);
        }
        
        printf("%.2f",total);
    }
    
    printf("\n");
    
    free(coeficientes); //Liberando o espaço armazenado depois de usá-lo
    coeficientes = NULL;
    
    return 0;
}