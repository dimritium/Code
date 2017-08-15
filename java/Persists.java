/*serialization in java is a way of mechanism to write state of an object into a byte stream
Adv:
mainly used to travel object's state on the network(known as mashaling)
serializable is the marker interface, it is used to mark java classes
The string class and all the wrapper classes implements java.io.Serializable interface by default
ObjectOutputStream class:- used to write primitive data types and java objects to an OutputStream.
writeObject() method of ObjectOutputStream class provides functionality to serialize objects,

*/

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
class Persists{
    public static void main(String[] args)throws Exception {
        Student s1 = new Student(211, "ravi");
        FileOutputStream fout = new FileOutputStream("f.txt");
        ObjectOutputStream out = new ObjectOutputStream(fout);
        out.writeObject(s1);
        out.flush();
        out.close();
        System.out.println("success");
    }
}