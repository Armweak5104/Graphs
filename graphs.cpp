#include <bits/stdc++.h>
using namespace std;

class Graph{
    int vertices;
    list<int> *l;
public:
    Graph(int v){
        vertices = v;
        l = new list<int>[vertices];
    }
    void edges(int i, int j, bool undir = true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    void printAdjlist(){
        for(int i = 0; i<vertices; ++i){
            cout<<i<<": ";
            for(int k: l[i]){
                cout<<k<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g(5);
    g.edges(0,1);
    g.edges(0,4);
    g.edges(1,2);
    g.edges(2,3);
    g.edges(3,4);
    g.printAdjlist();
}

/*Not done with bfs yet*/