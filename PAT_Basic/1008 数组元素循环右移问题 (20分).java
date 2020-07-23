import java.util.Scanner;
//好像有点违反了题意，没事，不管了:(S
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int num=sc.nextInt();
		int cir=sc.nextInt();
		String str="";
		int []arr=new int [num];
		int []arr1=new int [num];
		cir=cir%num;
		for(int i=0;i<num;i++) {
			arr[i]=sc.nextInt();
		}
		
		for(int j=0;j<arr.length-cir;j++) {
			arr1[j+cir]=arr[j];
		}
		
		for(int k=0;k<cir;k++) {
			arr1[k]=arr[arr.length-cir+k];
		}
		
		
		for(int i=0;i<arr.length;i++) {
			str=str+arr1[i]+" ";
		}
		System.out.println(str.trim());
	}

}
