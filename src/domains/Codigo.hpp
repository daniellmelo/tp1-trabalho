#pragma once

#include "Validador.hpp"
#include <string>

/// @file Codigo.hpp
/// @brief Este arquivo cont�m a declara��o da classe Codigo.
///

/// @class Codigo
/// @brief Classe que representa um c�digo.
///
/// Esta classe representa um c�digo, que � uma sequ�ncia de caracteres.
/// Ela fornece m�todos para obter e definir o c�digo, bem como para validar sua formata��o.
class Codigo { // 222035625
public:
    /// @brief Construtor da classe Codigo.
    ///
    /// @param codigo A sequ�ncia de caracteres que representa o c�digo.
    Codigo();
    Codigo(std::string codigo);

    /// @brief Obt�m o c�digo atual.
    ///
    /// @return Uma string representando o c�digo atual.
    std::string getCodigo() const;

    /// @brief Define um novo c�digo.
    ///
    /// @param novoCodigo O novo c�digo a ser definido.
    void setCodigo(std::string novoCodigo);

private:
    std::string m_codigo; ///< O c�digo representado como uma sequ�ncia de caracteres.

    /// @brief Fun��o privada para validar o c�digo.
    ///
    /// Esta fun��o � usada internamente para validar a formata��o do c�digo.
    ///
    /// @param codigo A sequ�ncia de caracteres a ser validada como c�digo.
    void validar(std::string codigo);
};
