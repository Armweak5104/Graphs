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
    void bfs(int source){
        queue<int> tracking;
        bool *visited  = new bool[vertices]{0};
        tracking.push(source);
        visited[source] = true;
        int f;
        while(!tracking.empty()){
            f = tracking.front();
            cout<<f<<endl;
            tracking.pop();
            for(auto i: l[f]){
                if(!visited[i]){
                    tracking.push(i);
                    visited[i] = true;
            }
        }
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
    //g.printAdjlist();
    g.bfs(1);
}

