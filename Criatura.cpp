//
// Created by Maria Isabel on 7/05/2025.
//

#include "Criatura.h"

Criatura::Criatura(std::string nombre, int edad, int energia)
    : nombre(std::move(nombre)), edad(edad), energia(energia) {}

