//Java program to illustrate various pitfalls.
public class LooppitfallsDemo
{
	public static void main(String[] args)
	{

		// infinite loop because condition is not apt
		// condition should have been i>0.
		for (int i = 5; i != 0; i -= 2)
		{
			System.out.println(i);
		}
		int x = 5;

		// infinite loop because update statement
		// is not provided.
		while (x == 5)
		{
			System.out.println("In the loop");
		}
	}
}
