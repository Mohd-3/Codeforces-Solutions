import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            char[][] grid = new char[n][m];
            String tmp = "";
            int dogs = 0;
            for (int i = 0; i < n; i++) {
                tmp = br.readLine();
                for (int j = 0; j < m; j++) {
                    if (tmp.charAt(j) == 'S') {
                        dogs++;
                        grid[i][j] = 'S';
                    } else
                        grid[i][j] = tmp.charAt(j) == '.' ? 'D' : 'W';
                }
            }
            boolean one = false;
            boolean fail = false;
            if (n == 1 && m == 1) {
                one = true;
                if (tmp.equals("."))
                    out.println("D");
                else {
                    out.println("No");
                    out.println(tmp);
                }
            }

            else if (n == 1) {
                for (int j = 0; j < m-1; j++) {
                     if ((grid[0][j] == 'S' && grid[0][j+1] == 'W') || (grid[0][j] == 'S' && grid[0][j+1] == 'W')
                        || (grid[0][j] == 'W' && grid[0][j+1] == 'S') || (grid[0][j] == 'W' && grid[0][j+1] == 'S'))
                         fail = true;

                }
            }
            else if (m == 1) {
                for (int i = 0; i < n-1; i++) {
                    if ((grid[i][0] == 'S' && grid[i+1][0] == 'W') || (grid[i][0] == 'S' && grid[i][0] == 'W')
                                || (grid[i][0] == 'W' && grid[i+1][0] == 'S') || (grid[i][0] == 'W' && grid[i + 1][0] == 'S'))
                            fail = true;

                }
            }
            else {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < m - 1; j++) {
                        if ((grid[i][j] == 'S' && grid[i][j + 1] == 'W') || (grid[i][j] == 'S' && grid[i + 1][j] == 'W')
                                || (grid[i][j] == 'W' && grid[i][+1] == 'S') || (grid[i][j] == 'W' && grid[i + 1][j] == 'S'))
                            fail = true;
                    }
                }
            }
            if (!one) {
                if (fail || dogs == 0)
                    out.println("No");
                else {
                    out.println("Yes");
                    for (char[] c : grid)
                        out.println(String.valueOf(c));

                }

            }
            out.flush();
            out.close();


        }
    }
}
