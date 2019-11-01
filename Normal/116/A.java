import java.util.*;
import java.io.*;
 
public class Main
{
	public static void main (String[] args) throws IOException
	{
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			int n = Integer.parseInt(br.readLine());
			int max = 0, tmp = 0;
			while (n-- > 0) {
				StringTokenizer st = new StringTokenizer(br.readLine());
				tmp -= Integer.parseInt(st.nextToken());
				tmp += Integer.parseInt(st.nextToken());
				max = Math.max(max, tmp);
			}
			out.println(max);
			out.flush();
			out.close();
		}
	}
}