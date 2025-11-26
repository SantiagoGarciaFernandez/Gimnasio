#ifndef TRAINER_H
#define TRAINER_H

#include <string>
#include "Person.h"
#include "Member.h"

class Trainer : public Person {
private:
    std::string specialty;
    int yearsExperience;

public:
    // Constructor
    Trainer(const std::string &name, const std::string &specialty, int yearsExperience);

    // Getters
    std::string getSpecialty() const;
    int getYearsExperience() const;

    // Setters
    void setSpecialty(const std::string &specialty);
    void setYearsExperience(int yearsExperience);

    // Otros métodos
    std::string getProfile() const;
    std::string assignRoutine(const Member &member, const std::string &routineName) const;
};

#endif // TRAINER_H
