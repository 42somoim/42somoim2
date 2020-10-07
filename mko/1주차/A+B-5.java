import java.util.Scanner;

public class Main {
    public static void main(String[] args) 
    {
    	int a=1,b=1,i=0;
    	int[] arr  = new int[100];
        Scanner sc = new Scanner(System.in);
        while (a!=0 && b!=0) {
        	a = sc.nextInt();
        	b = sc.nextInt();
        	arr[i++]= a+b;
        }
        i=0;
        while (arr[i] !=0) {
        	System.out.println(arr[i++]);
        }
    }
}