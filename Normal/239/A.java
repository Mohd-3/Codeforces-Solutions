import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int y = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());
            int n = Integer.parseInt(st.nextToken());
            int x = n-y;
            List<Integer> li = new ArrayList<>();
            if (k > n)
                out.println("-1");
            else {
            while ((x+y) % k != 0 && x > 1)
                x--;
            if (x == 0 || (x+y) %k != 0)
                out.println(-1);
            else {
            while ((x+y) % k == 0 && x > 0) {
                li.add(x);
                x -= k;
            }
            Collections.sort(li);
            if (li.size() == 0)
                out.println("-1");
            else {
            out.print(li.get(0));
            for (int i = 1; i < li.size(); i++)
                out.print(" " + li.get(i));
            out.println();
            }
            }
            }
            out.flush();
            out.close();
        }
    }
}




            
