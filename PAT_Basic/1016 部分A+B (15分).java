import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String str1=sc.next();
		String da=sc.next();
		String pa="";
		String str2=sc.next();
		String db=sc.next();
		String pb="";
		for(int i=0;i<str1.length();i++) {
			if((str1.substring(i, i+1)).equals(da)) {
				pa=pa+da;
			}
		}
		for(int i=0;i<str2.length();i++) {
			if((str2.substring(i, i+1)).equals(db)) {
				pb=pb+db;
			}
		}if(pa.length()==0&&pb.length()==0) {
			System.out.println("0");
		}else {	
			int sum=0;
		sum=Integer.parseInt(pa)+Integer.parseInt(pb);
		System.out.println(sum);
	}

}
}
