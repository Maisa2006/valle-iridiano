//
// Created by Maria Isabel on 7/05/2025.
//

#ifndef ECOSISTEMA_H
#define ECOSISTEMA_H



#pragma once
#include <vector>
#include "Nodo.h"

class Ecosistema {
    std::vector<Nodo> nodos;

public:
    Ecosistema();
    void poblar();
    void simularTurno();
    void guardarEstado(const std::string& ruta);
};




#endif //ECOSISTEMA_H
