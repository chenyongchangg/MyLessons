using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace LruDemo
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void StartButton_Click(object sender, RoutedEventArgs e)
        {
            //中断计数
            int breakAccount = 0;
            String rawPage = inputPage.Text.Trim();
            //页面执行号码
            String[] pageNumber = Regex.Split(rawPage, ",");
            //物理块个数
            int blockNumber = int.Parse(inputBlock.Text);
            //输出执行号码
            for(int i = 0; i < pageNumber.Length; i++)
            {
                contentBox.Text += pageNumber[i] + "  ";
            }
            contentBox.Text += "\r\n";
            String[,] memory = new string[blockNumber,pageNumber.Length];
            bool[] memoryUsage = new bool[blockNumber];
            int memoryNumber = blockNumber;
            //计算物理块使用
            for (int i = 0; i < pageNumber.Length; i++)
            {
                bool isContent=false;
                if (i != 0)
                    for (int j = 0; j < memoryNumber; j++)
                    {   //判断是否在物理块
                  
                        if (memory[j, i-1] == pageNumber[i])
                        {
                            isContent = true;
                            for (int n = 0; n < memoryNumber; n++)
                            {
                                memory[n, i] = memory[n, i - 1];
                            }
                            break;
                        }

                    }
                if (isContent)
                    continue;
                //判断有空物理块
                else if (blockNumber>0)
                {//填入
                    breakAccount++;
                    for (int k = 0; k < memoryNumber; k++)
                    {
                        if (memoryUsage[k] == false)
                        {
                            
                            
                           if(i!=0) 
                                for (int n = 0; n < memoryNumber; n++)
                                {
                                   memory[n, i] = memory[n, i - 1];
                                }
                            memory[k, i] = pageNumber[i];
                            memoryUsage[k] = true;
                            blockNumber--;
                            break;
                        }
                    }
                }
                else
                {
                    breakAccount++;
                  
                    //移除一个物理块
                    int lastUse=0;
                    int blockLocation=0;
                    for(int l = 0; l < memoryNumber; l++)
                    {
                        int tem = 0;
                        for (int m = i - 1; m >= 0; m--)
                        {
                            if (pageNumber[m] == memory[l, i - 1])
                            {
                                
                                break;
                            }
                            else tem++;
                        }
                        if (lastUse < tem)
                        {
                            lastUse = tem;
                            blockLocation = l;
                        } 


                    }//调整
                    for(int n = 0; n < memoryNumber; n++)
                    {
                        memory[n, i] = memory[n, i - 1];
                    }
                    memory[blockLocation, i] = pageNumber[i];
                    memoryUsage[blockLocation] = true;
                }
               
            }
            //输出物理块
            for (int o = 0; o < memoryNumber; o++)
            {
                for(int p = 0; p < pageNumber.Length; p++)
                {   
                    if(memory[o,p]==null) contentBox.Text +=  "    ";
                    else contentBox.Text += memory[o, p] + "  ";
                }
                contentBox.Text += "\r\n";
            }
            reportBox.Text = "中断次数  " + breakAccount;
        }
    }
}
