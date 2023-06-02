#include <iostream>
#include <vector>
#include <memory>
#include "developer.hpp"

int main() {
    std::vector<std::shared_ptr<Developer>> developers;

    // Create JuniorDeveloper and SeniorDeveloper objects
    std::shared_ptr<JuniorDeveloper> juniorDev = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");
    std::shared_ptr<SeniorDeveloper> seniorDev = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");

    // Add developers to the vector
    developers.push_back(juniorDev);
    developers.push_back(seniorDev);

    // Iterate over the vector and let developers solve problems
    for (const auto& dev : developers) {
        dev->solve_problem();
        std::cout << std::endl;
    }

    return 0;
}
