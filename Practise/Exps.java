import java.util.concurrent.atomic.*;

class Parent{
    static int a = 5;
    static void msg(){
        System.out.print("parent");
    }
}

class Exps extends Parent{
    static void msg() throws ArithmeticException{
        System.out.println("Can it print?");
    }
    public static void main(String[] args){
        AtomicInteger integer = new AtomicInteger(23);
        Parent p = new Exps();
        a = 6;
        System.out.print(a);
        p.msg();
    }
}