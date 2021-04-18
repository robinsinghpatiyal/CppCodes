#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
}main.cpp:

#include <iostream>

#include <vector>

#include "Graph.hpp"

using namespace std;


int main()

{

    Graph g; // undirected and unweighted

    g.addVertex(1);

    g.addVertex(2);

    g.addVertex(3);

    g.addVertex(4);

    g.addVertex(5);

    g.addVertex(6);

    g.addEdge(1, 2);

    g.addEdge(1, 3);

    g.addEdge(2, 3);

    g.addEdge(1, 4);

    g.addEdge(4, 5);

    g.addEdge(4, 6);

    g.addEdge(3, 4);

    g.addEdge(5, 6);

    // TODO Silver: Find the length of the shortest path between the source and destination vertex (complete the findShortestPath function)

    int length = g.findShortestPath(1, 6); // Expected: 2

    if(length!=-1)

    {

      cout << "Shortest path length = "<< length<< endl;

      // TODO Gold: Give the shortest path: modify the findShortestPath function, then complete the printPath function and print the path inside this function

      g.printPath(1,6) ; // Expected: 1 4 6

      cout<< endl;

    }

    else

    {

      cout<< "source and destination are not connected" << endl;

    }

    return 0;

}

Graph.cpp:

#include "Graph.hpp"

#include <vector>

#include <queue>

#include <iostream>

using namespace std;

// function to add edge between two vertices

void Graph::addEdge(int v1, int v2){

    for(int i = 0; i < vertices.size(); i++){

        if(vertices[i]->key == v1){

            for(int j = 0; j < vertices.size(); j++){

                if(vertices[j]->key == v2 && i != j){

                    adjVertex av;

                    av.v = vertices[j];

                    vertices[i]->adj.push_back(av);

                    //another vertex for edge in other direction

                    adjVertex av2;

                    av2.v = vertices[i];

                    vertices[j]->adj.push_back(av2);

                }

            }

        }

    }

}


// function to add a vertex to the graph

void Graph::addVertex(int n){

    bool found = false;

    for(int i = 0; i < vertices.size(); i++){

        if(vertices[i]->key == n){

            found = true;

        }

    }

    if(found == false){

        vertex * v = new vertex;

        v->key = n;

        vertices.push_back(v);

    }

}

// GOLD : function to print the path of the shortest path from src to dest vertex

// First modify the findShortestPath function to update the predecessor(pred) when updating the distance of the adjacent vertices,

// then complete the following function

void Graph::printPath(int src, int dest)

{

  // the "path" vector stores the vertices of the shortest path

  vector<vertex*> path;

  // A pointer for destination vertex

  vertex *vDest;



  cout<< "The shortet path is: " <<endl;



}

// SILVER: Complete the following function and return the length of the shortest path (return -1 if you can't find a path)

int Graph::findShortestPath(int src, int dest){

    // Need to find the source vertex since we only have it's key 'src'

    // A pointer for source vertex

    vertex *vStart;

    for(int i = 0; i < vertices.size(); i++)

    {

        if(vertices[i]->key == src)

        {

            vStart = vertices[i];

        }

    }

    vStart->visited = true;

    // Use the queue to keep track of visited vertices

    queue<vertex*> q;

    // Enqueue the source vertex

    q.push(vStart);

    vertex *n;

    // standard BFS

    while(!q.empty()){

        n = q.front();

        q.pop();

        // go to all the adjacent vertices of n

        for( int x = 0; x < n->adj.size(); x++ )

        {

            // If a adjacent has not been visited, then mark it visited and enqueue it

            // Update the distance of the adjacent vertices along the way

            // Stop when you reach the destination vertex and return the needful

        }

    }

    return -1;

}

Graph.hpp:

#ifndef GRAPH_H

#define GRAPH_H

#include<vector>

#include<iostream>

struct vertex;

struct adjVertex{

    vertex *v;

};

struct vertex{

    int key;

    bool visited = false;

    int distance = 0;

    vertex *pred = NULL; // predecessor

    std::vector<adjVertex> adj;

};

class Graph

{

    public:

        void addEdge(int v1, int v2);

        void addVertex(int v);

        int findShortestPath(int sourceVertex, int destinationVertex);

        void printPath(int sourceVertex, int destinationVertex);

    private:

        std::vector<vertex*> vertices;

};

#endif

