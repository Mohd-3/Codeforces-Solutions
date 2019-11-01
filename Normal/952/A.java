import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            System.out.println(Integer.parseInt(br.readLine())%2==0 ? 0 : 1);
        }
    }
}