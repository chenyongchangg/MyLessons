using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;

namespace ConsoleApp2
{
    class Eat
    {
        int flag;
        private object obj = new object();
        public Eat(int ini)
        {
            this.flag = ini;
        }

       
       public void Eatfood(object o)
        {
            while (true)
            {
                lock (obj)
                {
                    Par par = o as Par;
                    par.account++;
                    Thread.Sleep(1000);
                    Console.WriteLine(Thread.CurrentThread.ManagedThreadId+" get "+par.account);
                }
            }

        }
     
     
     
    //这里面的代码在执行后,才可以进行其他操作,在运行中不可以被中断
     
    }

}
