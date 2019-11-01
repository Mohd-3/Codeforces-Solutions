import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            int result = 0;
            while (n-- > 0) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int cnt =0 ;
                for (int i =0; i < 3; i++)
                    if (st.nextToken().equals("1"))
                        cnt++;
                if (cnt >= 2)
                    result++;
            }
            System.out.println(result);
        }
    }
}
