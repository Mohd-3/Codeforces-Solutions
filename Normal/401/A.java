import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken()), x = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine());
            int count = 0;
            for (int i = 0; i < n; i++)
                count += Integer.parseInt(st.nextToken());
            if (count == 0)
                out.println(0);
            else if (Math.abs(count) <= x)
                out.println(1);
            else { 
                int tmp = Math.abs(count);
                if (tmp % x == 0)
                    out.println(tmp / x);
                else
                    out.println(tmp/x + 1);
                }
            out.flush();
            out.close();
        }
    }
}
