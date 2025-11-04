//lectura de ficheros
#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE *archivo;
    char linea[256]="esta linea es la segunda\n";
    archivo=fopen("salida.txt","a"); //w lo machaca
    if (archivo==NULL){
    printf("No se pudo abrir el archivo");
    return 1;
    }
    else{
        fputs(linea,archivo);
        fclose(archivo);
        printf("Texto añadido\n");
    }
    
    return 0;
}