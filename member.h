#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include "Person.h"

class Member : public Person {
private:
    int id;
    std::string level; // "Principiante", "Intermedio", "Avanzado"

public:
    // Constructor
    Member(const std::string &name, int id, const std::string &level);

    // Getters
    int getId() const;
    std::string getLevel() const;

    // Setters
    void setId(int id);
    void setLevel(const std::string &level);

    // Otros métodos
    std::string getInfo() const;
    void upgradeLevel(const std::string &newLevel);
};

#endif // MEMBER_H
