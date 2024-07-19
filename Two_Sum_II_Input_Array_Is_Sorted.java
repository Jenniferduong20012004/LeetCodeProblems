public class Two_Sum_II_Input_Array_Is_Sorted {
    public static int[] twoSum(int[] numbers, int target) {
        int i =0;
        int find =0;
        while (i < numbers.length){
            int low = i+1;
            int high = numbers.length-1;
            while (low <=high){
                int mid = low + (high -low)/2;
                if (numbers[i]+ numbers [mid]== target){
                    find = mid;
                    break;
                }
                if  (numbers[i]+ numbers [mid]< target) {
                    low = mid +1;
                }
                else{
                    high = mid -1;
                }
            }
            if (find !=0){
                break;
            }
            i+=1;
        }
        int res [] = {i+1, find+1};
        return res;
    }
    public static void main (String [] args){
       int [] i = {2,7,11,15};
       System.out.println(twoSum(i, 9)[0]);
       System.out.println(twoSum(i, 9)[1]);
    }
}
