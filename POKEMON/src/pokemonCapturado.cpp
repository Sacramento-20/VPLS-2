#include "pokemonCapturado.hpp"

// PokemonCapturado::PokemonCapturado(const Pokemon& _pok){
//     evoluido = false;
//     dormindo = true;
// }

void PokemonCapturado::evoluir(double taxaPoder){
    evoluido = true;
    dormindo = false;
    nome = proxEvolucao;
    proxEvolucao = " ";
    forcaAtaque = taxaPoder;
    forcaDefesa = taxaPoder;
}