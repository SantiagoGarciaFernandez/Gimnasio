#ifndef EXERCISE_H
#define EXERCISE_H

#include <string>

class Exercise {
private:
    std::string name;
    int sets;
    int reps;
    double weightKg;

public:
    // Constructor
    Exercise(const std::string &name, int sets, int reps, double weightKg);

    // Getters
    std::string getName() const;
    int getSets() const;
    int getReps() const;
    double getWeightKg() const;

    // Setters
    void setName(const std::string &name);
    void setSets(int sets);
    void setReps(int reps);
    void setWeightKg(double weightKg);

    // Otros métodos
    void increaseWeight(double deltaKg);
    std::string getDescription() const;
};

#endif // EXERCISE_H
