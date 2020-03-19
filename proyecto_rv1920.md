# Proyecto de Realidad Virtual
# Curso 2019-2020

El objetivo de este proyecto será crear un programa que utilice OpenGL y la versión de Visual Studio que está instalada en las aulas (versión 2017), que cree un objeto en 3D siguiendo las indicaciones del artículo “Generation and visualization of root-like structures in a three-dimensional space”, Louise Y. Spek, 1997
En este artículo se hace referencia a los cuadernos de Leonardo da Vinci dónde se describe su regla del diámetro al cuadrado para la ramificación de las ramas de un árbol. Esta regla también se puede aplicar a las raíces de los árboles. La aplicación repetida de esta regla en un programa recursivo produce los diámetros de las ramas. El programa calcula la orientación de las ramas en un espacio tridimensional. La visualización muestra que, a partir de una estructura simétrica relativamente simple es posible generar estructuras más complejas y asimétricas en forma de raíz modificando solo algunos parámetros. La introducción de la aleatoriedad en los valores de los parámetros produce estructuras que difieren considerablemente en su arquitectura. El artículo añade también una fuerza adicional para influir en la orientación de nuevas ramas en el espacio y aumentar la flexibilidad de la formación de la estructura.
Para la realización del proyecto se constituirán equipos de 2 a 4 personas.

## Requisitos para superar la práctica:

Realizar una aplicación que, utilizando OpenGL, cree un modelo en 3D de la raíz de un árbol siguiendo las indicaciones del artículo [1]
1.	La aplicación debe contener menús y/o entradas de formulario en las que modificar los parámetros del algoritmo.
2.	El algoritmo implementado para la construcción de las raíces será recursivo.
3.	Se aplicarán texturas al objeto creado de forma que simulen un árbol real
4.	Realizar un objeto, siguiendo la misma técnica del articulo [1], que represente a un árbol completo (raíz y ramas sobre la superficie)
5.	Implementar movimientos de cámara que permitan visualizar las diferentes partes del objeto.
6.	Implementar un juego en primera persona que consista en capturar objetos que están situados en las diferentes partes del árbol. El personaje irá saltando de una rama a otra de las raíces y de las ramas sobre la superficie. Cada objeto tendrá una puntuación diferente y ganará aquel jugador que consiga obtener más puntos a través de la captura de objetos y mediante el desplazamiento por las diferentes partes del árbol.
Para superar la práctica en los equipos de dos personas será necesario realizar al menos los puntos 1 y 2, valorándose la calidad de los resultados obtenidos. Con una ejecución correcta de estos apartados se obtendrá la calificación de 7 puntos en la práctica. Si alguno de los objetivos no es alcanzado en su totalidad y se realiza de forma imprecisa o con errores entre las diferentes partes del objeto, la puntuación se verá reducida. 
Para los equipos tres personas será necesario realizar los puntos 1, 2, 3 y 4 para superar la práctica, obteniendo un máximo de 7 puntos si todos los objetivos están completados correctamente. 
En el caso de los equipos de 4 personas será necesario realizar al menos los puntos 1, 2 ,3, 4 y 5 para superar la práctica obteniendo un máximo de 7 puntos si todos los objetivos están completados correctamente.
Para conseguir los puntos restantes hasta alcanzar los 9 puntos los equipos podrán realizar alguna de las características no obligatorias para su grupo. Un punto por cada característica adicional realizada correctamente.
Adicionalmente se pueden obtener puntos extra colaborando con componentes de otros equipos en la realización del apartado 6. El profesor valorará el resultado obtenido en la realización del juego, otorgando a todos los participantes los mismos puntos adicionales hasta un máximo de 3 puntos extra. Esto obliga al equipo de 4 personas a colaborar con componentes de otros equipos en la realización de alguna característica del juego y a aquellos componentes que deseen alcanzar la puntuación de 10 a colaborar para realizar algunas de las funcionalidades del juego.
Para la ejecución de los proyectos se utilizará el estándar GIT y deberá al menos conocer los comandos básicos y sus argumentos en línea de comando (clone, add, commit, push y pull). Mi recomendación es utilizar los accesos al repositorio a través de línea de comando sin utilizar herramientas gráficas para la gestión.
Con el fin de gestionar de una forma más adecuada las diferentes tareas a realizar, se crearán Issues por cada tarea pendiente y se finalizarán añadiendo la palabra fixes #<num_issue> dentro del comentario del comando commit.
 
## Referencias
[1] “Generation and visualization of root-like structures in a three-dimensional space”, Louise Y. Spek, 1997
[2] Material de las prácticas de laboratorio del profesor Francisco Moreno Velo
    http://www.uhu.es/francisco.moreno/gii_rv/
