import java.util.*;
import java.io.*;

public class Main
{
	public static void main (String[] args) throws IOException
	{
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			String s1 = br.readLine(), s2 = br.readLine();
			for (int i = 0; i < s1.length(); i++) 
				out.print(s1.charAt(i) == s2.charAt(i) ? "0" : "1");
			out.println();
			out.flush();
			out.close();
		}
	}
}