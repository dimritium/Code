import java.util.*;

class Stud{
    double cgpa;
    String name;
    Stud(){
    }
    Stud(String name, double cgpa){
        this.name = name;
        this.cgpa = cgpa;
    }
}
class Hash{
    void sortStud(Stud a[], int n){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n-i-1; j++){
                if(a[j].cgpa < a[j+1].cgpa){
                    Stud temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }
    void printA(Stud a[], int n){
        for(int i =0; i<n; i++){
            System.out.println(a[i].name+" "+a[i].cgpa);
        }
    }
    public static void main(String[] args) {
        // Map<String,Float> o1 = new HashMap<String,Float>();
        // boolean f = 1.12 > 1.1;
        Scanner sc = new Scanner(System.in);
        Stud a[] = new Stud[5];

        for(int i = 0; i<5; i++){
        a[i] = new Stud();
        System.out.println("Enter name and CGPA");
        String name = sc.next();
        double cgpa = sc.nextDouble();
        a[i] = new Stud(name,cgpa);
    }
    Hash ob = new Hash();
    ob.sortStud(a,5);
    ob.printA(a,5);
    }
}