#include <stdlib.h>
#include <stdio.h>

int main(){

    //punto 1
    int n1,n2;
    printf("¿De que tamaño debe ser el arreglo? (Mayor a 7 de preferencia)");
    scanf("%d",&n1);
    char arr1[n1];

    //punto 2
    for(int i = 0; i < n1; i++){
        arr1[i] = 97 + random() % 15;
    }
    
    //punto 3
    printf("%c\n",arr1[7]);

    //punto 4
    int arr2[n2];
    printf("¿De que tamaño debe ser el arreglo?");
    scanf("%d",&n2);

    //punto 5
    printf("¿Que valor quieres para el elemento [4]?");
    scanf("%d",&arr2[4]);

    //punto 6
    float arr3[100];
    float *p;
    float resultado = 0;
    p = &arr3[0];
    //p += 100;
    //punto 7
    for(int i = 1; i < 100; i++){
        arr3[i] = random() % 10;
        //p = &arr3[i];
        resultado += p[i];
    }

    printf("%f",resultado);
}