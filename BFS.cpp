#include<iostream>
#include<string>
#include<queue>
using namespace std;
class Node{
    public:
        int i;
        int j;
};
#define SIZE 5
int graph[SIZE][SIZE];
int visited[SIZE];
int main(){
    /*Making the graph*/
    graph[0][2]=graph[2][0]=1;
    graph[2][4]=graph[4][2]=1;
    graph[2][1]=graph[1][2]=1;
    graph[0][3]=graph[3][0]=1;
    graph[3][6]=graph[6][3]=1;
    //
    queue<int> q;
    q.push(0);
    visited[0]=1;
    int node=0;
    while(!q.empty()){
        node=q.front();
        q.pop();
        cout<<" "<<node<<"  ,";
        for(int i=0;i<SIZE;i++){
            if(graph[node][i]==1&&visited[i]!=1){
                q.push(i);
                visited[i]=1;
            }
        }
    }

    return 0;
}
