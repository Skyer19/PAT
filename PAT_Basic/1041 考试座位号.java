import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		String [][] arr=new String [num][3];
		for(int i=0;i<num;i++) {
			for(int j=0;j<3;j++) {
				arr[i][j]=sc.next();
			}
		}
		int check=sc.nextInt();
		int count=0;
		while(count<check) {
			String str=sc.next();
			for(int i=0;i<num;i++) {
				if(arr[i][1].equals(str)) {
					System.out.println(arr[i][0]+" "+arr[i][2]);
                    break;
				}
			
			}
		}
	}

}
