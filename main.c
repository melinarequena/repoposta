/*1. Una empresa registró para cada uno de sus N obreros la cantidad de horas trabajadas cada día durante el mes de septiembre pasado.
Hacer un programa que permita obtener:

a) Cantidad total de horas trabajadas por obrero en el mes.
b) Sueldo a cobrar por cada trabajador durante el mes de septiembre sabiendo que el precio por hora es de 80 $ y
superando las 8 horas diarias, las horas extraordinarias se pagan a razón de 1.5 veces la hora ordinaria.
*/
#include<stdio.h>
void cargar(int[100][30], int);
void total(int[100][30], int, int[100]);
void sueldo(float[100], int[100][30], int);

int main()
{
    int n, matriz[100][30], vhtot[100];
    float vsue[100];
    do{
        printf("Ingrese el numero de obreros para registrar su sueldo yy sus horas totales\n");
        scanf("%d", &n);
    } while(n<0 || n>100);

    printf("Carga de datos\n");
    cargar(matriz, n);
    total(matriz, n, vhtot);
    sueldo(vsue, matriz, n);
    return 0;
}
void cargar(int horas[100][30], int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<30; j++)
        {
            printf("Ingrese la  cantidad de horas trabajadas por el obrero numero %d, dia %d de septiembre\n", i+1, j+1);
            scanf("%d", &horas[i][j]);
        }
    }
}

void total(int horas[100][30], int n, int tot[100])
{
    int i, j;
    for(i=0; i<n; i++)
    {
        tot[i]=0;
        for(j=0; j<30; j++)
        {
            tot[i]=tot[i]+horas[i][j];
        }
        printf("La cantidad de horas trabajadas por el obrero %d en septiembre fue de %d\n", i+1, tot[i]);
    }
}

void sueldo(float sue[100], int horas[100][30], int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        sue[i]=0;
        for(j=0; j<30; j++)
        {
            if(horas[i][j]>8)
            {
                sue[i]=(sue[i]+(horas[i][j]*120)+8*80);
            }
            else
                sue[i]=horas[i][j]*80;
        }
        printf("El sueldo del trabajdor %d es de %.2f\n", i+1, sue[i]);
    }
}