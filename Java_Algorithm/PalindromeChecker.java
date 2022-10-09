import java.util.*;
import java.io.*;


public class Palindrome{
  public static void main(String[] args){
  String ss = "tenet";
   int low = 0;
   int high = ss.length() -1;
   boolean ispalindrome = false; 
   
      while (low < high){
        if (ss.charAt(low) != ss.charAt(high))
         break;
        else 
          ispalindrome = true;
          
        high--;
        low++;
      }
      if (ispalindrome)
        System.out.println(" yes ! it is palindrome");
      else if (ispalindrome != true) 
         System.out.println(" No sorry ! it's not palindrome ");
   
   }  
  
}

