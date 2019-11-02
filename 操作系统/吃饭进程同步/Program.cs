using System;
using System.Threading;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)

        {
            Eat eat = new Eat(1);
            Par par = new Par();
            Thread thread1 = new Thread(new ParameterizedThreadStart(eat.Eatfood));
            /* ThreadStart threadStart = new ThreadStart(eat);
             Thread thread = new Thread(threadStart);*/
            thread1.Start(par);
            Console.WriteLine("1 is created");
            Thread thread2 = new Thread(new ParameterizedThreadStart(eat.Eatfood));
            /* ThreadStart threadStart = new ThreadStart(eat);
             Thread thread = new Thread(threadStart);*/
            thread2.Start(par);
            Console.WriteLine("2 is created");
        }
           
        }
    class Par
    {
        public int account = 0;
    }
    }

