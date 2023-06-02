#include "developer.hpp"

Developer::Developer(const std::string& name, const std::string& alias)
    : name_(name), alias_(alias) {}

void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
}

std::string Developer::getName() const {
    return name_;
}

std::string Developer::getAlias() const {
    return alias_;
}

std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    os << "Name: " << dev.name_ << std::endl;
    os << "Alias: " << dev.alias_ << std::endl;
    return os;
}

void JuniorDeveloper::solve_problem() const {
    std::cout << "Solving a problem:" << std::endl;
    std::cout << *this << "Ha, that was EZ!" << std::endl;
    drink_coffee();
}

void SeniorDeveloper::solve_problem() const {
    std::cout << "Solving a problem:" << std::endl;
    std::cout << *this << "Puh, that was tough" << std::endl;
    drink_coffee();
}
