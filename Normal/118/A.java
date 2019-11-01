import java.util.*;
import java.io.*;

public class Main
{
	public static void main (String[] args) throws IOException
	{
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			String s = br.readLine();
			for (int i = 0; i < s.length(); i++) {
				char c = s.substring(i, i+1).toLowerCase().charAt(0);
				switch(c) {
					case 'a':
					case 'o':
					case 'e':
					case 'i':
					case 'y':
					case 'u':
						break;
					default:
						out.print("." + c);
						break;
				}
			}
			out.println();
			out.flush();
			out.close();
		
		}
	}
}