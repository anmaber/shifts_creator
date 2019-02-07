#include <gtest/gtest.h>
#include "../inc/Employee.h"

struct EmployeeTest : public::testing::Test
{
    Employee employee{1, "Jan","Kowalski",0,0,1,1,0};
};
