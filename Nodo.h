//
// Created by crist on 8/05/2025.
//

#ifndef NODOS_H
#define NODOS_H



#pragma once
#include <vector>
#include <memory>
#include "Criatura.h"
#include <nlohmann/json.hpp>

class Nodo {
    std::vector<std::shared_ptr<Criatura>> criaturas;
    int recursos;

public:
    Nodo(int recursos);
    void agregarCriatura(std::shared_ptr<Criatura> c);
    void simular();
    nlohmann::json serializar() const;
};




#endif //NODOS_H
