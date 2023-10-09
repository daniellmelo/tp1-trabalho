#pragma once

#include "./Dominio.hpp"

#include <string>

/// @file Texto.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Texto.
///

/// @class Texto
/// @brief Classe que representa um texto.
///
/// Esta classe representa um texto, que &eacute; uma sequ&ecirc;ncia de caracteres.
/// Ela fornece m&eacute;todos para definir e obter o texto, bem como para validar sua formata&ccedil;&atilde;o.
class Texto : public Dominio{ // 222035625
public:
    /// @brief Construtor da classe Texto.
    ///
    /// @param texto A sequ&ecirc;ncia de caracteres que representa o texto.
    Texto(std::string texto);

    /// @brief Obt&eacute;m o texto atual.
    ///
    /// @return Uma string representando o texto atual.
    std::string getTexto() const;

    /// @brief Define um novo texto.
    ///
    /// @param novoTexto A nova sequ&ecirc;ncia de caracteres a ser definida como texto.
    void setTexto(std::string novoTexto);

private:
    std::string m_texto; ///< O texto armazenado como uma sequ&ecirc;ncia de caracteres.

    /// @brief Fun&ccedil;&atilde;o privada para validar o texto.
    ///
    /// Esta fun&ccedil;&atilde;o &eacute; usada internamente para validar a formata&ccedil;&atilde;o do texto.
    ///
    /// @param texto A sequ&ecirc;ncia de caracteres a ser validada como texto.
    void validar(std::string texto);
};
