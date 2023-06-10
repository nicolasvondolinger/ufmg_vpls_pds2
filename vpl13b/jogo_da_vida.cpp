#include "jogo_da_vida.h"

using namespace std;

JogoDaVida::JogoDaVida(int l, int c){
    vivas_.resize(l, std::vector<bool>(c));
}

bool JogoDaVida::viva(int i, int j){
    if((i < 0 || i >= vivas_.size()) || (j < 0 || j >= vivas_[0].size())){
        ExcecaoCelulaInvalida e;
        e.linha = i;
        e.coluna = j;
        throw e;
    }
    return vivas_[i][j];
}

void JogoDaVida::Matar(int i, int j){
    if((i < 0 || i >= vivas_.size()) || (j < 0 || j >= vivas_[0].size())){
        ExcecaoCelulaInvalida e;
        e.linha = i;
        e.coluna = j;
        throw e;
    }
    vivas_[i][j] = false;
}

void JogoDaVida::Reviver(int i, int j){
    if((i < 0 || i >= vivas_.size()) || (j < 0 || j >= vivas_[0].size())){
        ExcecaoCelulaInvalida e;
        e.linha = i;
        e.coluna = j;
        throw e;
    }
    vivas_[i][j] = true;
}

int JogoDaVida::NumeroDeVizinhasVivas(int x, int y) {
    int count = 0;

    // Definir as posições relativas das células vizinhas
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    // Percorrer as células vizinhas
    for (int i = 0; i < 8; i++) {
        int nx = (x + dx[i] + linhas()) % linhas();    // Lidar com o torus nas bordas
        int ny = (y + dy[i] + colunas()) % colunas();  // Lidar com o torus nas bordas

        if (viva(nx, ny)) {
            count++;
        }
    }

    return count;
}

void JogoDaVida::ExecutarProximaIteracao() {
    // Criar uma cópia do estado atual das células
    vector<vector<bool>> novoEstado = vivas_;

    // Percorrer todas as células do torus
    for (int i = 0; i < linhas(); i++) {
        for (int j = 0; j < colunas(); j++) {
            // Obter o número de vizinhas vivas da célula [i, j]
            int numVizinhasVivas = NumeroDeVizinhasVivas(i, j);

            // Verificar as regras do Jogo da Vida
            if (viva(i, j)) {
                // Se a célula está viva
                if (numVizinhasVivas < 2 || numVizinhasVivas > 3) {
                    // A célula morre de solidão ou superpopulação
                    novoEstado[i][j] = false;
                }
            } else {
                // Se a célula está morta
                if (numVizinhasVivas == 3) {
                    // A célula é revivida
                    novoEstado[i][j] = true;
                }
            }
        }
    }

    // Atualizar o estado das células com o novo estado
    vivas_ = novoEstado;
}
