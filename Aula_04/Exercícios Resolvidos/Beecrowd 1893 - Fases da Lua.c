#include <stdio.h>

int nova(int b){
    return b <= 2;
}

int cheia(int b){
    return b >= 97;
}

int crescente(int a, int b){
    return b > a;
}

int main(){
    int a, b;

    scanf("%d%d", &a, &b);

    if(nova(b)){
        printf("nova\n");
    }
    else if(cheia(b)){
        printf("cheia\n");
    }
    else if(crescente(a, b)){
        printf("crescente\n");
    }
    else{
        printf("minguante\n");
    }

    return 0;
}
