#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    int id;
    std::string level; // por ejemplo: "Principiante", "Intermedio", "Avanzado"

public:
    // Constructor
    Member(const std::string &name, int id, const std::string &level);

    // Getters
    std::string getName() const;
    int getId() const;
    std::string getLevel() const;

    // Setters
    void setName(const std::string &name);
    void setId(int id);
    void setLevel(const std::string &level);

    // Otros métodos
    std::string getInfo() const;
    void upgradeLevel(const std::string &newLevel);
};

#endif // MEMBER_H
