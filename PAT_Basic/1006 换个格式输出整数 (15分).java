import java.util.Scanner;
//老想法，旧思维
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc =new Scanner(System.in);
		String str=sc.next();
		int length =str.length();
		if(length==3) {
			int first=Integer.parseInt(str.substring(0,1));
			for(int i=0;i<first;i++) {
				System.out.print("B");
			}
			int second=Integer.parseInt(str.substring(1,2));
			for(int i=0;i<second;i++) {
				System.out.print("S");
			}
			int third=Integer.parseInt(str.substring(2,3));
			for(int i=0;i<third;i++) {
				System.out.print(i+1);
			}
		}
		if(length==2) {
			int second=Integer.parseInt(str.substring(0,1));
			for(int i=0;i<second;i++) {
				System.out.print("S");
			}
			int third=Integer.parseInt(str.substring(1,2));
			for(int i=0;i<third;i++) {
				System.out.print(i+1);
			}
		}
		if(length==1) {
			int third=Integer.parseInt(str.substring(0,1));
			for(int i=0;i<third;i++) {
				System.out.print(i+1);
			}
		}
	}

}