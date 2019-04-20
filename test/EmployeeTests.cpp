#include <gtest/gtest.h>
#include "Employee.hpp"

struct EmployeeTest : public::testing::Test
{
    Employee employee{1, "Jan","Kowalski",0,0,1,0};
};

TEST_F(EmployeeTest, whenIdIs1getIdReturns1)
{
    ASSERT_EQ(employee.getId(),1);
}
