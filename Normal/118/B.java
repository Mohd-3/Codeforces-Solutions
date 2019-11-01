import java.util.*;
import java.io.*;

public class Main
{
	public static void main (String[] args) throws IOException
	{
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			int n = Integer.parseInt(br.readLine());
			for (int i = 0; i <= n; i++) {
				for (int j = 0; j < n-i; j++) {
					out.print("  ");
				}
				int j;
				for (j = 0; j <= i; j++) {
					if (j == 0)
						out.print(j);
					else
						out.print(" " + j);
				}
				j--;
				while (j-- > 0)
					out.print(" " + j);
				out.println();
				
				
			}
			for (int i = n-1; i >= 0; i--) {
				for (int j = n-i; j > 0; j--) {
					out.print("  ");
					
				}
				int j;
				for (j = 0; j <= i; j++) {
					if (j == 0)
						out.print(j);
					else
						out.print(" " +j);
				}
				j--;
				while (j-- > 0)
					out.print(" " +j);
				out.println();
			}
			out.flush();
			out.close();
		}
	}
}