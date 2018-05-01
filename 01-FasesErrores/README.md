# Sintaxis y Semántica de los Lenguajes


### Autores de la resolución:

Usuario github: _janielHernande_

Legajo:_1507679_

Apellido: _Hernandez_

Nombre: _Janiel_

Número y título del trabajo: _01-FasesErrores_

Repositorios: _[repositorio](https://github.com/janielHernandez/SSL)_


## Preprocesar hello2.c

#### __comando utilizado__

gcc -E hello2.c -o hello2.i

#### __Error:__  Ninguno, en esta etapa solo se completan las directivas al preprocesador. Por ejemplo se reemplazan las constantes definidas por su respetivos valores.

#### Analisis
Se obseva que en la fase de preprocesamiento de reemplazó el comentario por un espacio en blanco, 
también se observa que la directiva #define <stdio.h> se reemplaza por el contenido del archivo de
cabecera stdio.h, con todos los prototipos de funciones que este contiene, como asi también los 
tipos de datos definidos dentro del mismo. Se puede observar que no da error, ya que en esta 
etapa no se hace llamado a funciones externa.




  
### Transcripción del enunciado:

- Solicitar inscripción al Grupo Yahoo, la aprobación demora un par de días.
- Si no posee una cuenta GitHub, crearla.
- Crear un repositorio público llamado SSL.
- Escribir  el  archivo readme.md que actúa como front page del repositorio personal.
- Crear la carpeta 00-CHelloWorld.
- Escribir el archivo readme.md que actúa como front page de la resolución.
- Seleccionar, instalar, y configurar un compilador C11.
- Probar el compilador con un programa hello.c que envíe a stdout la línea Hello, World! o similar.
- Ejecutar el programa, y capturar su salida en un archivo de texto output.txt.
- Publicar en el repositorio  personal SSL la  carpeta 00-CHelloWorld con readme.md, hello.c, y output.txt.
- La última tarea es informar por email a UTNFRBASSL@yahoogroups.com
