import java.io.*;
class Student implements Serializable{
    int id;
    String name;
    Student(int id, String name)
    {
        this.id = id;
        this.name = name;
    }
}
class Depersist{
    public static void main(String[] args)throws Exception {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("f.txt"));
        Student s = (Student)in.readObject();
        System.out.print(s.id+""+s.name);
        in.close();
    }
}