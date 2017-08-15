import java.util.Iterator;
import java.util.LinkedList;
import java.util.Stack;
class Graph{
    private int V;
    private LinkedList<Integer>adj[];
    Graph(int v){
        V = v;
        adj = new LinkedList[v];
        for(int i = 0; i<v; i++)
            adj[i] = new LinkedList();
    }

    public void addEdge(int v, int w){
        adj[v].add(w);
    }
    public void bfs(int s){
        boolean visited[] = new boolean[V];
        visited[s] = true;
        LinkedList<Integer> queue = new LinkedList<Integer>();
        queue.add(s);
        while(!queue.isEmpty()){
            s = queue.poll();
            Iterator<Integer>i = adj[s].listIterator();
            while(i.hasNext()){
                int n= i.next();
                if(!visited[n]){
                    queue.add(n);
                    visited[n] = true;
                }
            }
        }
    }
    private void DFSUtil(int s, boolean visited[]){
        visited[s] = true;
        System.out.print(s+" ");
        Iterator<Integer> i = adj[s].listIterator();
        while(i.hasNext()){
            int n = i.next();
            if(!visited[n])
                DFSUtil(n, visited);
        }
    }
    public void dfs(int s){
        boolean visited[] = new boolean[V];
        for(int i = 0,k=0; i<V; i++){
        if(!visited[i]){
        System.out.println("Connected "+k);
        k++;
        DFSUtil(i, visited);
        }
        }
    }
    public static void main(String[] args) {
        // Graph g = new Graph(5);
        Graph g = new Graph(4);
 
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        // g.addEdge(2, 3);
        g.addEdge(3, 3);
        g.dfs(1);
    }
}