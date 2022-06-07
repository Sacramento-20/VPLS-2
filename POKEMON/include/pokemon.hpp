#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
using std::string;

class Pokemon{

    protected: 
        std::string nome;
        std::string tipo;
        double forcaAtaque;
        double forcaDefesa;
        std::string proxEvolucao;
        double saude = 0;
    
    public:
        
        //construtor
        Pokemon(string _nome, string _tipo, string _pEvol, double _fA, double _fD, double _saude);
        // construtor copy
        Pokemon(const Pokemon& _pok);
        
        // funções
        string getName();

        void maxSaude();

        void info();
        // "Pokemon: nome_pokemon, tipo_pokemon, forcaAtaque, forcaDefesa, saude"

};

#endif