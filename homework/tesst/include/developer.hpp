#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <iostream>
#include <memory>

class Developer {
public:
    Developer(const std::string& name, const std::string& alias);
    virtual ~Developer() = default;

    static void drink_coffee();

    std::string getName() const;
    std::string getAlias() const;

    virtual void solve_problem() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Developer& dev);

protected:
    std::string name_;
    std::string alias_;
};

class JuniorDeveloper : public Developer {
public:
    using Developer::Developer;

    void solve_problem() const override;
};

class SeniorDeveloper : public Developer {
public:
    using Developer::Developer;

    void solve_problem() const override;
};

#endif  // DEVELOPER_HPP
