import java.io.*;
import java.util.*;

public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        StringBuilder sb = new StringBuilder(br.readLine());
        int n = sb.length();
        if (n <= 20) {
            out.println(1 + " " + sb.length());
            out.println(sb.toString());
            out.close();
            return;
        }
        int good = -1;
        int div = -1;
        for (int i = 2; i <n; ++i) {
            if (Math.ceil(1.0*n/i) <= 20) {
                good = (int)Math.ceil(1.0*n/i);
                div = i;
                break;
            }
        }
        int add = n%div; 
        int j = 0;
        while (add > 1) {
            sb.insert(j, '*');
            j += good;
            if (j > n)
                j = 0;
            add--;
        }
        if (sb.length() < good*div)
            sb.append('*');
        String ans = sb.toString();
        out.println((int)(Math.ceil(1.0*n/good)) + " " + good);
        j = 0;
        for (int i = 0; i < ans.length(); ++i) {
            out.print(ans.charAt(i));
            j++;
            if (j == good) {
                out.println();
                j = 0;
            }
        }
        if (ans.charAt(ans.length()-1) == '*')
            out.println();
        out.close();
    }
}
