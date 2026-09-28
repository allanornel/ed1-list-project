# Relatorio final do projeto

## 1. Descrição da implementação
### 1.1 Organização de Código
O projeto foi desenvolvido em linguagem C e está organizado da seguinte forma:

trabalho1/
├── src/
│   ├── lista.c
│   ├── lista.h
│   └── main.c
├── report.md
└── README.txt

O arquivo lista.h contém as definições das estruturas e os protótipos das funções relacionadas à lista.

O arquivo lista.c contém a implementação das funções da lista sequencial.

O arquivo main.c é responsável pela execução do programa e pela realização dos testes das operações implementadas.
    organização geral do código;
    estrutura da lista sequencial.

### 1.2 Estrutura da lista sequencial
A lista foi implementada utilizando um vetor de tamanho definido, mantendo os elementos em posições sequenciais da memória.

A estrutura utilizada possui:

um vetor para armazenar os elementos;
uma variável para controlar a quantidade de elementos atualmente armazenados;
um limite máximo de elementos.

## 2. Casos de teste
Foram realizados testes para verificar o funcionamento das principais operações da lista.

### 2.1 Inserção
Objetivo: verificar se os elementos são inseridos corretamente na lista.

Entrada:
- Por exemplo, ao inserir os valores subsequentes em uma lista vazia: 1, 2, 3.

Resultado esperado:
- A lista deve fornecer apenas os números inseridos sem nenhum erro.

Resultado obtido:
- A impressão da lista a partir dos itens inseridos.

### 2.2 Remoção

Objetivo: verificar se um elemento pode ser removido corretamente.

Entrada:
- Inserir uma posição existente para a remoção do número inserido naquela posição.

Resultado esperado:
- A remoção do número na posição solicitada.

Resultado obtido:
- O item na posição desejada foi removido.
- 
### 2.3 Casos limite

Também foram realizados testes envolvendo situações limite, como:

inserção em uma lista vazia;
remoção de um elemento da lista;
tentativa de remoção de um elemento inexistente;
inserção quando a lista está cheia;
remoção do primeiro elemento;
remoção do último elemento;
remoção dos valores;

## 3. Problemas encontrados

Descrever dificuldades ou erros encontrados durante o desenvolvimento e como foram resolvidos.

Exemplos:

    erros de deslocamento;
    problemas em inserções;
    remoções incorretas;
    falhas em casos limite.

## 4. Alterações desde o checkpoint

1. Foi desenvolvido a feature final referente a exclusão dos números pelo seu valor. Opção #7 do presente menu.
