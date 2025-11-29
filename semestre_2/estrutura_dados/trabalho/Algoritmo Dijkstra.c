#include <stdio.h>    // Funções de entrada e saída (printf, scanf)
#include <limits.h>   // Constantes como INT_MAX, usado como infinito
#include <ctype.h>    // Funções para caracteres, como toupper

#define MAX 10        // Máximo de vértices permitido
#define INF INT_MAX   // Representa ausência de aresta (infinito)

// Escolhe o vértice não visitado com menor distância
int menorDistancia(int *distancia, int *visitado, int n) {
    int menor = INF, indice = -1;
    for (int i = 0; i < n; i++) { // percorre todos os vértices
        if (!visitado[i] && distancia[i] < menor) { // verifica se é o menor não visitado
            menor = distancia[i];
            indice = i;
        }
    }
    return indice;
}

// Imprime o caminho de forma recursiva
void imprimirCaminho(int *anterior, int destino) {
    if (destino == -1) return; // caso base
    imprimirCaminho(anterior, anterior[destino]); // chamada recursiva
    printf("%c ", destino + 'A'); // imprime vértice atual
}

// Algoritmo de Dijkstra
void dijkstra(int **grafo, int n, int origem, int destino) {
    int distancia[MAX], visitado[MAX], anterior[MAX];

    for (int i = 0; i < n; i++) { // inicializa vetores
        distancia[i] = INF;
        visitado[i] = 0;
        anterior[i] = -1;
    }

    distancia[origem] = 0; // origem começa com distância zero

    for (int i = 0; i < n - 1; i++) { // percorre vértices
        int u = menorDistancia(distancia, visitado, n);
        if (u == -1) break; // encerra se não há mais vértices
        visitado[u] = 1;    // marca como visitado

        for (int v = 0; v < n; v++) { // percorre vizinhos
            if (!visitado[v] && grafo[u][v] != INF && distancia[u] + grafo[u][v] < distancia[v]) {
                distancia[v] = distancia[u] + grafo[u][v]; // atualiza distância
                anterior[v] = u; // guarda predecessor
            }
        }
    }

    // Exibe resultado
    printf("\nMenor caminho de %c para %c:\n", origem + 'A', destino + 'A');
    if (distancia[destino] == INF) { // verifica se há caminho
        printf("Sem caminho disponível.\n");
    } else {
        printf("Distancia: %d\nCaminho: ", distancia[destino]);
        imprimirCaminho(anterior, destino); // imprime caminho recursivo
        printf("\n");
    }
}

int main() {
    int n, m;
    int *grafo[MAX]; // matriz de adjacência com ponteiros

    printf("Digite o numero de vertices (max 10): ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX) { // valida número de vértices
        printf("Numero de vertices invalido!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) { // aloca matriz
        grafo[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) // inicializa valores
            grafo[i][j] = (i == j ? 0 : INF);
    }

    printf("Digite o numero de arestas: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++) { // lê arestas
        char origemLetra, destinoLetra;
        int peso;

        printf("\nAresta %d:\n", i + 1);
        printf("Origem (A-%c): ", 'A' + n - 1);
        scanf(" %c", &origemLetra);
        printf("Destino (A-%c): ", 'A' + n - 1);
        scanf(" %c", &destinoLetra);
        printf("Peso: ");
        scanf("%d", &peso);

        origemLetra = toupper(origemLetra);
        destinoLetra = toupper(destinoLetra);

        int u = origemLetra - 'A';
        int v = destinoLetra - 'A';

        if (u < 0 || u >= n || v < 0 || v >= n || peso < 0) { // valida aresta
            printf("Aresta invalida! Tente novamente.\n");
            i--; // repete leitura
            continue;
        }

        grafo[u][v] = peso; // atribui peso
        // grafo[v][u] = peso; // se não-direcionado
    }

    char origemFinal, destinoFinal;
    printf("\nDigite o vertice de origem (A-%c): ", 'A' + n - 1);
    scanf(" %c", &origemFinal);
    printf("Digite o vertice de destino (A-%c): ", 'A' + n - 1);
    scanf(" %c", &destinoFinal);

    origemFinal = toupper(origemFinal);
    destinoFinal = toupper(destinoFinal);

    int origem = origemFinal - 'A';
    int destino = destinoFinal - 'A';

    if (origem < 0 || origem >= n || destino < 0 || destino >= n) { // valida origem/destino
        printf("Origem ou destino invalido!\n");
        return 1;
    }

    dijkstra(grafo, n, origem, destino); // executa algoritmo

    for (int i = 0; i < n; i++) // libera memória
        free(grafo[i]);

    return 0;
}
