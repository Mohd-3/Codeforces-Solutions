import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) { 
            PrintWriter out = new PrintWriter(System.out);
            String odd = "WBWBWBWB";
            String even = "BWBWBWBW";
            boolean fail = false;
            for (int j = 1; j <= 8; j++) { 
                String tmp = br.readLine();
                boolean found = false;
                if (j % 2 == 0) {
                    if (tmp.equals(even))
                        found = true;
                    else {
                        for (int i = 0; i < 8; i++) {
                            tmp = tmp.substring(tmp.length()-1) + tmp.substring(0, tmp.length()-1);
                            if (tmp.equals(even)) {
                                found = true;
                                break;
                            }
                        }
                        if (!found) {
                            fail = true;
                            break;
                        }
                    }
                }
                else { 
                    if (tmp.equals(odd))
                        found = true;
                    else { 
                        for (int i = 0; i < 8; i++) {
                            tmp = tmp.substring(tmp.length()-1) + tmp.substring(0, tmp.length()-1);
                            if (tmp.equals(odd)) {
                                found = true;
                                break;
                            }
                        }
                        if (!found) { 
                            fail = true;
                            break;
                        }
                    }
                }
            }
            out.println(fail ? "NO" : "YES");
            out.flush();
            out.close();
        }
    }
}
                    
