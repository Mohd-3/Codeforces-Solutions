import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            int n = Integer.parseInt(br.readLine());
            boolean fail = false;
            int t5 = 0;
            int f0 = 0;
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++) {
                int tmp = Integer.parseInt(st.nextToken());
                if (tmp == 25)
                    t5++;
                else if (tmp == 50)
                    f0++;
                while (tmp > 50)  { 
                    if (f0 == 0)
                        break;
                    f0--;
                    tmp -= 50;
                }
                while (tmp > 25) {
                    if (t5 == 0)
                        break;
                    t5--;
                    tmp -= 25;
                }
                if (tmp != 25) {
                    fail = true;
                    break;
                }
            }
            out.println(fail ? "NO" : "YES");
            out.flush();
            out.close();
        }
    }
}
                

