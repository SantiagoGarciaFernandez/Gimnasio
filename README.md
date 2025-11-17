# Gimnasio

# Gym – Gestor sencillo de un gimnasio

## Descripción del problema

En un gimnasio es necesario llevar un control básico de las personas que entrenan, 
los ejercicios que realizan y los entrenadores que los apoyan. 


Este proyecto modela, de forma sencilla, algunos elementos básicos de un gimnasio 
usando Programación Orientada a Objetos en C++:
- **Ejercicios** que un miembro puede realizar.
- **Miembros** del gimnasio.
- **Entrenadores** que pueden asignar rutinas.

## ¿Qué hace el programa?

El programa:
- Crea un ejercicio de gimnasio (por ejemplo, “Bench press”).
- Crea un miembro del gimnasio con su nivel.
- Crea un entrenador con su especialidad.
- Muestra información de cada objeto.
- Demuestra algunas acciones:
  - Aumentar el peso de un ejercicio.
  - Cambiar el nivel de un miembro.
  - Simular que un entrenador asigna una rutina a un miembro.

Por ahora **solo imprime información en consola** para comprobar que las clases y 
sus métodos funcionan correctamente.


## ¿Cómo se usa?

1. Compila el proyecto (ejemplo con `g++`):

   ```bash
   g++ -std=c++11 main.cpp Exercise.cpp Member.cpp Trainer.cpp -o gym_app
