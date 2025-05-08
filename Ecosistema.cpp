//
// Created by Maria Isabel on 7/05/2025.
//

#include "Ecosistema.h"
#include <fstream>
#include <random>

Ecosistema::Ecosistema() {}

void Ecosistema::poblar() {
    for (int i = 0; i < 3; ++i) {
        Nodo n(10 + rand() % 20);
        nodos.push_back(n);
    }
}

void Ecosistema::simularTurno() {
    for (auto& nodo : nodos)
        nodo.simular();
}

void Ecosistema::guardarEstado(const std::string& ruta) {
    nlohmann::json j;
    for (const auto& nodo : nodos)
        j["nodos"].push_back(nodo.serializar());

    std::ofstream out(ruta);
    out << j.dump(4);
}
