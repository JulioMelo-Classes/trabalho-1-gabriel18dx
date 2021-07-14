#include <iostream>
#include "Aposta.hpp"
using namespace std;

/*
Avaliação
Processamento do Arquivo de Entrada: 0,3 (não fez quando o arquivo é inexistente, não testou números repetidos, não testou formatação, não testou a presença de carateres estranhos)
Execução correta: 0,3 (apenas faz o processamento inicial do arquivo)
Interfcace Textual: 0,2 (apenas mostra o inico da interface)
Documentação: 0
Compilação automatizada: 1
Organização em src, include, build, data: 1

Comentários
- Como está incompleto vou deixar sem muitos comentários... Acho que você começou bem com a classe Aposta (que deve ser mais ou menos a ideia da KenoBet).
- Uma coisa que você poderia ter feito, independente da entrega das funcionalidades, era a documentação no formato doxygen.
*/

int main(int argc, char *argv[]) {
    // for(int i=0; i<argc; i++) {
    //     cout<<"Argumento["<<i<<"]"<<argv[i]<<endl;
    // }
    Aposta p(argc, argv);

    return 0;
}