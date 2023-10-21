#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Graph {
public:
    Graph(int vertices);
    void addEdge(int v, int w);
    void DFS(int startVertex);

private:
    int vertices;
    vector<vector<int>> adjacencyList;
};

Graph::Graph(int vertices) {
    this->vertices = vertices;
    adjacencyList.resize(vertices);
}

void Graph::addEdge(int v, int w) {
    adjacencyList[v].push_back(w);
}

void Graph::DFS(int startVertex) {
    vector<bool> visited(vertices, false);
    stack<int> stack;

    visited[startVertex] = true;
    stack.push(startVertex);

    while (!stack.empty()) {
        int currentVertex = stack.top();
        cout << currentVertex << " ";
        stack.pop();

        for (int adjacentVertex : adjacencyList[currentVertex]) {
            if (!visited[adjacentVertex]) {
                visited[adjacentVertex] = true;
                stack.push(adjacentVertex);
            }
        }
    }
}

int main() {
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(2, 6);

    cout << "Depth-First Search starting from vertex 0: ";
    g.DFS(0);

    return 0;
}
