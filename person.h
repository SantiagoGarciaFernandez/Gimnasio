#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;

public:
    Person(const std::string &name);

    std::string getName() const;
    void setName(const std::string &name);
};

#endif // PERSON_H
