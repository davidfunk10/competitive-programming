import java.io.*;
import java.util.StringTokenizer;

public class NumberSpiral {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st = new StringTokenizer(r.readLine());
		int points = Integer.parseInt(st.nextToken());
		

		for(int i =0; i<points; i++)
        {
            st = new StringTokenizer(r.readLine());
            long y = Integer.parseInt(st.nextToken());
            long x = Integer.parseInt(st.nextToken());

            long layer = Math.max(y,x);

            long val = 0;

            if(layer%2==1)
            {
                if(x==layer)
                {
                    val = (layer*layer) - (y-1);
                }
                else
                {
                    val = (layer*layer) - 2*(layer-1) + (x-1);
                }
            }


            else{

                if(y==layer)
                {
                    val = (layer * layer) - (x-1);
                }

                else
                {
                    val = (layer*layer) - 2*(layer-1) + (y-1);
                }
            }

            pw.println(val);


        }

		pw.close();
	}
}
