package test1;
import java.util.*;

public class GuessNumber {
public static void main(String[] args) {

//产生随机数
	int ex = (int) (Math.random()*100);
	//作弊
	System.out.println(ex);
	Scanner scan = new Scanner(System.in);
	while(true) {
		int in = scan.nextInt();
		if(in==ex) {
		System.out.println("Right!");
		//0是java正常退出游戏
		System.exit(0);
		}
		else {
		System.out.println("Wrong!");
		}

    }
    
}
}