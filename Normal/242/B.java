import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            int n = Integer.parseInt(br.readLine());
            List<Pair> li = new ArrayList<>();
            StringTokenizer st;
            long min = 1000000000;
            long max = 0;
            for (int i = 0; i < n; i++) {
                st = new StringTokenizer(br.readLine());
                long x = Long.parseLong(st.nextToken());
                long y = Long.parseLong(st.nextToken());
                min = Math.min(x, min);
                max = Math.max(y, max);
                li.add(new Pair(x, y, i+1));
            }
            Collections.sort(li);
            int pos = -1;
            for (Pair p : li) {
                if (p.x <= min && p.y >= max)
                    pos = p.pos;
            }
            out.println(pos);
            out.flush();
            out.close();

        }
    }
}

class Pair implements Comparable<Pair> {
    long x, y;
    int pos;
    public Pair(long x, long y, int pos) {
        this.x = x;
        this.y = y;
        this.pos = pos;
    }
    @Override
    public int compareTo(Pair p2) {
        return (int) (this.x - p2.x);
    }
}

