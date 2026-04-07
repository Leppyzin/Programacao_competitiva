# Estrutura Básica

Na linguagem C todo programa que é iníciado tem uma Estrutura Básica que é onde o nosso programa vai rodar o seu programa. Nas linguagens de programação em sua maioria terão um esqueleto base para iniciar um programa.

## Estrutura básica do C



    #include <stdio.h> 

    int main(){

        return 0;
    }

Você deve está pensando; "mas o que diabos é isso?". Calma pupilo, irei explicar cada pedaço para você.

## O código anterior é bem básico, mas nos permite a aprender alguns conceitos básicos da linguagem C

- ``` #include <stdio.h> ```: Declarações globais; Bibliotecas usadas pelo o programa. Temos no Início do Programa regiões onde são feitas as suas declarações globais, ou seja, aquelas que são validas para todo o programa. Uma biblioteca é um conjunto de funções (pedaços de código) já implementados e que podem ser utilizados pelo programador. Essa biblioteca do exemplo fornece para o programa funções essencias para **saída e entrada de dados**, mas isso fica para outro momento por enquanto. No exemplo, o comando #include <nome_da_biblioteca> é utilizado para declarar as bibliotecas que serão utilizadas.

- ``` main ```: Todo o programa em linguagem C deve conter a função **main()**. Essa função é responsável pelo início da execução do programa, e é dentro dela que colocamos os comandos que queremos que o programa execute. Todo programa em C também deve conter a função **main()**.

- ``` {} ```: As chaves definem o início ("{") e o fim ("}") de um bloco de comandos/instruções. No exemplo, as chaves definem o início e o fim do programa.

- ``` int ```: A função main() foi definida como uma função **int**(ou seja, inteira) e, por isso, precisa devolver um valor **inteiro**. Temos então a necessidade do comando **return 0** apenas para informar que o seu programa chegou ao seu final e que está tudo *OK*

- ``` ; ```: A declaração de um comando **quase sempre** termina com (";"). Em breve, veremos quais programas não terminam com **;**

- ``` () ```: Os parenteses definem o início ( "(" ) e o fim ( ")" ) da lista de argumentos
