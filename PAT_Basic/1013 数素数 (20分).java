import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int min=sc.nextInt();
		int max=sc.nextInt();
		int count=0;
		int count0=0;
		String str="";
		for(int i=2;;i++) {
			boolean iftrue=false;
			for(int j=2;j*j<=i;j++) {
				if(i%j==0&&j!=i) {
					iftrue=true;
					break;
				}
			}
			if(iftrue==false) {
				count++;
			}
			if(count>max) {
				break;
			}
			if(count>=min&&count<=max&&iftrue==false) {
				count0++;
				if(count==max){
				System.out.print(i);	
				}else{
					if(count0==10) {
					System.out.print(i);
					System.out.println();
					count0=0;
				}else {
					System.out.print(i+" ");
				}
			}
				
			}
		}
	}

}
