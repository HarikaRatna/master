#include <iostream>
#include <vector>
#include <limits>

// Function to calculate the maximum salary
float calculateMaxSalary(const std::vector<float>& salaries) {
    float maxSalary = std::numeric_limits<float>::min();
    for (float salary : salaries) {
        if (salary > maxSalary) {
            maxSalary = salary;
        }
    }
    return maxSalary;
}

// Function to calculate the minimum salary
float calculateMinSalary(const std::vector<float>& salaries) {
    float minSalary = std::numeric_limits<float>::max();
    for (float salary : salaries) {
        if (salary < minSalary) {
            minSalary = salary;
        }
    }
    return minSalary;
}

// Function to calculate the average salary
float calculateAverageSalary(const std::vector<float>& salaries) {
    float sum = 0;
    for (float salary : salaries) {
        sum += salary;
    }
    return salaries.empty() ? 0 : sum / salaries.size();
}

int main() {
    int n;
    std::cout << "Enter the number of employees: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Number of employees must be greater than 0." << std::endl;
        return 1;
    }

    std::vector<float> salaries(n);
    std::cout << "Enter the salaries of the employees: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Employee " << i + 1 << ": ";
        std::cin >> salaries[i];
    }

    float maxSalary = calculateMaxSalary(salaries);
    float minSalary = calculateMinSalary(salaries);
    float averageSalary = calculateAverageSalary(salaries);

    std::cout << "\nMaximum Salary: " << maxSalary << std::endl;
    std::cout << "Minimum Salary: " << minSalary << std::endl;
    std::cout << "Average Salary: " << averageSalary << std::endl;

    return 0;
}
