//Nesse problema já recebemos a fórmula de cara. Porém, como a vida não é um morango nem sempre será assim. Esse é um problema considerado nível iniciante

#include <stdio.h> //começamos com a biblioteca padrão para recebimento e saída de dados

int main(){ //Estrutura básica da Linguagem C

    double area, pi, raio,raio_quadrado; //declaro minhas variáveis do tipo double(Real), posso usar float também

    pi = 3.14159; // Aqui declaro o meu valor de PI
  
    scanf("%lf",&raio); // aqui recebo os valores do meu raio.

    raio_quadrado = raio*raio; //essa parte não é obrigatória. Mas, fiz por boas maneiras didáticas. No caso eu recebo o valor de raio*raio.

    area = pi*raio_quadrado; //aqui vem a fórmula básica do meu programa. Sendo no caso a fórmula para calcular a Area

    printf("A=%.4lf\n",area); //Aqui eu printo o meu resultado.

    return 0;
}
