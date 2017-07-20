class mergeSortLL{
    node head = null;
    static class node{
        int val;
        node next;
        public node(int val){
            this.val = val;
        }
    }
    node sortedMerge(node a, node b){
        node result = null;
        if(a==null){
            return b;
        }
        if(b == null){
            return a;
        }
        if(a.val < b.val){
            result = a;
            result.next = sortedMerge(a.next, b);
        }
        else{
            result = b;
            result.next = sortedMerge(a,b.next);
        }
        return result;
    }
    node MergeSort(node h){
        if(h==null || h.next == null){
            return h;
        }
        node middle = getMiddle(h);
        node nextomiddle = middle.next;
        middle.next = null;
        node left = mergeSort(h);
        node right = mergeSort(nextomiddle);
        node sortedlist = sortedMerge(left, right);
        return sortedList;
    }
    node getMiddle(node h){
        if(h == null){
            return h;
        }
        node fastptr = h.next;
        node slowptr = h;
        while(fastptr!=null){
            fastptr = fastptr.next;
            if(fastptr!=null){
                slowptr = slowptr.next;
                fastptr = fastptr.next;
            }
        }
        return slowptr;
    }
}