import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
            int[] arr = new int[m];
            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < m; i++)
                arr[i] = Integer.parseInt(st.nextToken());
            Arrays.sort(arr);
            int i = 0, j = n-1;
            int diff = Integer.MAX_VALUE;
            while (j < m)
                diff = Math.min(diff, arr[j++] - arr[i++]);
            out.println(diff);
            out.flush();
            out.close();
        }
    }
}


