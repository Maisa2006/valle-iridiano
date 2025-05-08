#pragma once
#include <vector>
#include <memory>
#include "Criatura.h"
#include "json.hpp"

using json = nlohmann::json;

class Nodo {
    std::vector<std::shared_ptr<Criatura>> criaturas;
    int recursos;

public:
    Nodo(int recursos);
    void agregarCriatura(std::shared_ptr<Criatura> c);
    void simular();
    json serializar() const;
};
