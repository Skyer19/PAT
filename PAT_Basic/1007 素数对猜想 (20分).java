import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int num=sc.nextInt();
		int k=0;
		int count=0;
		int arr[]=new int [100000];
		for(int i=2;i<=num;i++) {
			int flag=0;
			for(int j=2;j*j<=i;j++){
				if(i%j==0) {
					flag=1;
					break;
				}
			}
			if(flag==0) {
				arr[k]=i;
				k++;
			}
		}
		for(int i=1;i<k;i++) {
			if(arr[i]-arr[i-1]==2) {
				count++;
			}
		}
		System.out.println(count);
	}

}
