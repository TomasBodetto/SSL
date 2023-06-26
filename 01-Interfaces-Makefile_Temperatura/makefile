#Se define la variable CC como el compilador a utilizar, en este caso, gcc.
CC = gcc
#CFLAGS son las opciones de compilación que se utilizarán.
CFLAGS = -Wall -Wextra -std=c99

#se define el objetivo all, que se encargará de compilar el programa TablasDeConversion y ConversionTest
all: TablasDeConversion
all: ConversionTest

# Define la regla para compilar el archivo Conversion.c y generar el archivo
# objeto Conversion.o. Esta regla establece que Conversion.o depende de Conversion.c
# y Conversion.h, por lo que si alguno de estos archivos cambia, se volverá a
# compilar Conversion.o.
Conversion.o: Conversion.c Conversion.h
	$(CC) $(CFLAGS) -c Conversion.c


# Define la regla para compilar el archivo ConversionTest.c y generar el archivo
# objeto ConversionTest.o. ConversionTest.o
# depende de ConversionTest.c y Conversion.h.
ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) $(CFLAGS) -c ConversionTest.c


# Define la regla para compilar el archivo TablasDeConversion.c y generar el archivo
# objeto TablasDeConversion.o. 
# TablasDeConversion.o depende de TablasDeConversion.c y Conversion.h.
TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) $(CFLAGS) -c TablasDeConversion.c


#Define la regla para enlazar los archivos objeto Conversion.o y TablasDeConversion.o
# y generar el programa ejecutable TablasDeConversion. 
#Esta regla establece que TablasDeConversion depende de Conversion.o y 
#TablasDeConversion.o.
#Lo mismo para ConversionTest, para generar el porgrama ejecutable ConversionTest
TablasDeConversion: Conversion.o TablasDeConversion.o
	$(CC) $(CFLAGS) Conversion.o TablasDeConversion.o -o TablasDeConversion

ConversionTest: Conversion.o ConversionTest.o
	$(CC) $(CFLAGS) Conversion.o ConversionTest.o -o ConversionTest	

clean:
	rm -f *.o TablasDeConversion
	rm -f *.o ConversionTest