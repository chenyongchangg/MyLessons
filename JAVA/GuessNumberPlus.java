import java.util.*;

abstract class Game{
	int robotScore;
	int rate;
	abstract  void init() ;
	void init(int a) {
		// TODO Auto-generated method stub
		
	}
	abstract  void start() ;
	abstract  void pause() ;
	abstract  void over() ;
}

abstract class Player{
	int playScore;
	
	abstract public void init() ;
	abstract public void quit() ;
}


class RealGame extends Game{
	@Override
	void init(int a) {
		rate = a;
		System.out.println("游戏初始完毕！");
		robotScore = 100;
		
	}
	@Override
	void start() {
		System.out.println("游戏开始了！请在下方输入你猜的整型数字：");
		Scanner scan = new Scanner(System.in);
		while(true) {
			
			int randomNumber = (int) (Math.random()*100);
			int userInput = scan.nextInt();
			if(Math.abs(randomNumber-userInput)<rate) {
			System.out.println("Right! You got 10 point  "+(200-robotScore));
			robotScore-=10;
			if(robotScore<=0) {
				System.out.println("you win!");
				System.exit(0);
			}
			if(robotScore>=200) {
				System.out.println("you lose!");
				System.exit(0);
			}
			
			}
			else {
			System.out.println("Wrong! You lose 10 point"+(200-robotScore));
			robotScore+=10;
			if(robotScore<=0) {
				System.out.println("you win!");
				System.exit(0);
			}
			if(robotScore>=200) {
				System.out.println("you lose!");
				System.exit(0);
			}
			}

			    }
			    
			}
		
	
	@Override
	void pause() {
		System.out.println("游戏暂停中！");
		
	}
	@Override
	void over() {
		System.out.println("游戏结束！");
	}
	public RealGame() {
		// TODO Auto-generated constructor stub
		int a;
		System.out.println("请输入你的误差判断标准：");
		Scanner scanner = new Scanner(System.in);
		a=scanner.nextInt();
		
		init(a);
		
	}
	@Override
	void init() {
		// TODO Auto-generated method stub
		
	}

}

class RealPlayer extends Player{

	@Override
	public void init() {
		// TODO Auto-generated method stub
		playScore = 100;
		
	}

	@Override
	public void quit() {
		// TODO Auto-generated method stub
		System.out.println("下次再见啦！");
		System.exit(0);
		
	}
	public void start() {
		RealGame realGame = new RealGame();
		realGame.start();
	}
	
}

public class GuessNumberPlus{
	public static void main(String[] args) {
		RealPlayer realPlayer = new RealPlayer();
		realPlayer.start();
	}
	
}
