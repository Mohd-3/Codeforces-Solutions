import java.util.*;
import java.io.*;

public class Main
{
	public static void main (String[] args) throws IOException
	{
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			String s = br.readLine();
			char c = '2';
			int cnt = 1;
			boolean flag = false;
			for (int i = 0; i < s.length(); i++) {
			    if (cnt >= 7) {
			        flag = true;
			        break;
			    }
				if (s.charAt(i) == c)
					cnt++;
				else { 
				
					cnt = 1;
					c = s.charAt(i);
				}
			}
			out.println(flag || cnt >= 7 ? "YES" : "NO");
			out.flush();
			out.close();
		}
	}
}