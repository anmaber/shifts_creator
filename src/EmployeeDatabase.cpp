#include "../inc/EmployeeDatabase.h"

#include <fstream>
#include <sstream>


EmployeeDatabase::EmployeeDatabase()
{
    std::ifstream data("../files/EmployeeDatabase.csv");
    std::string s_id, name, surname, s_cashier, s_service, s_cook, s_sink, s_manager;
    int id;
    bool cashier,service, cook, sink, manager;

    while (!data.eof()) {
        std::getline(data, s_id, ',');
        std::getline(data, name, ',');
        std::getline(data, surname, ',');
        std::getline(data, s_cashier, ',');
        std::getline(data, s_service, ',');
        std::getline(data, s_cook, ',');
        std::getline(data, s_sink, ',');
        std::getline(data, s_manager, '\n');
        id = std::stoi(s_id);
        cashier = (s_cashier=="1");
        service = (s_service=="1");
        cook = (s_cook=="1");
        sink = (s_sink=="1");
        manager = (s_manager=="1");
        _employeeDatabase.push_back(
                    std::make_shared<Employee>(id,name,surname,cashier,service,cook,sink,manager));

       }
    data.close();
}
