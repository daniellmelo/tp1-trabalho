#pragma once

#include "Validador.hpp"

class Coluna : virtual public Validador {
    private:
        std::string coluna;
        bool validar(std::string);
    public:
        void setColuna(std::string);
        std::string getColuna() const;
};
