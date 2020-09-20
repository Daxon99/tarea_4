#include <stdio.h>
#include <stdlib.h>
#include "personaje.h"
void capturar_enteros()
{
    int enteros [5];
    float promedio;
    int suma = 0;
    for (size_t i=0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i=0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }
    for (size_t i=0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }
    printf("suma: %i", suma);
    printf("\n");
    printf("promedio: %f", suma/5.0);
    printf("\n");
    system("pause");
    system("cls");

}
void mostrar (int n, char cadena[])
{
    for (size_t i= 0; i<n; i++)
    {
        printf("%s", cadena);
    }
}
int main()
{
    char op;
    char cadena[20];
    int n;
    do
    {
        printf("1) Capturar Enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agrear Personaje\n");
        printf("4) Mostrar Personajes\n");

        printf("0) Salir\n");
        scanf("%c", &op);
        switch (op)
        {
    case '1':
        capturar_enteros();
        break;
    case '2':
        printf("Escribe una cadena de hasta 20 caracteres: ");
        fflush(stdin);
        fgets(cadena, sizeof(cadena), stdin);
        printf("n: ");
        scanf("%i", &n);
        mostrar(n, cadena);
        break;

    case '3':
        capturar_personajes();
        break;

    case '4':
        mostrar_personajes();
        break;

    default:
        break;
        }
        fflush(stdin);

    }while (op!='0');
    return 0;
}
