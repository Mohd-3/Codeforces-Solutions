import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            int count = 1;
            while (n > 1) {
                if ((n&1) != 0) {
                    count++;
                    n = (n-1)/2;
                }
                else
                    n /= 2;
            }
            System.out.println(count);
        }
    }
}


