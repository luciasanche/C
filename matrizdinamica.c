#include <stdio.h>
#include <stdlib.h>
#define T 1000000

int main(int argc, char *argv[]){
    int m = atoi(argv[argc-2]);
    int p = atoi(argv[argc-1]);
    int i,j;
    int res;
    long** a =(long**) malloc(m*sizeof(long*));

    for(i=0; i<m; i++){
        a[i] = (long *) malloc(p*sizeof(long));
    }

    /*long a[m][p];*/
    if( a == NULL){
        res = 71;
    }else{
        for(j=0; j<p; j++){
            a[0][j] = 1;
        }
        for(i=0; i<m; i++){
            a[i][0] = 1;
        }
        for(i=1; i<m; i++){
            for(j=1; j<p; j++){
                if((a[i][j]=a[i-1][j] + a[i][j-1]) > T){
                    a[i][j] = 1;
                }
            }
        }
        for(i=0; i<m; i++){
            for(j=0; j<p; j++){
                printf("%li\t", a[i][j]);
            }
            printf("\n");
        }
        res = 0;
        free(a);
    }
    return res;
}
