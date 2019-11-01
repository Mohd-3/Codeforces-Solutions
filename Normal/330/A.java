import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
            char[][] arr = new char[n][m];
            for (int i = 0; i < n; i++)
                arr[i] = br.readLine().toCharArray();
            int count = 0;
            for (int i = 0; i < n; i++) {
                boolean f = false;
                int j = 0;
                for (j = 0; j < m; j++) {
                    if (arr[i][j] == 'S') {
                        f = true;
                        break;
                    }
                }
                if (!f) {
                    count += j;
                    for (int t = 0; t < m; t++)
                        arr[i][t] = 'F';
                }
            }
            for (int j = 0; j < m; j++) {
                int cnt = 0;
                boolean f = false;
                for (int i = 0; i < n; i++) {
                    if (arr[i][j] == 'S') {
                        f = true;
                        break;
                    }
                    if (arr[i][j] != 'F')
                        cnt++;
                }
                if (!f)
                    count += cnt;
            }
            out.println(count);
            out.flush();
            out.close();
        }
    }
}

