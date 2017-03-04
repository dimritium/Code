import java.util.*
][]
class Ro{
	void rotLeft(int arr[][])
	{

	}
}
class Rota{
	public static void main(String[] args)
	{
		int no;
		Scanner sc = new Scanner(System.in)
		System.out.println("Enter number of elements");
		no = sc.nextInt();
		int arr[][] = new int[3][3];
		int new_arr[][] = new int[3][3];
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				arr[i][j] = sc.nextInt();
			}
		}
		Sytem.out.println("Enter your choice\n1 For left rotation\n2 For right rotation");
		int choice = sc.nextInt();
		switch(choice)
		{
			case 1:
			for(int i = 0; i<n; i++)
				for(int j = 0; j<n; j++)
				{
					if((j+1)<3)
						new_arr[i][j+1] = arr[i][j];
					else
						new_arr[i+1][j] = arr[i][j];
				}
		}
	}
}