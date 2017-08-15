class MultThread{
    public static void main(String[] args) {
        Thread t = Thread.currentThread();
        System.out.println("Curent Thread");
        t.setName("My thread");
        System.out.println("After name "+t);
        try{
            for(int n = 5; n>0; n--){
                System.out.println(n);
                Thread.sleep(1000);
            }
        }catch(InterruptedException e){
            System.out.print("Main thread interrupted");
        }
    }
    
}
