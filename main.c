//mas dificil: ingresar un texto y ver cuantas palabras son capicuas
#include<stdio.h>
#include<string.h>
int main()
{
    char texto[500], *palabra;
    int cont=0, i, longitud, cont2=0;
    printf("Ingrese un texto:\n");
    fflush(stdin);
    gets(texto);
    palabra=strtok(texto, " ,.;:!?");
    while(palabra!=NULL)
    {
        longitud = strlen(palabra);
        for (i = 1; palabra[i] != longitud / 2; i++)
        {
            if (palabra[longitud] - i == palabra[i])
                cont++;
        }
        if(cont==longitud/2)
        {
            cont2++;
        }
    }palabra=strtok(NULL, "!;:,.");
printf("La cantidad de palabras capicuas es de %d", &cont2);
return 0;
}