import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) { 
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());
            int l = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            int p = Integer.parseInt(st.nextToken());
            int nl = Integer.parseInt(st.nextToken());
            int np = Integer.parseInt(st.nextToken());
            int ml = (k*l)/(n*nl);
            int slices = (c*d)/n;
            int pow = p / (n*np);
            if (ml < 1 || slices < 1 || pow < 1)
                out.println(0);
            else
                out.println(Math.min(ml, Math.min(slices, pow)));
            out.flush();
            out.close();
        }
    }
}
