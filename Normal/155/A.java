import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            int n = Integer.parseInt(br.readLine());
            StringTokenizer st = new StringTokenizer(br.readLine());
            int largest = Integer.parseInt(st.nextToken());
            int smallest = largest;
            int count = 0;
            while (n-- > 1) {
                int tmp = Integer.parseInt(st.nextToken());
                if (tmp > largest) {
                    largest = tmp;
                    count++;
                }
                else if(tmp < smallest) {
                    smallest = tmp;
                    count++;
                }
            }
            out.println(count);
            out.flush();
            out.close();
        }
    }
}
            

