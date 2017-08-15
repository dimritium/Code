//first step is to sort the edges acc to weight pick smallest until edges are v-1
import java.util.*;
import java.io.*;

class graph{
    class Edge implements Comparable<Edge>{
        int src, dest, weight;
        public int compareTo(Edge compareEdge){
            return this.weight - compareEdge.weight;
        }
    }
    class subset{
        int parent, rank;
    }
    int V,E;
    Edge edge[];
    graph(int v, int e){
        V = v;
        E = e;
        edge = new Edge[E];
        for(int i = 0; i<e; i++)
            edge[i] = new Edge();
    }
    int find(subset subsets[], int i){
        if(subsets[i].parent!=i)
            subsets[i].parent = find(subsets,subsets[i].parent);
        return subsets[i].parent;
    }
    void Union(subset subsets[], int x, int y){
        int xroot = find(subsets, x);
        int yroot = find(subsets, y);
        if(subsets[xroot].rank < subsets[yroot].rank){
            subsets[xroot].parent = yroot;
        }
        else if(subsets[xroot].rank > subsets[yroot].rank){
            subsets[yroot].parent = xroot;
        }
        else{
            subsets[yroot].parent = xroot;
            subsets[xroot].rank++;
        }
    }
    void kruskalMST(){
        Edge result[] = new Edge[V+1];
        int e = 0, i = 0;
        for(i = 0; i<V; i++){
            result[i] = new Edge();
        }
        Arrays.sort(edge);
        subset subsets[] = new subset[V+1];
        for(i = 1; i<=V; i++)
            subsets[i] = new subset();
        for(int v = 1; v <= V; v++){
            subsets[v].parent = v;
            subsets[v].rank = 0;
        }
        i = 0;
        while(e<V-1){
            Edge next_edge = new Edge();
            next_edge = edge[i++];
            int x = find(subsets,next_edge.src);
            int y = find(subsets,next_edge.dest);
            if(x!=y){
                result[e++] = next_edge;
                Union(subsets,x,y);
            }
        }
        int res = 0;
        for(i = 0; i<e; i++){
            res+=result[i].weight;
        }
            System.out.println(res);
    }
    public static void main (String[] args)
    {
        
        int n,m;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        graph g = new graph(n,m);
        for(int i = 0; i<m; i++)
        {
            int u,v,w;
            u = sc.nextInt();
            v = sc.nextInt();
            w = sc.nextInt();
            g.edge[i].src = u;
            g.edge[i].dest = v;
            g.edge[i].weight = w;
        }
        g.kruskalMST();
    }
}