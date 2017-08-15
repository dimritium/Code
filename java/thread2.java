class NewThread implements Runnable
{
    Thread t;
    NewThread(){
        t = new Thread(this, "Demo");
        System.out.println("Child Thread "+t);
        t.start();
    }
    public void run()
    {
        try{
            for(int i = 5; i>0; i--)
            {
                System.out.println("Child thread: "+i);
                Thread.sleep(500);
            }
        }catch(InterruptedException e)
        {
            System.out.print("Child Interupted");
        }
        System.out.println("Exiting child thread");
    }
}

class thread2{
    public static void main(String[] args) {
        new NewThread();
        try{
            for(int i = 5; i>0; i--)
            {
                System.out.println("Main Thread "+i);
                Thread.sleep(1000);
            }
        }catch(InterruptedException e)
        {
            System.out.println("Main thread interrupted");
        }
        System.out.println("Main thread Exiting");
    }
}