#pragma once

#include "Validador.hpp"

#include <string>

class Texto { //222035625
    public:
        Texto(std::string texto);
    private:
        std::string m_texto;
    public:
        std::string getTexto() const;
        void setTexto(std::string novoTexto);
    private:
        void validar(std::string texto);
};
