#include <stdlib.h>
#include <stdio.h>
#define T 64

int main(){
        int m =3;
        int n = 3;
        int p = 3;
        int x,y,i,j,a,s;
        int m1[T][T];
        int m2[T][T];


        scanf("%i", &m);
        scanf("%i", &n);
        scanf("%i", &p);
        for (x=0; x<m; x++){
                for(y=0; y<n; y++){
                        scanf("%i", &m1[x][y]);
}
        }
        for(x=0; x<n; x++){
                for (y=0; y<p; y++){
                       scanf("%i", &m2[x][y]);
                }
        }
        for (a=0; a<m; a++){
                for (i=0; i<p; i++){
                        s=0;
                        for (j=0; j<n; j++){
                                s +=(m1[a][j] * m2[j][i]);
                        }
if(i!=p-1){
                      printf("%i ",s);}
else
printf("%i",s);
                }
printf("\n");
        }
        return 0;
}
