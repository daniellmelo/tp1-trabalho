
#pragma once

#include "./Dominio.hpp"
#include <string>

/// @file Senha.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Senha.

/// @class Senha
/// @brief Classe que representa uma senha.
///
/// Esta classe representa uma senha, que &eacute; uma sequ&ecirc;ncia de caracteres.
/// Ela fornece métodos para definir e obter a senha, bem como para valid&aacute;-la.
class Senha : public Dominio{ // 222035625
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
    /// Esta fun&ccedil;&atilde;o &eacute; usada internamente para validar a senha.
    ///
    /// @param senha A sequ&ecirc;ncia de caracteres a ser validada.
    void validar(std::string senha);

private:
    std::string m_senha; ///< A senha armazenada como uma sequ&ecirc;ncia de caracteres.
};
