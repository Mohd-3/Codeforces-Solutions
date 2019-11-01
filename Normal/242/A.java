import java.io.*;
import java.util.*;


public class coin { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            List<pair> li = new ArrayList<>();
            while (a <= x) {
                int tmp = b;
                while (a <= b)
                    a++;
                if (a > x)
                    break;
                while (tmp <= y) {
                    if (tmp < a) {
                        li.add(new pair(a, tmp++));
                    }
                    else
                        break;
                }
                a++;
            }
            Collections.sort(li);
            out.println(li.size());
            for (pair pp : li)
                out.println(pp.toString());
            out.flush();
            out.close();
        }
    }
}



class pair implements Comparable<pair> {
    int x, y;
    public pair (int x, int y) {
        this.x = x;
        this.y = y;
    }
    @Override
    public int compareTo(pair p2) {
        if (this.x == p2.x)
            return this.y - p2.y;
        return this.x - p2.x;
    }
    @Override
    public String toString() {
        return String.format("%d %d", this.x, this.y);
    }
}
