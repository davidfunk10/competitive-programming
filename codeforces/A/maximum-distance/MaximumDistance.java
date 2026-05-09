import java.io.*;
import java.util.StringTokenizer;

public class MaximumDistance {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st = new StringTokenizer(r.readLine());
		int n = Integer.parseInt(st.nextToken());

        int x[] = new int[n];
        int y[] = new int[n];

        for(int i =0; i<2; i++)
        {
            st = new StringTokenizer(r.readLine());
            for(int k = 0; k<n; k++)
            {
                int val = Integer.parseInt(st.nextToken());
                if(i==0)
                    x[k] = val;
                else
                    y[k] = val;

            }
        }
		
        int mD = 0;

        for(int i = 0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int cD = (x[i]-x[j]) *(x[i]-x[j])  + (y[i]-y[j]) * (y[i]-y[j]);

                if(cD>mD)
                    mD=cD;
            
            }       
        }

        pw.print(mD);
		pw.close();
	}
}
