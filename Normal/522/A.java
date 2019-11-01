import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
    public static void main(String[] args) {
        InputStream input = System.in;
        OutputStream output = System.out;
        InputReader in = new InputReader(input);
        PrintWriter out = new PrintWriter(output);
        Solution s = new Solution();
        s.solve(1, in, out);
        out.close();
    }

    static class Solution {

        static int n, m;
        Map<String, List<String>> adj = new HashMap<>();
        Map<String, Integer> vis = new HashMap<>();
        public void solve(int cs, InputReader in, PrintWriter out) {
            n = in.nextInt();
            for (int i = 0; i < n; i++) {
                String a = in.next().toLowerCase();
                in.next();
                String b = in.next().toLowerCase();
                if (!adj.containsKey(b)) {
                    adj.put(b, new LinkedList<>());
                    adj.get(b).add(a);
                }
                else
                    adj.get(b).add(a);
            }
            bfs("polycarp");
            List<Integer> li = new ArrayList<>();

            for (Map.Entry<String,Integer> entry : vis.entrySet()) {
                li.add(entry.getValue());
            }
            Collections.sort(li, Collections.reverseOrder());
            out.println(li.get(0)+1);



        }

        public void bfs(String src) {
            Queue<String> q = new LinkedList<>();
            vis.put(src, 0);
            q.add(src);
            while (!q.isEmpty()) {
                String p = q.poll();
                if (adj.containsKey(p)) {
                for (String ch : adj.get(p)) {
                    vis.put(ch, vis.get(p) + 1);
                    q.add(ch);
                }
                }
            }
        }
    }

    static class InputReader {
        BufferedReader br;
        StringTokenizer st;

        public InputReader(InputStream i) {
            br = new BufferedReader(new InputStreamReader(i), 32768);
            st = null;
        }

        public String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return st.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }

        public long nextLong() {
            return Long.parseLong(next());
        }

        public double nextDouble() {
            return Double.parseDouble(next());
        }

        public String nextLine() {
            try {
                return br.readLine();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }

    }

}
