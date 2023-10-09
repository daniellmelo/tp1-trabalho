#pragma once

#include "Validador.hpp"
#include <string>

/// @file Codigo.hpp
/// @brief Este arquivo contém a declaração da classe Codigo.
///

/// @class Codigo
/// @brief Classe que representa um código.
///
/// Esta classe representa um código, que é uma sequência de caracteres.
/// Ela fornece métodos para obter e definir o código, bem como para validar sua formatação.
class Codigo { // 222035625
public:
    /// @brief Construtor da classe Codigo.
    ///
    /// @param codigo A sequência de caracteres que representa o código.
    Codigo();
    Codigo(std::string codigo);

    /// @brief Obtém o código atual.
    ///
    /// @return Uma string representando o código atual.
    std::string getCodigo() const;

    /// @brief Define um novo código.
    ///
    /// @param novoCodigo O novo código a ser definido.
    void setCodigo(std::string novoCodigo);

private:
    std::string m_codigo; ///< O código representado como uma sequência de caracteres.

    /// @brief Função privada para validar o código.
    ///
    /// Esta função é usada internamente para validar a formatação do código.
    ///
    /// @param codigo A sequência de caracteres a ser validada como código.
    void validar(std::string codigo);
};
