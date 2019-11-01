import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            String[] arr = br.readLine().split("\\+");
            Arrays.sort(arr);
            out.print(arr[0]);
            for (int i = 1; i < arr.length; i++)
                out.print("+" + arr[i]);
            out.println();
            out.flush();
            out.close();
        }
    }
}