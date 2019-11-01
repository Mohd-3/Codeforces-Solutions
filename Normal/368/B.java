import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
            int m2 = m;
            int[] arr = new int[n];
            st = new StringTokenizer(br.readLine());
            Set<Integer> se = new HashSet<>();
            int[] arr2 = new int[n];
            for (int i = 0; i < n; i++) {
                int tmp = Integer.parseInt(st.nextToken());
                arr[i] = tmp;
            }
            for (int i = n-1; i >= 0; i--) {
                se.add(arr[i]);
                arr2[i] = se.size();
            }
                
            while (m-- > 0)
                out.println(arr2[Integer.parseInt(br.readLine())-1]);
            out.flush();
            out.close();
        }
    }
}




