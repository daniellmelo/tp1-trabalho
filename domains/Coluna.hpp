#ifndef COLUNA_HPP_INCLUDED
#define COLUNA_HPP_INCLUDED

#include "Validador.hpp"


class Coluna : virtual public Validador {
    private:
        std::string coluna;
        bool validar(std::string);
    public:
        void setColuna(std::string);
        std::string getColuna();
};


#endif // COLUNA_HPP_INCLUDED
