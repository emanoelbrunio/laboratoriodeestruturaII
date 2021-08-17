/*Desenvolva um algoritmo contFib(n, k) que determina quantas
vezes o fib(k) é avaliado durante a procura de fib(n). (Considere k<n).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int contfib(int n, int k){

    if(n == k){
        return 1;
    }
    else {
        return fib(n-1, k) + fib(n-2, k);
    }
}

int fib(int n){
    if(n < 2){
        return n;
    }
    else {
        return fib (n-1) + fib(n-2);
    }
}

int main (void){
    int n, k;

    printf("\n\nInsira dois numeros: ");
    scanf("%d %d", &n, &k);

    //contfib(n, k);

    int m = contfib(n, k);
    printf("O Fibonacci de %d e calculado %d vezes dentro do Fibonnaci de %d", k, m, n);
    return 0;
}

/*void contfib (int n, int k){
    int cont = 0;
    int i;

    for(i = 0; i < n; i++){

        if (k < n){
            fib(k);
            cont = cont + 1;
        }
    }

    printf("N: %d\n", cont);
}

*/