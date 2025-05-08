//
// Created by Maria Isabel on 7/05/2025.
//

#ifndef CRIATURAS_H
#define CRIATURAS_H



#pragma once
#include <string>
#include <nlohmann/json.hpp>

class Criatura {
protected:
    std::string nombre;
    int edad;
    int energia;

public:
    Criatura(std::string nombre, int edad, int energia);
    virtual void actuar() = 0;
    virtual nlohmann::json serializar() const = 0;
    virtual ~Criatura() = default;
};




#endif //CRIATURAS_H
