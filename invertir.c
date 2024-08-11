#include<stdio.h>

int invertirLinea(int n){
        int i = -1;
        int aux[M];
        int a;
        aux[++i] = n;
        while (i<M && scanf("%i", &n) == 1){
                aux[++i]=n;
        }
        for(a=i; a>=0; a--){
if(a!=0)
                printf("%i ", aux[a]);
        else
printf("%i", aux[a]);
}
        printf("\n");

        return 0;
}

int main (){
        int j = 0;
        int n = 0;
        char c = '0';
        while ((j=scanf("%i", &n))!=-1){
                if(j==1){
                        invertirLinea(n);
                }else {
                        scanf("%s", &c);
                }

        }
        return 0;
}
