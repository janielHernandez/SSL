# Sintaxis y Semántica de los Lenguajes


### Autores de la resolución:

Usuario github: __janielHernandez__

Legajo:__1507679__

Apellido: __Hernandez__

Nombre: __Janiel__

Número y título del trabajo: __01-FasesErrores__

Repositorios: __[Link](https://github.com/janielHernandez/SSL/tree/master/01-FasesErrores)__


## Preprocesar hello2.c

#### __comando utilizado__

gcc -E hello2.c -o hello2.i

#### __Error:__  
Ninguno, en esta etapa solo se completan las directivas al preprocesador. Por ejemplo se reemplazan
las constantes definidas por su respetivos valores.

#### Analisis
Se obseva que en la fase de preprocesamiento de reemplazó el comentario por un espacio en blanco, 
también se observa que la directiva #define <stdio.h> se reemplaza por el contenido del archivo de
cabecera stdio.h, con todos los prototipos de funciones que este contiene, como asi también los 
tipos de datos definidos dentro del mismo. Se puede observar que no da error, ya que en esta 
etapa no se hace llamado a funciones externa.



## Semántica de la primera linea de hello3.c




  
### Transcripción del enunciado:

- Escribir hello2.c, que es una variante de hello.c

 	#include <stdio.h>
 	int/*medio*/main(void){
 	int i=42;
 	prontf("La respuesta es %d\n");

- Preprocesar hello2.c, no compilar, y generar hello2.i. Analizar su contenido.

- Escribir hello3.c, una nueva variante:
	int printf(const char *s, ...);
	int main(void){
 	int i=42;
 	prontf("La respuesta es %d\n"
  );
- Investigar la semántica de la primera línea.
- Preprocesar hello3.c, no compilar, y generar hello3.i. Buscar diferencias entre hello3.c y hello3.
- Compilar el resultado y generar hello3.s, no ensamblar.
- Corregir  en  el  nuevo  archivo hello4.c y empezar  de  nuevo, generar hello4.s, no ensamblar.
- Investigar hello4.s.
- Ensamblar hello4.s en hello4.o, no vincular.
- Vincular hello4.o con la biblioteca estándar y generar el ejecutable.
- Corregir en hello5.c y generar el ejecutable.
- Ejecutar y analizar el resultado.
- Corregir en hello6.c y empezar de nuevo.
- Escribir hello7.c, una nueva variante:

	int main(void){
 	int i=42;
    printf("La respuesta es %d\n", i);
	}

- Explicar porqué funciona.