#include "Conversion.h"
#include <stdio.h>

/*
Este archivo contiene las funciones para imprimir las tablas de conversión
de temperaturas.
*/


/*La función PrintFila imprime una fila de la tabla con los valores de temperatura
original y convertida.*/
void PrintFila(double value1, double value2)
{
    printf("%8.2f  %8.2f\n", value1, value2);
}

/*La función PrintFilas recibe como argumentos un puntero a función que indica la
función de conversión a utilizar, un límite inferior, un límite superior
y un incremento. Itera sobre los valores en ese rango, realiza la conversión
y llama a PrintFila para imprimir cada fila.*/
void PrintFilas(double (*convert)(double), double lower, double upper, double step)
{
    for (double value = lower; value <= upper; value += step)
    {
        double convertedValue = convert(value);
        PrintFila(value, convertedValue);
    }
}

/*La función PrintTablaCelsius imprime la tabla de conversión de Celsius
a Fahrenheit llamando a PrintFilas con la función Fahrenheit como argumento.*/
void PrintTablaCelsius(double lower, double upper, double step)
{
    printf("Celsius  Fahrenheit\n");
    printf("-------------------\n");
    PrintFilas(Fahrenheit, lower, upper, step);
}

/*La función PrintTablaFahrenheit imprime la tabla de conversión de Fahrenheit
a Celsius llamando a PrintFilas con la función Celsius como argumento.*/
void PrintTablaFahrenheit(double lower, double upper, double step)
{
    printf("Fahrenheit  Celsius\n");
    printf("-------------------\n");
    PrintFilas(Celsius, lower, upper, step);
}

/*La función PrintTablas imprime ambas tablas llamando a PrintTablaCelsius
y PrintTablaFahrenheit.*/
void PrintTablas()
{
    double lower = 0.0;
    double upper = 100.0;
    double step = 10.0;

    printf("Tabla de Celsius a Fahrenheit:\n");
    PrintTablaCelsius(lower, upper, step);

    printf("\n");

    printf("Tabla de Fahrenheit a Celsius:\n");
    PrintTablaFahrenheit(lower, upper, step);
}

/*La función main llama a PrintTablas para ejecutar el programa.*/
int main()
{
    PrintTablas();
    return 0;
}