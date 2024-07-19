import java.util.ArrayList;
import java.util.List;

public class Three_sum {
    public static void swap(int[] arr, int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    public static int partition(int[] arr, int low, int high)
    {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {

            // If current element is smaller than the pivot
            if (arr[j] < pivot) {

                // Increment index of smaller element
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high);
        return (i + 1);
    }
    public static void quickSort(int[] arr, int low, int high)
    {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    public static List<List<Integer>> threeSum(int[] nums) {
        quickSort (nums, 0, nums.length-1);
        List <List<Integer>> result = new ArrayList<>();
        for (int i =0; i < nums.length-2; i++){
            if (i >0){
                if (nums[i]== nums[i-1]){
                    continue;
                }
            }
            int target = 0-nums[i];
            int low = i+1;
            int high = nums.length-1;
            while (low < high){
                if (low >i+1){
                    if (nums[low]== nums[low-1]){
                        low+=1;
                        continue;
                    }
                }
                if (high <nums.length-1){
                    if (nums[high]== nums[high+1]){
                        high -=1;
                        continue;
                    }
                }
                if (nums[low]+ nums[high] > target){
                    high -=1;
                }
                else if(nums[low]+ nums[high] < target){
                    low+=1;
                }
                else{
                    List<Integer> list = new ArrayList<>();
                    list.add (nums[i]);
                    list.add (nums[low]);
                    list.add (nums[high]);
                    result.add (list);
                    low+=1;
                    high -=1;
                }
            }
        }
        return result;
    }
    public static void main (String [] args){
        int [] i = {2,-2,0,2};
        System.out.println(threeSum(i));
    }
}
