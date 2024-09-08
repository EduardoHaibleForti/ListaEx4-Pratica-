#include <stdio.h>
#include <stdlib.h>

int main (){
    int a,b,mdc,mmc,produto;

    printf("Digite o primeiro numero inteiro positivo :");
    scanf("%d",&a);
    printf("Digite o segundo numero inteiro positivo :");
    scanf("%d",&b);

    produto=a*b;

    while(b!=0){
        int resto=a%b;
        a=b;
        b=resto;
    }
mdc=a;
mmc=produto/mdc;

 printf("MDC:%d\n",mdc);
 printf("MMC:%d\n",mmc);

 return 0;


}
