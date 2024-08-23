#include <stdlib.h>
#include <stdio.h>
float k;
int input(){
    int n;
    printf("\nDigite um numero inteiro: ");
    scanf("%d",&n);
    return n;
}

void soma(){
    int a,b,c,soma=0;
    printf("Digite um valor inteiro maior que 1: ");
    scanf("%d",&a);
    b = input();
    c = input();
    
    if(b>c){
        for(int i = c+1;i<=b; i++){
            if(i%a==0)
                soma += i;
        }
    }
    else{
        for(int j = b+1;j<=c; j++){
            if(j%a==0)
                soma += j;
        }
    }
    printf("%d",soma);
}

void pesoIdeal(){
    float alt,peso_ideal;
    printf("Informe a altura: ");
    scanf("%f",&alt);
    peso_ideal = k * alt - k*100;
    printf("%f",peso_ideal);
}

void fatorial(){
    int n = input(),fatorial = 1;
    for(int i = n; i>0;i--){
        fatorial *= i;
    }
    printf("%d",fatorial);
}

void potencia(){
    int x = input();
    int y = input();
    int potencia = x;
    for(int l = 1; l<y;l++){
        potencia *= x;
    }
    printf("%d",potencia);
}

int main(){
    char sexo;
    soma();
    printf("Informe o sexo M/F: ");
    fflush(stdin);
    scanf("%c",&sexo);
    switch(sexo){
        case 'M': k=0.95;break;
        case 'F': k=0.85;break;
        default: printf("Erro");break;
    }
    pesoIdeal();
    fatorial();
    potencia();
    return 0;
}