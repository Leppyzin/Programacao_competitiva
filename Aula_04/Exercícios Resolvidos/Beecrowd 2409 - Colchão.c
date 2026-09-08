#include <stdio.h>

int passa(int a, int b, int c, int h, int l){
    if ((a <= h && b <= l) || (a <= l && b <= h)){
        return 1;
    }

    if ((a <= h && c <= l) || (a <= l && c <= h)){
        return 1;
    }

    if ((b <= h && c <= l) || (b <= l && c <= h)){
        return 1;
    }

    return 0;
}

int main(){
    int a, b, c, h, l;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d", &h, &l);

    if (passa(a, b, c, h, l)){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}
