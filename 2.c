#include <stdio.h>
#include <stdlib.h>
float pi = 3.1415;

int input(){
    int n;
    printf("\nDigite um numero inteiro: ");
    scanf("%d",&n);
    return n;
}

void multQuatro(){
    int a = input();

    if(a%4==0){
        printf("%d e multiplo de 4", a);
    }
    else{
        printf("%d nao e multiplo de 4", a);
    }

}

void parImpar(){
    int a = input();
    if(a%2==0){
        printf("%d e par", a);
    }
    else{
        printf("%d e impar", a);
    }
}

void somaEntre(){
    int a = input(), soma =0;
    while(a<0){
        printf("Digite um inteiro positivo");
        a = input();
    }

    int b = input();
    while(b<0){
        printf("Digite um inteiro positivo");
        b= input();
    }

    if(a>b){
        for(int i = b+1;i<a; i++){
            soma += i;
        }
    }
    else{
        for(int i = a+1;i<b; i++){
            soma += i;
        }
    }
    printf("%d",soma);
}

void volumeEsfera(){
    float raio,volume;
    printf("Informe o Raio da Esfera: ");
    scanf("%f",&raio);

    volume = (4.0*pi*raio*raio*raio)/3.0;
    printf("%.2f",volume);
}
int main(){
    multQuatro();
    parImpar();
    somaEntre();
    volumeEsfera();
    return 0;
}