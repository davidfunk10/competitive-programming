import java.io.*;
import java.util.StringTokenizer;

public class IncreasingArray {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st = new StringTokenizer(r.readLine());
		int n = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(r.readLine());
        int prev = Integer.parseInt(st.nextToken());

        long moves = 0;

        for(int i=0; i<n-1; i++)
        {
            int cur = Integer.parseInt(st.nextToken());
            if(cur<=prev)
            {
                moves += (prev-cur);
            }
            else if (cur>prev)
            {
                prev = cur;
            }
            
        }
		
        pw.print(moves);
		pw.close();
	}
}
