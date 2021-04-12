package heapsort;

import java.util.Arrays;

public class HeapSort {

    private void headAdjust(int[] arr, int i, int length){
        int temp = arr[i];//先取出当前元素i
        for(int k=i*2+1;k<length;k=k*2+1){//从i结点的左子结点开始，也就是2i+1处开始
            if(k+1<length && arr[k]<arr[k+1]){//如果左子结点小于右子结点，k指向右子结点
                k++;
            }
            if(arr[k] >temp){//如果子节点大于父节点，将子节点值赋给父节点（不用进行交换）
                arr[i] = arr[k];
                i = k;
            }else{
                break;
            }
        }
        arr[i] = temp;//将temp值放到最终的位置

    }
    public void heapSort(int[] ints){
        for(int i = ints.length / 2 - 1; i >= 0; i--){
            headAdjust(ints, i, ints.length);
        }



        for(int len = ints.length; len > 0; len--){
            swap(ints, 0, len - 1);
            headAdjust(ints, 0, len - 1);
        }
        System.out.println(Arrays.toString(ints));

    }
    public static void swap(int []arr,int a ,int b){
        int temp=arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}
