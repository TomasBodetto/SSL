#include "Conversion.h"
#include <assert.h>
#include <stdio.h>
/*
En este archivo se realiza una prueba de las funciones de conversión definidas
en Conversion.c.
Se incluye el archivo Conversion.h para tener acceso a los prototipos
de las funciones.
La función testConversion se encarga de realizar las pruebas.
Se utilizan los assert para verificar que los resultados de las conversiones
sean los esperados.
La función main llama a testConversion para ejecutar la prueba.
*/

void testConversion()
{
    double celsius = Celsius(32.0);
    double fahrenheit = Fahrenheit(0.0);
    assert(celsius == 0.0);
    /*assert(celsius == 4.0);       prueba con error*/
    assert(fahrenheit == 32.0);
}

int main()
{
    testConversion();
     printf("Test realizado");
    return 0;
}