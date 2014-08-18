import java.util.*;
class Main
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		boolean vis[][] = new boolean[25][25];
		int h, w, sx = 0, sy = 0, n;
		boolean bbb;
		short dx[] = { 0 , 0 , 1 , -1 };
		short dy[] = { 1 , -1, 0 , 0 };
		char ch[][] = new char[25][25];
		while(true)
		{
			PriorityQueue <edge> p = new PriorityQueue();
			w = sc.nextInt();
			h = sc.nextInt();
			n = 0;
			if(w == 0 && h == 0) return;
			bbb = true;
			for(int i = 0; i < h; i++)
			{
				ch[i] = sc.next().toCharArray();
				if(bbb)
					for(int j = 0; j < w; j++)
						if(ch[i][j] == 'S')
						{	sx = i; sy = j; bbb = false;	}
			}
			//System.out.println("\n" + sx + " " + sy + "\n");
			p.add(new edge(sx, sy, 0));
			//System.out.println("added edge " + sx + ", " + sy + ", " + 0);
			while(p.size() > 0)
			{
				//System.out.println("Inside while");
				edge c = p.poll();
				vis[c.a][c.b] = true;
				if(ch[c.a][c.b] == 'D')
				{
					System.out.println(c.w);
					break;
				}
				for(int i = 0; i < 4; i++)
				{
					int x = c.a + dx[i];
					int y = c.b + dy[i];
					if(x >= 0 && y >= 0 && x < h && y < w && ch[x][y] != 'X' && !vis[x][y])
					{
						int wt;
						if(ch[x][y] == 'D') wt = c.w;
						else wt = c.w + ch[x][y] - '0';
						p.add(new edge(x, y, wt));
						//System.out.println("added edge " + x + ", " + y + ", " + (c.w + ch[x][y] - '0'));
						//System.out.println(p.peek());
					}
				}
				//System.out.println("exiting while");
			}
			for(int i = 0; i < h; i++)
				Arrays.fill(vis[i], false);
		}
	}
}

class edge implements Comparable <edge>
{
	int a, b, w;
	edge(int A, int B, int W) 
	{ a = A; b = B; w = W; }
	public int compareTo(edge e){return w - e.w;}
}