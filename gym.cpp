#include "Gym.h"
#include <iostream>

Gym::Gym(const std::string &name) : name(name) {}

void Gym::addMember(const Member &member) {
    members.push_back(member);
}

void Gym::addTrainer(const Trainer &trainer) {
    trainers.push_back(trainer);
}

void Gym::addExercise(const Exercise &exercise) {
    exercises.push_back(exercise);
}

void Gym::showMembers() const {
    std::cout << "\n=== Miembros en " << name << " ===\n";
    for (const auto &m : members) {
        std::cout << m.getInfo() << std::endl;
    }
}

void Gym::showTrainers() const {
    std::cout << "\n=== Entrenadores en " << name << " ===\n";
    for (const auto &t : trainers) {
        std::cout << t.getProfile() << std::endl;
    }
}

void Gym::showExercises() const {
    std::cout << "\n=== Ejercicios en " << name << " ===\n";
    for (const auto &e : exercises) {
        std::cout << e.getDescription() << std::endl;
    }
}
