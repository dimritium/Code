class overloading{
    static void vaTest(int ... v){
        System.out.print(v.length);
    }
    public static void main(String[] args) {
        vaTest(1,2,4);
    }
}