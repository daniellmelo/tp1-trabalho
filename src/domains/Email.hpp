#pragma once

#include <string>

#include "./Dominio.hpp"

/// @file Email.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Email.
///

/// @class Email
/// @brief Classe que representa um endere&ccedil;o de e-mail.
///
/// Esta classe representa um endere&ccedil;o de e-mail v&aacute;lido.
/// Ela fornece m&eacute;todos para definir e obter o endere&ccedil;o de e-mail, bem como para validar sua formata&ccedil;&atilde;o.
class Email : public Dominio{ // 190063882
public:
    /// @brief Construtor da classe Email.
    ///
    /// @param email A sequ&ecirc;ncia de caracteres que representa o endere&ccedil;o de e-mail.
    Email(std::string email);

    /// @brief Define um novo endere&ccedil;o de e-mail.
    ///
    /// @param novoEmail O novo endere&ccedil;o de e-mail a ser definido.
    void setEmail(std::string novoEmail);

    /// @brief Obt&eacute;m o endere&ccedil;o de e-mail atual.
    ///
    /// @return Uma string representando o endere&ccedil;o de e-mail atual.
    std::string getEmail() const;

private:
    /// @brief Fun&ccedil;&atilde;o privada para validar o endere&ccedil;o de e-mail.
    ///
    /// Esta fun&ccedil;&atilde;o &eacute; usada internamente para validar a formata&ccedil;&atilde;o do endere&ccedil;o de e-mail.
    ///
    /// @param email A sequ&ecirc;ncia de caracteres a ser validada como endere&ccedil;o de e-mail.
    void validar(std::string email);

private:
    std::string m_email; ///< O endere&ccedil;o de e-mail.
};
