
package sortalgorithm;

import java.util.Random;

/**
 *
 * @author shn.ataman
 */

public class SortAlgorithm {
    
    public static void main(String[] args) {
        
        int my_array[] = new int[1000000];
        
        for (int i = 0; i < my_array.length; i++) {
            Random rand = new Random();
            int j = rand.nextInt(1000) + 1; 
            my_array[i] = j;
        }
        
        long first_time = System.currentTimeMillis();
        
        //SelectionSort(my_array);
        //InsertionSort(my_array);
        //BubbleSort(my_array);        
        QuickSort(my_array, 0, my_array.length - 1);
        
        /*
        System.out.println("Sort MyArray");
        for (int i = 0; i < my_array.length; i++) {
            System.out.println(i+".Index : "+my_array[i]);
        }
        */
        
        long end_time = System.currentTimeMillis();
        
        System.out.println("TotalTime(milisecond): "+ (end_time-first_time));
        
    }
    
    public static void SelectionSort(int[] array){
        for (int i = 0; i < array.length - 1; i++) {
            int index = i;
            for (int j = i + 1; j < array.length; j++) {
                if(array[j] < array[index]){
                    index = j;
                }
            }
            int littleValue = array[index];
            array[index] = array[i];
            array[i] = littleValue;
        }
    }
    
    public static void QuickSort(int array[], int first, int end){
        if(first < end){
            int pIndex = QuickSortPartition(array, first, end);
            QuickSort(array, first, pIndex - 1);
            QuickSort(array, pIndex+1, end);
        }
        else    return;
    }
    
    public static int QuickSortPartition(int array[],int first, int end){
        int temp;
        int pivot = array[end];
        int pIndex = first;

        for(int i = first; i < end; i++){
            if(array[i] <= pivot){
                temp = array[i];
                array[i] = array[pIndex];
                array[pIndex] = temp;
                pIndex++;
            }
        }
        
        temp = array[pIndex];
        array[pIndex] = array[end];
        array[end] = temp;
        return pIndex;
    }    
    
    public static void InsertionSort(int[] array){
        for (int i = 1; i < array.length; i++) {
            int temp = array[i];
            int j = i - 1;
            
            while(j > -1 && array[j] > temp){
                array[j+1] = array[j];
                j--;
            }
            
            array[j+1] = temp;
        }
    }
    
    public static void BubbleSort(int[] array){
        int temp = 0;
        
        for (int i = 0; i < array.length; i++) {
            for (int j = 1; j < array.length - i; j++) {
                if(array[j-1] > array[j]){
                    temp = array[j-1];
                    array[j-1] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
    
}
