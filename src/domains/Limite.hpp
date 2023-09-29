#pragma once

#include "Validador.hpp"

class Limite{
    private:
        std::string m_limite;
        void validar(std::string limite);
    public:
        void setLimite(std::string novoLimite);
        std::string getLimite() const;
        Limite(std::string limite);
};
