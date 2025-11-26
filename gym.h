#ifndef GYM_H
#define GYM_H

#include <string>
#include <vector>
#include "Member.h"
#include "Trainer.h"
#include "Exercise.h"

class Gym {
private:
    std::string name;
    std::vector<Member> members;
    std::vector<Trainer> trainers;
    std::vector<Exercise> exercises;

public:
    Gym(const std::string &name);

    void addMember(const Member &member);
    void addTrainer(const Trainer &trainer);
    void addExercise(const Exercise &exercise);

    void showMembers() const;
    void showTrainers() const;
    void showExercises() const;
};

#endif // GYM_H
