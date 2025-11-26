#include "Trainer.h"

Trainer::Trainer(const std::string &name, const std::string &specialty, int yearsExperience)
    : name(name), specialty(specialty), yearsExperience(yearsExperience) {}

std::string Trainer::getName() const {
    return name;
}

std::string Trainer::getSpecialty() const {
    return specialty;
}

int Trainer::getYearsExperience() const {
    return yearsExperience;
}

void Trainer::setName(const std::string &name) {
    this->name = name;
}

void Trainer::setSpecialty(const std::string &specialty) {
    this->specialty = specialty;
}

void Trainer::setYearsExperience(int yearsExperience) {
    this->yearsExperience = yearsExperience;
}

std::string Trainer::getProfile() const {
    return "Entrenador: " + name +
           " | Especialidad: " + specialty +
           " | Años de experiencia: " + std::to_string(yearsExperience);
}

std::string Trainer::assignRoutine(const Member &member, const std::string &routineName) const {
    return "El entrenador " + name +
           " asignó la rutina \"" + routineName +
           "\" al miembro " + member.getName() + ".";
}
