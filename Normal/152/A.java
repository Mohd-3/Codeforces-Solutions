import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
            int[][] arr = new int[m][n];
            Set<Integer> se = new HashSet<>();
            for (int i = 0; i < n; i++) {
                String s = br.readLine();
                for (int j = 0; j < m; j++) {
                    arr[j][i] = Integer.parseInt(String.valueOf(s.charAt(j)));
                }
            }
            for (int i = 0; i < m; i++) {
                int highest = 0;
                List<Integer> li = new ArrayList<>();
                for (int j = 0; j < n; j++) {
                    if (arr[i][j] > highest) {
                        highest = arr[i][j];
                        li.clear();
                        li.add(j);
                    }
                    else if (arr[i][j] == highest)
                        li.add(j);
                }
                se.addAll(li);
                
            }

            out.println(se.size());
            out.flush();
            out.close();
        }
    }
}

