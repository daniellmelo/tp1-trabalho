#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

#include "Validador.hpp"
#include <string>

class Senha : virtual private Validador { // 222035625
    private:
        std::string m_senha;
        bool validar(std::string senha);

    public:
        void setSenha(std::string novaSenha);
        std::string getSenha() const;


};




#endif // SENHA_HPP_INCLUDED
