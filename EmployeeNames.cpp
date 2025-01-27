#include <iostream>
#include <vector>
#include <string>

// Function to find employee names with more than 10 characters
std::vector<std::string> findLongNames(const std::vector<std::string>& names) {
    std::vector<std::string> longNames;
    for (const std::string& name : names) {
        if (name.length() > 10) {
            longNames.push_back(name);
        }
    }
    return longNames;
}

int main() {
    int n;
    std::cout << "Enter the number of employees: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Number of employees must be greater than 0." << std::endl;
        return 1;
    }

    std::vector<std::string> names(n);
    std::cout << "Enter the names of the employees: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Employee " << i + 1 << ": ";
        std::cin >> names[i];
    }

    std::vector<std::string> longNames = findLongNames(names);

    std::cout << "\nEmployees with names longer than 10 characters:" << std::endl;
    if (longNames.empty()) {
        std::cout << "None" << std::endl;
    } else {
        for (const std::string& name : longNames) {
            std::cout << name << std::endl;
        }
    }

    return 0;
}
