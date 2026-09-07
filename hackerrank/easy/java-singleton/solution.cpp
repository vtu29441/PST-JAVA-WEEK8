import java.io.*;
import java.util.*;

class Singleton {
    private static Singleton instance;
    public String str;
    
    private Singleton() {}
    
    public static Singleton getSingleInstance() {
        if (instance == null) {
            instance = new Singleton();
        }
        return instance;
    }
}

// Manually adding the missing hidden class for Java 15
class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextLine()) {
            String input = scanner.nextLine();
            Singleton singleton = Singleton.
            getSingleInstance();
            singleton.str = input;
            System.out.println("Hello I am a singleton! 
            Let me say " + singleton.str + " to you");
        }
        scanner.close();
    }
}