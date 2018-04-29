#include <stdio.h>

int main()
{
    FILE *archivo;
    char buffer[50] = "Hello world";
    archivo = fopen("output.txt","w+");

    if (archivo == NULL)
    {
        printf("\nError de apertura del archivo. \n");
    }
    else
    {
        printf("Hello World.. \n");
        fprintf(archivo, buffer);

    }
    fclose(archivo);
    return 0;
}