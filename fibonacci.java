class Fibonacci {

    static int fib(int total){
      //Base Case
      if (total <= 1){
        return total;
      }

      return fib(total-1) + fib(total-2);
    }
    public static void main( String args[] ) {
        int total = 15;
         for (int i= 0; i < total; i++)
            {System.out.print(fib(i) + " ");}
  }
    
}
