#pragma once

#include <string>

#include "../domains/Email.hpp"
#include "../domains/Senha.hpp"
#include "../domains/Texto.hpp"

/// @brief Classe que representa uma conta de usu&aacute;rio.
///
/// Esta classe representa uma conta de usu&aacute;rio que cont&eacute;m informa&ccedil;&otilde;es como email, nome e senha.
class Conta { // 222035625
    public:
    /// @brief Construtor da classe Conta.
    ///
    /// @param email O endere&ccedil;o de email associado &agrave; conta.
    /// @param nome O nome do usu&aacute;rio associado &agrave; conta.
    /// @param senha A senha da conta.
        Conta(Email email, Texto nome, Senha senha);
    private:
        Email m_email; ///< O endere&ccedil;o de email associado &agrave; conta.
        Texto m_nome; ///< O nome do usu&aacute;rio associado &agrave; conta.
        Senha m_senha; ///< A senha da conta.
    public:
/// @brief Obt&eacute;m o endere&ccedil;o de email da conta.
///
/// @return Uma string representando o endere&ccedil;o de email.
    std::string getEmail() const;

/// @brief Obt&eacute;m o nome do usu&aacute;rio da conta.
///
/// @return Uma string representando o nome do usu&aacute;rio.
    std::string getNome() const;

/// @brief Obt&eacute;m a senha da conta.
///
/// @return Uma string representando a senha.
    std::string getSenha() const;

/// @brief Define um novo endere&ccedil;o de email para a conta.
///
/// @param novoEmail O novo endere&ccedil;o de email a ser definido.
    void setEmail(std::string novoEmail);

/// @brief Define um novo nome de usu&aacute;rio para a conta.
///
/// @param novoNome O novo nome de usu&aacute;rio a ser d
        void setNome(std::string novoNome);

/// @brief Define uma nova senha para a conta.
///
/// @param novoSenha A nova senha a ser definida.
    void setSenha(std::string novoSenha);

};
