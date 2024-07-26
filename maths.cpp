#include <iostream>
#include <climits>
using namespace std;

#define L 10


int MinDistance(int dist[], bool Set[]) {
    int min = INT_MAX, M_index;

    for (int v = 0; v < L; v++) {
        if (Set[v] == false && dist[v] <= min) {
            min = dist[v];
            M_index = v;
        }
    }

    return M_index;
}

void printSolution(int dist[], int n) {
    cout << "Node Distance from Source\n";
    for (int i = 0; i < L; i++)
        cout << i << "\t" << dist[i] << "\n";
}

void shortestPath(int graph[L][L], int src, int goal) {
    int dist[L];     
    bool Set[L]; 

   
    for (int i = 0; i < L; i++) {
        dist[i] = INT_MAX;
        Set[i] = false;
    }

    
    dist[src] = 0;

   
    for (int count = 0; count < L - 1; count++) {
        int u = MinDistance(dist, Set); 
        Set[u] = true; 

       
        for (int v = 0; v < L; v++) {
            if (!Set[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }

    printSolution(dist, L);

    cout << "Shortest path from source " << src << " to goal " << goal << " is: " << dist[goal] << endl;
}

int main() {
   
    int graph[L][L] = {
        {0, 5, 5, 6, 0, 0, 0, 0, 0, 0},
        {5, 0, 0, 0, 4, 7, 8, 0, 0, 0},
        {5, 0, 0, 0, 7, 10, 5, 0, 0, 0},
        {6, 0, 0, 0, 5, 5, 4, 0, 0, 0},
        {0, 4, 7, 8, 0, 0, 7, 0, 0, 0},
        {0, 7, 10, 5, 0, 0, 0, 5, 8, 0},
        {0, 8, 5, 4, 0, 0, 0, 0, 5, 0},
        {0, 0, 0, 0, 7, 5, 0, 0, 7, 5},
        {0, 0, 0, 0, 0, 8, 5, 7, 0, 6},
        {0, 0, 0, 0, 0, 0, 0, 0, 5, 6}
    };

    int source = 0; 
    int goal = 9;   

   
    shortestPath(graph, source, goal);

    return 0;
}