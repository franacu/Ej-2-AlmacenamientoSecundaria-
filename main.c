//Escribir un programa que lea la información de un archivo y la muestre por pantalla.

#include <stdio.h>

int main()
{
    char archivo[]="ejercicio2.txt";
    FILE *fp;
    fp= fopen(archivo,"a");
    if(fp==NULL)
    {
        printf("No se abrio el archivo\n");
        return -1;
    }else
        {
            printf("Se creo con exito\n");
            fprintf(fopen(archivo,"a"),"Hola padre\n"); //lo pongo con a para agregar mas info..
        }
    //Despues de agregar mensaje al archivo, lo "copiamos" y lo mostramos por terminal
    fp= fopen(archivo,"r");     //r -> modo lectura
    char texto[256];
    while (fgets(texto,sizeof(texto),fp)!=NULL)
    {
        printf("%s",texto);
    }
    fclose(fp);
    return 0;
}
