//
// Created by crist on 8/05/2025.
//

#include "Nodo.h"

Nodo::Nodo(int recursos) : recursos(recursos) {}

void Nodo::agregarCriatura(std::shared_ptr<Criatura> c) {
    criaturas.push_back(c);
}

void Nodo::simular() {
    for (auto& c : criaturas)
        c->actuar();
}

nlohmann::json Nodo::serializar() const {
    nlohmann::json j;
    for (const auto& c : criaturas)
        j["criaturas"].push_back(c->serializar());
    j["recursos"] = recursos;
    return j;
}

