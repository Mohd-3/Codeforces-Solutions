import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			int n = Integer.parseInt(br.readLine());
			StringTokenizer st = new StringTokenizer(br.readLine());
			int largest;
			int smallest = largest = Integer.parseInt(st.nextToken()), iSmall = 0, iLarge = 0;
			for (int i = 1; i < n; i++) {
				int tmp = Integer.parseInt(st.nextToken());
				if (tmp > largest) {
					largest = tmp;
					iLarge = i;
				}
				else if (tmp < smallest) {
					smallest = tmp;
					iSmall = i;
				}
				else {
					if (tmp == smallest)
						iSmall = Math.max(iSmall, i);
					else if (tmp == largest)
						iLarge = Math.min(iLarge, i);
				}
			}
			if (iLarge>iSmall)
				iLarge--;
			System.out.println(iLarge + n-iSmall-1);
			
		}
		
	}

}
