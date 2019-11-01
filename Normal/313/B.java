import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            String s = br.readLine();
            int[] sum = new int[s.length()];
            int count = 0;
            sum[0] = 0;
            for (int i = 1; i < s.length(); i++) {
                if (s.charAt(i) == s.charAt(i - 1))
                    sum[i] = ++count;
                else
                    sum[i] = count;
            }
            int q = Integer.parseInt(br.readLine());
            while (q-- > 0) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int l = Integer.parseInt(st.nextToken());
                int r = Integer.parseInt(st.nextToken());
                out.println(sum[r-1]-sum[l-1]);
            }
            out.flush();
            out.close();

        }
    }
}
