// This is the code for simple and basic binary search and hope it can help. !! 
import java.io.*;
import java.util.*;

public class binarysearch{
  public static void main(String[] args){
    int[] arr = {10,11,12,13,14,15,16,17,18,19,20};
    int num = 20;
    int ans = binarysearch(arr, num);
    System.out.println(ans);
  }
  static int binarysearch(int arr[] , int target){
    int start = 0;
    int end = arr.length - 1;
    
      while(start <= end ){
         int mid = start + (end - start)/2;
        if (target < arr[mid] )
		end = mid - 1;
	else if (target > arr[mid] )
		start = mid +1;
	else
	     return mid;

      }return -1;
  }
}
