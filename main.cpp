#include <iostream>
#include "Exercise.h"
#include "Member.h"
#include "Trainer.h"

int main() {
    // Crear un ejercicio
    Exercise exercise("Bench press", 4, 10, 60.0);

    // Crear un miembro
    Member member("Santiago García", 1, "Intermedio");

    // Crear un entrenador
    Trainer trainer("Luis Pérez", "Hipertrofia", 5);

    // Mostrar información inicial
    std::cout << "=== Información inicial ===\n";
    std::cout << exercise.getDescription() << std::endl;
    std::cout << member.getInfo() << std::endl;
    std::cout << trainer.getProfile() << std::endl;

    // Probar métodos de modificación
    std::cout << "\n=== Modificando datos ===\n";
    exercise.increaseWeight(5.0);
    std::cout << "Después de aumentar el peso del ejercicio:\n";
    std::cout << exercise.getDescription() << std::endl;

    member.upgradeLevel("Avanzado");
    std::cout << "Después de cambiar el nivel del miembro:\n";
    std::cout << member.getInfo() << std::endl;

    std::string routineMessage = trainer.assignRoutine(member, "Pecho y tríceps");
    std::cout << routineMessage << std::endl;

    return 0;
}
