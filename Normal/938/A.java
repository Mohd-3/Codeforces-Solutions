import java.util.*;
import java.io.*;

public class Main
{
	static Set<Character> se;
	public static void main (String[] args) throws IOException
	{
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			int n = Integer.parseInt(br.readLine());
			String s = br.readLine();
			se = new HashSet<>();
			StringBuilder sb = new StringBuilder();
			se.add('a');
			se.add('e');
			se.add('o');
			se.add('i');
			se.add('u');
			se.add('y');
			sb.append(s.charAt(0));
			for (int i = 1; i < n; i++) {
				if (isVowel(s.charAt(i-1)) && isVowel(s.charAt(i)))
					continue;
				sb.append(s.charAt(i));
			}
			out.println(sb.toString());
			out.flush();
			out.close();
			
			
		}
	}
	
	public static boolean isVowel(char c) {
		return se.contains(c);
	}
	
}