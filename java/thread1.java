
class thread1
{
    public static void main(String[] args) {
        Thread t = Thread.currentThread();
        System.out.println("currentThread " + t);
        t.setName("epso");
        System.out.println("After name change "+t);
        try{
            for(int n = 5; n>0; n--)
            {
                System.out.println(n);
                Thread.sleep(1000);
            }
        }
        catch(InterruptedException e){
            System.out.println("Main thread Mesage");
        }        
    }
}