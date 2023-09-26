#pragma once

#include "Validador.hpp"
#include <string>

class Codigo : virtual public Validador{ //222035625
    public:
        Codigo(std::string);
    private:
        std::string m_codigo;

    public:
        std::string getCodigo() const;
        void setCodigo(std::string novoCodigo);
    private:
        bool validar(std::string codigo);
};
