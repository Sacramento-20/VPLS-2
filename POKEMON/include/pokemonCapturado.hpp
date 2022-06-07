#include "pokemon.hpp"

class PokemonCapturado : public Pokemon{
    private:
        bool evoluido;
        bool dormindo;

    public:
        // construtor
        PokemonCapturado(Pokemon& _pok);


        void evoluir(double taxaPoder);
};