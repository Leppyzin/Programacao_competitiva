#include <stdio.h>

int forma(long long int a, long long int b, long long int c){
    return a + b > c && a + c > b && b + c > a;
}

int equilatero(long long int a, long long int b, long long int c){
    return a == b && b == c;
}

int escaleno(long long int a, long long int b, long long int c){
    return a != b && b != c && a != c;
}

int isoceles(long long int a, long long int b, long long int c){
    return (a == b && a != c) ||
           (a == c && a != b) ||
           (b == c && b != a);
}

int retangulo(long long int a, long long int b, long long int c){
    return a * a == b * b + c * c ||
           b * b == a * a + c * c ||
           c * c == a * a + b * b;
}

int main(){
    long long int a, b, c;

    scanf("%lld%lld%lld", &a, &b, &c);

    if(!forma(a, b, c)){
        printf("Invalido\n");
        return 0;
    }

    if(equilatero(a, b, c)){
        printf("Valido-Equilatero\n");
    }
    else if(escaleno(a, b, c)){
        printf("Valido-Escaleno\n");
    }
    else if(isoceles(a, b, c)){
        printf("Valido-Isoceles\n");
    }

    if(retangulo(a, b, c)){
        printf("Retangulo: S\n");
    }
    else{
        printf("Retangulo: N\n");
    }

    return 0;
}
