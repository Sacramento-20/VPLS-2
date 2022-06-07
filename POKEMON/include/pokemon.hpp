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
        Pokemon(){};
        
        // funções
        string getName();

        void maxSaude();
        // string get_nome() { return this->nome; };
        string get_tipo() {return this -> tipo;};
        string get_proxEvolucao() {return this -> proxEvolucao;};
        double get_fA(){return this -> forcaAtaque;};
        double get_fD(){return this -> forcaAtaque;};
        double get_saude(){return this -> saude;};
        void info();
        // "Pokemon: nome_pokemon, tipo_pokemon, forcaAtaque, forcaDefesa, saude"

};

#endif