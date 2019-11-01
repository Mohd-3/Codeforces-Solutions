import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            int t = Integer.parseInt(br.readLine());
            List<String> li = new ArrayList<>();
            while (t-- > 0) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                String command = st.nextToken();
                if (command.equals("pwd")) {
                    out.print("/");
                    for (String s : li)
                        out.print(s + "/");
                    out.println();
                }
                else { 
                    String temp = st.nextToken();
                    if (temp.substring(0, 1).equals("/")) {
                        li.clear();
                        temp = temp.substring(1);
                    }
                    String[] path = temp.split("/");
                    for (String s : path) {
                        if (s.equals("..")) {
                            if (li.size() > 0)
                                li.remove(li.size()-1);
                        }
                        else
                            li.add(s);
                    }
                }
            }
            out.flush();
            out.close();
        }
    }
}


