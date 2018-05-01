# Sintaxis y Semántica de los Lenguajes


### Autores de la resolución:

Usuario github: __janielHernandez__

Legajo:__1507679__

Apellido: __Hernandez__

Nombre: __Janiel__

Número y título del trabajo: __01-FasesErrores__

Repositorios: __[Link](https://github.com/janielHernandez/SSL/tree/master/01-FasesErrores)__


## Preprocesar hello2.c

#### __comandos utilizados__

gcc -E hello2.c -o hello2.i

#### __Errores:__  
Ninguno, en esta etapa solo se completan las directivas al preprocesador. Por ejemplo se reemplazan
las constantes definidas por su respetivos valores.

#### Analisis
Se obseva que en la fase de preprocesamiento de reemplazó el comentario por un espacio en blanco, 
también se observa que la directiva #define <stdio.h> se reemplaza por el contenido del archivo de
cabecera stdio.h, con todos los prototipos de funciones que este contiene, como asi también los 
tipos de datos definidos dentro del mismo. Se puede observar que no da error, ya que en esta 
etapa no se hace llamado a funciones externa.



## Semántica de la primera linea de hello3.c
La semántica de la primera linea, es crear la directiva a la función printf que tiene como
objetivo formatear cadena y mostrarlo por consola. La misma devuelve el numero de caracteres
impresos. 


## Comparación entre hello2.i y hello3.i 

#### __comandos utilizados__

gcc -E hello3.c -o hello3.i

#### __Errores:__  
Ninguno

#### Analisis
La principal diferencia observada es que hello3.c solo hace llamado a la función printf de 
la libreria estandar de entrada y salida, en cambio hello2.c si, debido a que tiene definido
el include a la misma. También se observa que el printf en hello2.c tiene un extern ya que
se hace un llamado externo a la libreria.


## Generar archivo .s 

#### __comandos utilizados__

gcc -S hello3.c -o hello3.s

#### __Errores:__ 

- Me tira un warning declaracion implicita de prontf, pero ningún error.
- Me dice que esperaba una declaracion al final de la entrada. Esto es debido a que falta una llave de cierre.


## Generar archivo hello4.c y hello4.s

#### __comandos utilizados__

gcc -S hello4.c -o hello4.s

#### __Errores:__ 
- Me tira un warning pidiendome un argumento para printf, ya que estoy poniendo el placeholder %d y no le estoy pasando un numero entero.

### Análisis

El archivo hello4.s contiene el código en lenguaje ensamblador que es entendible por el procesador. 
el lenguaje C nos asegura que el codigo ensamblador generado es el propio de la arquitectura de 
la maquina que estemos utilizando. En el codigo hello4.c podemos ver la declaraciones de variables 
y los llamados a funciones, etc.


## Vincular hello4.o con la biblioteca estándar y generar el ejecutable


#### __comandos utilizados_

__crear arhivo .o:__ as -o hello4.o hello4.s  ó  gcc -c hello4.c
__Enlazar:__ gcc -o hello4 hello4.o

#### __Errores:__ 
- No me da ningun error de compilación, pero imprime un cero en lugar del placeholder %d. esto es porque no le estoy pasando a printf el argumento entero que requiere para su formateo.


### Corregir en hello5.c y generar el ejecutable

__comandos utilizados__
- gcc -o hello5 hello5.c

__Solución:__ sacar el placeholder %d.


### Análisis

Para corregir el error en tiempo de ejecución o bien se podia sacar el placeholder %d o bien se le podia pasar a printf el argumento entero requerido para que lo formatee a la cadena que muestra por consola. En mi caso opté por la primera opción, debido a esto la cadena mostrada no tiene ningun formato.

## Escribir hello7.c

#### __comandos utilizados:__
- gcc -o hello7 hello7.c

### Errores:
- Me tira un warning debido a que no hay ninguna declaración de printf.

### Análisis
El programa funciona debido a que aunque no declaramos la funcion printf, ya sea incluyendo la libreria estandar o declando el prototipo, el compilador crea una declaracion implicita basada en los parametros que yo le pase a la función y asume que retorna un entero.


  
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