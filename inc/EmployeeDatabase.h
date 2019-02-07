#pragma once

#include <vector>
#include <memory>
#include "../inc/Employee.h"

class EmployeeDatabase
{
    std::vector<std::shared_ptr<Employee>> _employeeDatabase;
public:

};

