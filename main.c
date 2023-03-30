// /*Ingresar un texto y contar cuántas vocales y consonantes hay. Considerar las mayúsculas
//y las minúsculas iguales*/
#include<stdio.h>
int main()
{
    char texto[100];
    int contv=0, contc=0, i;
    printf("Ingrese un texto");
    fflush(stdin);
    gets(texto);
    for(i=0; texto[i]!='\0'; i++)
    {
        if(texto[i]=='a'|| texto[i]=='e'|| texto[i]=='i'|| texto[i]=='o'|| texto[i]=='u'|| texto[i]=='A'||texto[i]=='E'||texto[i]=='I'||texto[i]=='O'||texto[i]=='U')
        contv++;
        else
            contc++;
    }
    printf("La cantidad de vocales presentes en el texto es de %d, mientras que la cantidad de consonantes es de %d", contv, contc);

    return 0;

}