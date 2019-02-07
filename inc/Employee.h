#pragma once
#include <string>

class Employee
{
    int _id;
    std::string _name;
    std::string _surname;
    bool _cashier;
    bool _service;
    bool _cook;
    bool _sink;
    bool _manager;

public:
    Employee(int id,std::string name, std::string surname,
             bool cashier,bool service, bool cook, bool sink,bool manager);

};
