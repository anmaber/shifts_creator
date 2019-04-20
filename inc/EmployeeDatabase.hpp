#pragma once

#include <vector>
#include <memory>
#include "Employee.hpp"

class EmployeeDatabase
{
    std::vector<std::shared_ptr<Employee>> _employeeDatabase;

public:

    EmployeeDatabase();

};

