#include "../inc/Employee.h"

Employee::Employee(int id, std::string name, std::string surname,
                   bool cashier, bool service, bool cook, bool sink, bool manager)
{
    _id=id;
    _name=name;
    _surname=surname;
    _cashier=cashier;
    _service=service;
    _cook=cook;
    _sink=sink;
    _manager=manager;
}
