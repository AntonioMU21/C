//lectura de ficheros
#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE *archivo;
        char linea[256];
        archivo=fopen("/etc/hosts","r"); //"/etc/passwd"
        if (archivo==NULL){
            printf("Error de apertura \n");
            return 1;
        }
        else{
            while(fgets(linea,sizeof(linea),archivo))
                printf("%s",linea);                
        }
        printf("lectura terminada\n");
        fclose(archivo);
    return 0;
}