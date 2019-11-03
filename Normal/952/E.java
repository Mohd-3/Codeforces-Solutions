import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            String[] arr = new String[n], arr2 = new String[n];
            for (int i = 0; i < n; i++) {
                arr[i] = br.readLine().split("\\s+")[0];
                arr2[i] = arr[i];
            }
            Arrays.sort(arr);
            int count = 0;
            for (int i =0; i < n; i++) {
                if (!arr[i].equals(arr2[i])
                count++;
            }
            System.out.println(count);
            
        }
    }
}