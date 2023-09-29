#pragma once

#include "Validador.hpp"
#include <string>

class Senha{ // 222035625
    public:
        Senha(std::string senha);
    private:
        std::string m_senha;
    public:
        void setSenha(std::string novaSenha);
        std::string getSenha() const;
    private:
        void validar(std::string senha);
};
