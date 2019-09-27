import java.math.*;
import java.util.*;

//使用了java自带的栈
//基本入站元素
class Point{
	public int x;
	public int y;
	public int getx() {
		return x;
	}
	public int gety() {
		return y;
	}
}

class Game{
	Stack<Point> posiPoints = new Stack<Point>();
	//游戏主程序
	void runGame() {
		//记住上一个点 以便于回溯
		Point lastPoint = new Point();
		lastPoint.x=0;
		lastPoint.y=1;
		System.out.println("Game Start!");
		Point a = new Point();
		a.x=0;a.y=1;posiPoints.push(a);
		
		a.x=1;posiPoints.push(a);
		//无限循环直到出口  缺点 无法判断是否有答案
		while(true) {
			System.out.println(point.x+"    "+point.y);
			//printDoor();
			if(point.x==9&&point.y==8) break;
			Point tempoint =  new Point();
			tempoint.x=point.x;
			tempoint.y=point.y;
			//前进
			if(door[tempoint.x+1][tempoint.y]==' '&&(tempoint.x+1!=lastPoint.x)&&tempoint.y!=lastPoint.y) {
				point.x++;
				posiPoints.push(point);
			}
			else if(door[tempoint.x][tempoint.y++]==' '&&tempoint.x!=lastPoint.x&&(tempoint.y+1!=lastPoint.y)) {
				point.y++;
				posiPoints.push(point);
			}
			else if(door[tempoint.x-1][tempoint.y]==' '&&(tempoint.x-1!=lastPoint.x)&&tempoint.y!=lastPoint.y) {
				point.x--;
				posiPoints.push(point);
			}
			else if(door[tempoint.x][tempoint.y--]==' '&&tempoint.x!=lastPoint.x&&(tempoint.y-1!=lastPoint.y)) {
				point.y--;
				posiPoints.push(point);
			}
			//后退
			else {
			
			door[point.x][point.y]='#';
			posiPoints.pop();
			point = posiPoints.pop();
			posiPoints.push(point);
			
			}
			
			
			
		}
		
		
		
	}
	//设置起点
	public Game() {
		// TODO Auto-generated constructor stub
		point.x=1;
		point.y=1;
	}
	Point point = new Point();
	char[][] door = new char[10][10];
	//生成墙
	public void makeDoor() {
		
		for(int i=0;i<10;i++) {
			for(int j=0;j<10;j++) {
				door[i][j]='#';
			}
		}
		for(int i=1;i<9;i++) {
			for(int j=1;j<9;j++) {
				if(Math.random()>0.1) {
					door[i][j]=' ';
					
				}
				
				else door[i][j]='#';
			}
		}
		door[9][8]=' ';
		door[0][1]=' ';
		door[1][1]=' ';
	}
	public void printDoor() {
		for(int i=0;i<10;i++) {
			for(int j=0;j<10;j++) {
				System.out.print(door[i][j]);
			}
			System.out.println("");
		}
	}
	
	
}

//主类
public class Maze {
	public static void main(String[] args) {
		Game game = new Game();
		game.makeDoor();
		System.out.println("The door is ");
		game.printDoor();
		System.out.println("The way is");
		game.runGame();
		System.out.println("Game over!");
		
		
		
		
	}

}
