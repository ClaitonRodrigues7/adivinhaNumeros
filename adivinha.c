#include <stdio.h>

int main () {

int num, minimo =1, maximo = 99, alt;

printf("Pense em um numero:\n");
printf("Pensou?:\n");

while (alt != 3){
    num = minimo + (maximo - minimo)/2;
    printf("Numero sugerido: %d\n", num);

    printf("Caso o numero seja maior digite 1\n");
    printf("Caso o numero seja menor digite 2\n");
    printf("Caso o numero seja igual digite 3\n");
    scanf("%d", &alt);

    if (alt == 1){
        minimo = num -1;

    }else if(alt == 2){
             maximo = num +1;

             }else if(alt == 3){

            printf("AEEEE ACERITEIn");
            printf("O numero pensado foi:%d\n", num);

             }

}



}
