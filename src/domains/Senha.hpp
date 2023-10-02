#pragma once

#include "Validador.hpp"
#include <string>

/// @file Senha.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Senha.
///

/// @class Senha
/// @brief Classe que representa uma senha.
///
/// Esta classe representa uma senha, que &eacute; uma sequ&ecirc;ncia de caracteres.
/// Ela fornece m&eacute;todos para definir e obter a senha, bem como para validar sua formata&ccedil;&atilde;o.
class Senha { // 222035625
public:
    /// @brief Construtor da classe Senha.
    ///
    /// @param senha A sequ&ecirc;ncia de caracteres que representa a senha.
    Senha(std::string senha);

    /// @brief Define uma nova senha.
    ///
    /// @param novaSenha A nova sequ&ecirc;ncia de caracteres a ser definida como senha.
    void setSenha(std::string novaSenha);

    /// @brief Obt&eacute;m a senha atual.
    ///
    /// @return Uma string representando a senha atual.
    std::string getSenha() const;

private:
    /// @brief Fun&ccedil;&atilde;o privada para validar a senha.
    ///
    /// Esta fun&ccedil;&atilde;o &eacute; usada internamente para validar a formata&ccedil;&atilde;o da senha.
    ///
    /// @param senha A sequ&ecirc;ncia de caracteres a ser validada como senha.
    void validar(std::string senha);
};
