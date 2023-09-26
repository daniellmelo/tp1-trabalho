#pragma once

#include <string>

#include "domains/Email.hpp"
#include "domains/Senha.hpp"
#include "domains/Texto.hpp"

class Conta { // 222035625
    public:
        Conta(Email email, Texto nome, Senha senha);

    private:
        Email m_email;
        Texto m_nome;
        Senha m_senha;

    public:

        std::string getEmail() const;
        std::string getNome() const;
        std::string getSenha() const;

        void setEmail(std::string novoEmail);
        void setNome(std::string novoNome);
        void setSenha(std::string novoSenha);
};
