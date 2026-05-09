import java.io.*;
import java.util.StringTokenizer;

public class TheCowSignal {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new FileReader("cowsignal.in"));
		PrintWriter pw = new PrintWriter(new FileWriter("cowsignal.out"));

		StringTokenizer st = new StringTokenizer(r.readLine());
		int m = Integer.parseInt(st.nextToken());
		int n = Integer.parseInt(st.nextToken());
		int k = Integer.parseInt(st.nextToken());

        for(int i=0; i<m; i++)
        {
            st = new StringTokenizer(r.readLine());
            String row = st.nextToken();

            StringBuilder enlarged = new StringBuilder();

            for(int j=0; j<row.length(); j++)
            {
                
                for(int z=0; z<k; z++)
                {
                    enlarged.append(row.charAt(j));
                }
                
            }

            for(int z =0; z<k; z++)
                pw.println(enlarged);
        }


		pw.close();
	}
}
