   M S B A M L   `   `   `  ����B  >LruDemo, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null!clr-namespace:LruDemoLruDemo  5   	       LruDemo.MainWindow   5   	   \ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   'localclr-namespace:LruDemo     5   	     � Title$  
MainWindow��5   	   $	��450��6   $	��800��6)   .��5	      � $
��Left=�6   $	��606��6&    � ColumnDefinitions 5
   
   �� 5      $
��213* �6   �� 5      $	��76* �6   �� 5      $	��14* �6   �� 5      $��0* �6   �� 5      $��0* �6   .+�5   
   �� -   5         ��Name$ pageBox��5      $
��Left=�6%   $��	50,37,0,0q�6@   $
��Wrap=�6S   $	��Top=�6g   $��15��6   $��90��6�   �� 6�   $�请输入执行页数:��6�   �� 6�   $�:��6�   6�   �� 5   
   -   5        $ blockBox��5      $
��Left=�6&   $��	50,67,0,0q�6A   $
��Wrap=�6T   $��输入几个物理块:��6h   $	��Top=�6x   $��15��6�   $��87��6�   �� 5   
   -   5         ��Name$ 	inputPage��5      $
��Left=�6%   $��23��6@   $��
151,29,0,0q�6L    �� TextWrapping$
 Wrap=�6`   $	��Top=�6t   $	��308��6�   $��2��6�   �� 5   
   -   5        $ 
inputBlock��5      $
��Left=�6&   $��23��6A   $��
151,67,0,0q�6M   $
 Wrap=�6a   $	��Top=�6u   $	��308��6�   $��2��6�   �� 5   
   -   5         ��Name$ startButton��5      $��开始��6&   $
��Left=�63   $��	46,29,0,0q�6N   $	��Top=�6a   $��75��6y   $��19��6�   $��1��6�   �� 5   
   -   5        $ 
contentBox��5      $
��Left=�6&   $	��207��6A   $��
50,142,0,0q�6N   $
 Wrap=�6b   $�� ��6v   $	��Top=�6~   $	��451��6�   $��2��6�   �� 5   
   -   5        $ 	reportBox��5      $
��Left=�6%   $��23��6@   $��133,114,0,0q�6L   $
 Wrap=�6a   $	��Top=�6u   $	��308��6�   $��2��6�   5      5      