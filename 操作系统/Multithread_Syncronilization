public class CacheLoader {
	public static Map<String,String> channelMapSC = new ConcurrentHashMap<>();
}

public class SecThread extends Thread{
	@Override
	public void run() {
		// TODO Auto-generated method stub
		if(CacheLoader.channelMapSC.get("1")!=null) {
			synchronized (CacheLoader.channelMapSC.get("1")) {
			try {
				System.out.println("processing now");
				Thread.sleep(1000);
				System.out.println("finish process");
				CacheLoader.channelMapSC.get("1").notify();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
		}
		
	}
	
}


public class MainThread {

	public static void main(String[] args) throws Exception {
		String semaphore1 = new String();
		synchronized (semaphore1) {
			System.out.println("get mission");
			System.out.println("set flag");
			CacheLoader.channelMapSC.put("1", semaphore1);
			System.out.println("waiting process");
			Thread t1 = new SecThread();
			t1.start();
			semaphore1.wait();
			System.out.println("get result");
		}
		
		
	}

}
