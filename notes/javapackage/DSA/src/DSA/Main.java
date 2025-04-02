package DSA;

public class Main {
        
        void show(String name){
            System.out.println("hello"+name);
        }
         
        String shows(String name){
            return name;
        }
    
    public static void main(String[] args) {
        Main obj = new Main();
        Main obj2 = new Main();
        obj.show("Java");
       System.out.println(
        obj2.shows("python"));
     //   System.out.println("Object 2:"+obj2.a);
        
    }
    
}