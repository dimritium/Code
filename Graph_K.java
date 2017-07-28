import java.io.*;
import java.util.*;

class Graph_K{
    
    class Edge implements Comparable<Edge>{
        int src,dest,weight;
        public int compareTo(Edge compareEdge){
            return this.weight - compareEdge.weight;
        }
    };

    class subset{
        int parent,rank;
    }
    int V,E;
    Edge edge[];
    Graph_K(int v,int e){
        V = v;
        E = e;
        edge = new Edge[E];
        for(int i = 0;i<e;i++)
            edge[i] = new Edge();
    }
    int find(subset subsets[],int i){
        if (subsets[i].parent!=i)
            subsets[i].parent = find(subsets,subsets[i].parent);
        return subsets[i].parent;
    }
    
    void Union(subset subsets[],int x, int y){
        int xroot = find(subsets,x);
        int yroot = find(subsets,y);
        if(subsets[xroot].rank<subsets[yroot].rank)
            subsets[xroot].parent = yroot;
        else if(subsets[yroot].rank<subsets[xroot].rank)
            subsets[yroot].parent = xroot;
        else{
            subsets[yroot].parent = xroot;
            subsets[xroot].rank +=1 ; 
        }
    }
}