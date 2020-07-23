import java.util.Scanner;
//相当于双指针
//当双指针分别指向空格时，中间夹的就是单词
//然后用substring把这个单词加到新的字符串中
//最终形成一个新的字符串
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String str=" "+sc.nextLine()+" ";
		String str0="";
		for(int i=str.length()-1;i>0;i--) {
			if(str.charAt(i)==' ') {
			for(int j=i-1;j>=0;j--) {
				if(str.charAt(j)==' ') {
					str0=str0+str.substring(j+1, i)+ " ";
                    i=j;
                    //为啥这里不用加一个break?
				}
			}
			}
		}
		System.out.println(str0.trim());
	}
}

//更简单的方法
/*
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String str = new Scanner(System.in).nextLine();
        String[] strs = str.split(" ");
        for (int i = strs.length - 1; i >= 0; i--) {
            if (i != strs.length - 1) {
                System.out.print(" ");
            }
            System.out.print(strs[i]);
        }
    }
}
*/
