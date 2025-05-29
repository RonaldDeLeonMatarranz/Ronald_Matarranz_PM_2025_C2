#include <stdio.h>
#include <stdlib.h>

int main(){
    int edad;
    //Programa que determina el rango de edad de una persona:
    //1-Recien nacido: Persona de edad menor a un año.
    //2-Infante: Edad entre a 3 anos.
    //3-Niño: Edad entre 3 y 12.
    //4-Adolecentes: Edad mayor a 12 menor de 10.
    //5-Mayor de edad: Una persona mayor de 18 y menor de 38.
    //6-Addulto mayor: Es una persona mayor de 38 y menor de 68.
    //7-Envegeciente: Mayor de 60 y menor 86.
    //8-Anciano: Es mayor de 86 años.

    printf("Clase de seleccion!\n");
    printf("Ingrese su edad: ");
    scanf("%i", &edad);

    if (edad >= 0 && edad <= 120)
    {
        if (edad < 1)
        {
            printf("Usted es un recien nacido");
        }
        else if (edad >= 1 && edad <= 3)
        {
            printf("Usted es un infante");
        }
        else if (edad > 3 && edad <= 12)
        {
            printf("Usted es un niño");
        }
        else if (edad > 12 && edad < 18)
        {
            printf("Usted es un adolescente");
        }
        else if (edad >= 18 && edad < 38)
        {
            printf("Usted es mayor de edad");
        }
        else if (edad >= 38 && edad < 60)
        {
            printf("Usted es un adulto mayor");
        }
        else if (edad >= 60 && edad < 86)
        {
            printf("Usted es un envejeciente");
        }
        else if (edad >= 86)
        {
            printf("Usted es un anciano");
        }
        else
        {
            printf("n\Caso no evaluado");
        }
    }
    else
    {
        if (edad < 0)
        {
            printf("Error: Usted no ha necido :D\n");
        }
        else
        {
            printf("Error: Usted es un vampiro\n");
        }
    }

    return 0;
}
