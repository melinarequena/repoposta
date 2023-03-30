// //INGRESADO UN TEXTO MOSTRAR COMO RESULTADO LA CANTIDAD DE VECES QUE APARECIO LA LETRA A,
#include<stdio.h>
int main()
{
    char texto[100];
    int i, cont=0;
    printf("Ingrese un texto:\n");
    gets(texto);
    for(i=0; i<100; i++)
    {
        if (texto[i]=='A' || texto[i]=='a')
            cont++;
    }
    printf("La cantidad de veces que aparece la letra a en el texto es de %d", cont);
    return 0;
}