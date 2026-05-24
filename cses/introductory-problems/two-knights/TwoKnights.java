import java.io.*;
import java.util.StringTokenizer;

public class TwoKnights {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st = new StringTokenizer(r.readLine());
		int n = Integer.parseInt(st.nextToken());
		
        for(long k=1; k<=n; k++)

        {
            long attacking = 4*(k-1)*(k-2);
            long total = ((k*k)*((k*k)-1))/2;

            pw.println(total-attacking);

        }



		pw.close();
	}
}
