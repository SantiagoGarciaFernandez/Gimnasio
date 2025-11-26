#include "Member.h"

Member::Member(const std::string &name, int id, const std::string &level)
    : name(name), id(id), level(level) {}

std::string Member::getName() const {
    return name;
}

int Member::getId() const {
    return id;
}

std::string Member::getLevel() const {
    return level;
}

void Member::setName(const std::string &name) {
    this->name = name;
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
