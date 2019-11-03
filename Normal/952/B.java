import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            String[] arr = new String[10];
            for (int i = 0; i < 10; i++) {
                System.out.println(i);
                arr[i] = br.readLine();
            }
            boolean normal = false;
            for (String s : arr) {
                if (s.equals("great!") || s.equals("not bad") || s.equals("cool") || s.equals("don't think so") || s.equals("don't touch me"))
                normal = true;
            }
            System.out.println(normal ? "normal" : "grumpy");
        }
    }
}