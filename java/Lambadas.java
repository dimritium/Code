class Lambadas{
        public interface MathOperation {
            int operation(int a, int b);            
        }
        private int operate(int a, int b, MathOperation mathOperation){
            return (mathOperation.operation(a,b));
        }
    public static void main(String[] args) {
        Lambadas lam = new Lambadas();
        MathOperation add = (int a, int b) -> a+b;
        MathOperation sub = (a, b) -> a-b;
    
        System.out.println(lam.operate(4,9, add));
        System.out.println(lam.operate(4,9, sub));
        
        }
    }