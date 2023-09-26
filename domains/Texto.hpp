#ifndef TEXTO_HPP_INCLUDED
#define TEXTO_HPP_INCLUDED

#include "Validador.hpp"

#include <string>

class Texto : virtual public Validador { //222035625
    private:
        std::string m_texto;
        bool validar(std::string texto);
    public:
        std::string getTexto();
        void setTexto(std::string novoTexto);

};

#endif // TEXTO_HPP_INCLUDED
