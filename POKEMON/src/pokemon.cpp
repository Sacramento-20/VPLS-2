#include "pokemon.hpp"


// construtor 
Pokemon::Pokemon(string _nome, string _tipo, string _pEvol, double _fA, double _fD, double _saude){
    nome = _nome;
    tipo = _tipo;
    forcaAtaque = _fA;
    forcaDefesa = _fD;
    proxEvolucao = _pEvol;
    saude = _saude;
}

// construtor copy
Pokemon::Pokemon(const Pokemon& _pok){
    nome = _pok.nome;
    tipo = _pok.tipo;
    forcaAtaque = _pok.forcaAtaque;
    forcaDefesa = _pok.forcaDefesa;
    proxEvolucao = _pok.proxEvolucao;
    saude = _pok.saude;
}

string Pokemon::getName(){
    return nome;
}

void Pokemon::maxSaude(){
    saude = 100;
}

void Pokemon::info(){
    std::cout << "Pokemon:" << nome << ", " << tipo << ", " << forcaAtaque << ", "  << forcaDefesa << ", " << saude << std::endl;
}