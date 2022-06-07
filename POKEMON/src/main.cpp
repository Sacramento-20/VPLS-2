// #include "evolutionBall.hpp"
// #include "healthBall.hpp"
// #include "pokebola.hpp"
#include "pokemon.hpp"
// #include "pokemonCapturado.hpp"
// #include "treinador.hpp"


int main(){

    Pokemon b("bulbassauro", "planta", "buba", 120, 60, 85);
    Pokemon c = b;

    b.info();   
    b.maxSaude();
    b.info();
    std::cout << "nome do pokemon é: " << b.getName() << std::endl;
    
    c.info();

    return 0;
}