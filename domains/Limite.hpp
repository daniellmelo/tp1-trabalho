#ifndef LIMITE_HPP_INCLUDED
#define LIMITE_HPP_INCLUDED

#include "Validador.hpp"


class Limite{
    private:
        std::string m_limite;
        void validar(std::string limite);
    public:
        void setLimite(std::string novoLimite);
        std::string getLimite() const;
};



#endif // LIMITE_HPP_INCLUDED
