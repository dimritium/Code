import java.math.BigInteger;

class BinHeap{
    int arr[];
    int capacity;
    int heap_size;
    BinHeap(int cap){
        heap_size = 0;
        capacity = cap;
        arr = new int[cap];
    }
    private void heapify(int i){
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if(l < heap_size && arr[l] < arr[i])
            smallest = l;
        if(r < heap_size && arr[r] < arr[smallest])
            smallest = r;
        if(smallest!=i){
            int temp = arr[i];
            arr[i] = arr[parent(smallest)];
            arr[parent(smallest)] = temp;
            heapify(smallest);
        }
    }
    public int parent(int i){
        return (i-1)/2;
    }
    public int left(int i){
        return (2*i + 1); //left child;
    }
    public int right(int i){
        return (2*i + 2);
    }
    public int extractMin(){
        if(heap_size <= 0){
            // int ret = Integer.MAX_VALUE;
            return Integer.MAX_VALUE;
        }
        if(heap_size == 1){
            heap_size--;
            return arr[0];
        }
        int root = arr[0];
        arr[0] = arr[heap_size-1];
        heap_size--;
        heapify(0);

        return root;
    }
    public void decreaseKey(int i, int new_val){
        arr[i] = new_val;
        while(i!=0 && arr[i]<arr[parent(i)]){
            int temp = arr[i];
            arr[i] = arr[parent(i)];
            i = parent(i);
        }
    }
    public int getMin(){
        return arr[0];
    }
    public void deleteKey(int i){
        decreaseKey(i, Integer.MIN_VALUE);
        extractMin();
    }
    public void insertKey(int k){
        if(heap_size == capacity){
            System.out.println("Overflow");
            return;
        }
        heap_size++;
        int i = heap_size-1;
        arr[i] = k;
        while(i!=0 && arr[parent(i)] > arr[i]){
            int temp = arr[i];
            arr[i] = arr[parent(i)];
            arr[parent(i)] = temp;
            i = parent(i);
        }
    }
public static void main(String[] args) {
    BinHeap h = new BinHeap(11);
    h.insertKey(3);
    h.insertKey(2);
    h.deleteKey(1);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    System.out.println(h.extractMin());
    }
}