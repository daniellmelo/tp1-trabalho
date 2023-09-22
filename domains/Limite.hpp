#ifndef LIMITE_HPP_INCLUDED
#define LIMITE_HPP_INCLUDED

#include "Validador.hpp"


class Limite : virtual public Validador{
    private:
        int limite;
        bool validar(std::string);
    public:
        void setLimite(std::string);
        std::string getLimite();
};



#endif // LIMITE_HPP_INCLUDED
