#include "Ecosistema.h"
#include "Observador.h"
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));

    Ecosistema eco;
    eco.poblar();

    for (int i = 0; i < 5; ++i)
        eco.simularTurno();

    eco.guardarEstado("data/estado.json");

    Observador::observar(eco);

    return 0;
}



// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.