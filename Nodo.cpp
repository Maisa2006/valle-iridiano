#include "Nodo.h"
#include "json.hpp"
using namespace std;
using json = nlohmann::json;

Nodo::Nodo(int recursos) : recursos(recursos) {}

void Nodo::agregarCriatura(shared_ptr<Criatura> c) {
    criaturas.push_back(c);
}

void Nodo::simular() {
    for (auto& c : criaturas)
        c->actuar();
}

json Nodo::serializar() const {
    json j;
    for (const auto& c : criaturas)
        j["criaturas"].push_back(c->serializar());
    j["recursos"] = recursos;
    return j;
}
