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
        return fib(n-1) + fib(n-2);
    }
}

int fib(int n){
    if(n < 2){
        return n;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}

int main (void){
    int n, k;

    printf("\n\nInsira dois numeros: ");
    scanf("%d %d", &n, &k);

    //contfib(n, k);

    int m = contfib(n, k);
    printf("ContFib(%d, %d) = %d", n, k, m);
    return 0;
}
