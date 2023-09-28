#pragma once

#include "Validador.hpp"
#include <string>

class Codigo{ //222035625
    public:
        Codigo(std::string);
    private:
        std::string m_codigo;

    public:
        std::string getCodigo() const;
        void setCodigo(std::string novoCodigo);
    private:
        void validar(std::string codigo);
};
