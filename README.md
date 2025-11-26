Gimnasio – Segundo Avance
Descripción del problema

En un gimnasio es importante llevar un control básico de los clientes, los entrenadores, las clases que se imparten y las membresías disponibles.

En este segundo avance, el proyecto se amplía para representar mejor cómo funciona un gimnasio real, incorporando nuevas clases y relaciones entre ellas mediante un diagrama de clases UML.

Este avance se enfoca en diseñar y modelar la estructura del sistema antes de implementar funcionalidades más complejas como herencia o composición.

¿Qué hace el programa en este avance?

El programa sigue creando objetos para demostrar que las clases funcionan correctamente, pero ahora incluye más elementos del gimnasio:

Crea una membresía (por ejemplo, “Mensual”).

Crea un cliente del gimnasio y le asigna una membresía.

Crea un entrenador con su especialidad.

Crea una clase de gimnasio (por ejemplo, “Spinning”) y asigna un entrenador.

Crea un objeto Gimnasio que almacena listas de clientes, entrenadores y clases.

Muestra información de cada objeto para comprobar que los métodos funcionan.

Además, en este avance:

Se agregaron más atributos y métodos a las clases.

Se ajustaron nombres para que coincidan con el diagrama UML.

Se generó el diagrama de clases UML que muestra relaciones entre las clases:
Cliente–Membresía, ClaseGimnasio–Entrenador y Gimnasio como contenedor general.

Por ahora, el programa solo imprime información en consola, ya que la intención es validar el diseño de las clases.

Componentes del modelo (Segundo Avance)

El sistema ahora modela, de forma sencilla:

Clientes del gimnasio.

Entrenadores y su especialidad.

Membresías que definen el acceso.

Clases de gimnasio con horario y entrenador asignado.

Un objeto Gimnasio, que organiza todo lo anterior.

Estas clases aparecen en el diagrama UML con sus atributos, métodos y relaciones, preparando la estructura para implementar herencia y composición en el siguiente avance.

¿Cómo se usa?

Compila el proyecto (ejemplo con g++):

g++ -std=c++11 main.cpp Cliente.cpp Entrenador.cpp Membresia.cpp ClaseGimnasio.cpp Gimnasio.cpp -o gym_app


Ejecuta el programa para ver cómo se crean los objetos y se muestra su información.
