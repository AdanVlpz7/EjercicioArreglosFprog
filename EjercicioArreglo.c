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
    printf("%d",arr1[7]);

    //punto 4
    int arr2[n2];
    printf("¿De que tamaño debe ser el arreglo?");
    scanf("%d",&n2);

    //punto 5
    printf("¿Que valor quieres para el elemento [4]?");
    scanf("%d",arr2[4]);

    //punto 6
    float arr3[100];

    //punto 7
    for(int i = 0; i < 100; i++){
        arr3[i] = random() % 100;
    }

    //punto 8
    float suma;
     
}