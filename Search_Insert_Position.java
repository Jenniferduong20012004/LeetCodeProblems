public class Search_Insert_Position {
    public static int searchInsert(int[] nums, int target) {
        int low =0;
        int high = nums.length -1;
        int mid =0;
        while (low <= high){
            mid = low + (high -low)/1;
            if (nums[mid]== target){
                return mid;
            }
            if (nums[mid]< target){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
        if (nums [mid] < target){
            return mid +1;
        }
        else{
            if (mid ==0){
                return 0;
            }
            return mid -1;
        }
    }
    public static void main (String [] args){
        int [] i = {1,3,5,6};

        System.out.print (searchInsert (i, 5));
    }
}
