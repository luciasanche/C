#include <stdio.h>

int main(int argc, char* argv[]){
    FILE *file;
    float a;
    float max;
    float min;
    int res;
    file = fopen(argv[1], "r");
    /*no hay ningun argumento de entrada o el fichero no se puede leer*/
    if (argc == 1 || file == NULL){
        res = -1;
    }
    /* si el fichero esta vacio no modifica max y min*/
    else if ( fscanf(file, "%f", &a) == EOF){
        printf("0.00 0.00\n");
        fclose(file);
        res = 0;
    }else {
        max = a;
        min = a;
        while(fscanf(file, "%f", &a) != EOF){
            if (a < min){
                 min = a;
            } else if (a > max){
                 max = a;
            }
        }
        printf("%10.2f %10.2f\n", max, min);
        fclose(file);
        res = 0;
    }
    return res;
}