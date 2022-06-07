#include "pokemonCapturado.hpp"

PokemonCapturado::PokemonCapturado(Pokemon& _pok){
    nome = _pok.getName();
    tipo = _pok.get_tipo();
    forcaAtaque = _pok.get_fA();
    forcaDefesa = _pok.get_fD();
    proxEvolucao = _pok.get_proxEvolucao();
    saude = _pok.get_saude();
    
    evoluido = false;
    dormindo = true;
}

void PokemonCapturado::evoluir(double taxaPoder){
    evoluido = true;
    dormindo = false;
    nome = proxEvolucao;
    proxEvolucao = " ";
    forcaAtaque = taxaPoder;
    forcaDefesa = taxaPoder;
}