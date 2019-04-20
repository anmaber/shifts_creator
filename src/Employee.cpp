#include "Employee.hpp"

Employee::Employee(int id, std::string name, std::string surname,
                   bool cashier, bool service, bool cook, bool manager)
{
    _id=id;
    _name=name;
    _surname=surname;
    _cashier=cashier;
    _service=service;
    _cook=cook;
    _manager=manager;
}

int Employee::getId()
{
    return _id;
}
