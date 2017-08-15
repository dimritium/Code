class recCall{
    public int rec(int n){
        if(n == 0 || n<0)
            return 0;
        return 1+Math.max(rec(n-3), rec(n-2));
    }
    public static void main(String[] args) {
        recCall re = new recCall();
        System.out.println(re.rec(5));
    }
}