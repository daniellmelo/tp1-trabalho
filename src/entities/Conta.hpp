#pragma once

#include <string>

#include "../domains/Email.hpp"
#include "../domains/Senha.hpp"
#include "../domains/Texto.hpp"

class Conta { // 222035625
    public:
    /// @brief Construtor da classe Conta.
    ///
    /// @param email O endere�o de email associado � conta.
    /// @param nome O nome do usu�rio associado � conta.
    /// @param senha A senha da conta.
        Conta(Email email, Texto nome, Senha senha);
    private:
        Email m_email; ///< O endere�o de email associado � conta.
        Texto m_nome; ///< O nome do usu�rio associado � conta.
        Senha m_senha; ///< A senha da conta.
    public:
        std::string getEmail() const;
        std::string getNome() const;
        std::string getSenha() const;

        void setEmail(std::string novoEmail);

        void setNome(std::string novoNome);
        void setSenha(std::string novoSenha);
};
