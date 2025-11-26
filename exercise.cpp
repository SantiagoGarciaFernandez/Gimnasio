#include "Exercise.h"

Exercise::Exercise(const std::string &name, int sets, int reps, double weightKg)
    : name(name), sets(sets), reps(reps), weightKg(weightKg) {}

std::string Exercise::getName() const {
    return name;
}

int Exercise::getSets() const {
    return sets;
}

int Exercise::getReps() const {
    return reps;
}

double Exercise::getWeightKg() const {
    return weightKg;
}

void Exercise::setName(const std::string &name) {
    this->name = name;
}

void Exercise::setSets(int sets) {
    this->sets = sets;
}

void Exercise::setReps(int reps) {
    this->reps = reps;
}

void Exercise::setWeightKg(double weightKg) {
    this->weightKg = weightKg;
}

void Exercise::increaseWeight(double deltaKg) {
    weightKg += deltaKg;
}

std::string Exercise::getDescription() const {
    return "Ejercicio: " + name +
           " | Series: " + std::to_string(sets) +
           " | Reps: " + std::to_string(reps) +
           " | Peso: " + std::to_string(weightKg) + " kg";
}
