package test1;
import java.util.*;

public class Demo {
public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    int a = scan.nextInt();
    if(a==2){
    System.out.println("2");
    System.exit(0);
    }

    for(int b=3;b<a;b++) {
        int flag = 0;
        for(int c=2;c<b;c++) {
            if(b%c==0) {
                flag = 1;
            }
            
        }
        if(flag==0) {
            System.out.println(b);
        }
        flag = 0;
    }
    
}
}