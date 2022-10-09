import java.util.Scanner; 

public class ComputeAvearage{
  public static void main(String[] args){
  Scanner input = new Scanner (System.in);
  System.out.print("print three numbers : ");
  double num1 = input.nextDouble();
  double num2 = input.nextDouble();
  double num3 = input.nextDouble();
  
  System.out.println("The average of "+num1+" and "+num2+" and "+num3+" is  : "+(num1/3 + num2/3 + num3/3));
  }
}	
