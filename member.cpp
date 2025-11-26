#include "Member.h"
#include <string>

Member::Member(const std::string &name, int id, const std::string &level)
    : Person(name), id(id), level(level) {}

int Member::getId() const {
    return id;
}

std::string Member::getLevel() const {
    return level;
}

void Member::setId(int id) {
    this->id = id;
}

void Member::setLevel(const std::string &level) {
    this->level = level;
}

std::string Member::getInfo() const {
    return "Miembro: " + name +
           " | ID: " + std::to_string(id) +
           " | Nivel: " + level;
}

void Member::upgradeLevel(const std::string &newLevel) {
    level = newLevel;
}
