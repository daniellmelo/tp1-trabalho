# Projeto de Técnicas de Programação - Método Kanban

Este projeto tem como objetivo desenvolver um sistema de suporte ao método Kanban para gerenciamento de projetos. O sistema oferece funcionalidades para criar e gerenciar quadros (boards), cartões (cards) e contas de usuário.

## Funcionalidades Principais

### Contas de Usuário

- **Criar Conta**: Os usuários podem criar uma conta fornecendo nome, endereço de e-mail e senha.
- **Autenticação**: Os usuários precisam se autenticar com seu endereço de e-mail e senha para acessar os serviços.
- **Visualizar Conta**: Após autenticados, os usuários podem visualizar os dados de sua conta.
- **Editar Conta**: Os usuários podem editar seu nome e/ou senha após a autenticação.
- **Eliminar Conta**: Os usuários podem eliminar sua conta, o que resulta na exclusão de todos os dados associados.

### Quadros (Boards)

- **Criar Quadro**: Após autenticados, os usuários podem criar quadros para gerenciar projetos.
- **Visualizar Quadro**: Os usuários podem visualizar os dados de um quadro, incluindo os códigos dos cartões associados.
- **Eliminar Quadro**: Os usuários só podem eliminar quadros que criaram, o que também elimina todos os cartões associados.

### Cartões (Cards)

- **Criar Cartão**: Após autenticados, os usuários podem criar cartões para representar tarefas ou itens em um quadro.
- **Visualizar Cartão**: Os usuários podem visualizar os detalhes de um cartão.
- **Mover Cartão**: Os usuários podem mover um cartão para uma coluna diferente no mesmo quadro.
- **Eliminar Cartão**: Os usuários podem eliminar cartões associados a um quadro.

### Regras do Sistema

- Um usuário só pode eliminar quadros que ele criou.
- A eliminação de um quadro resulta na eliminação de todos os cartões associados.
- O número máximo de cartões em uma coluna "Trabalho em Progresso" é definido pelo limite de trabalho em progresso (work in progress limit) informado no quadro.
