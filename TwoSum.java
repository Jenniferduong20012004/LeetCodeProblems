public class TwoSum {
    public static int[] twoSum(int[] nums, int target) {
        int [] result = new int [2];
        for (int i =0; i <nums.length; i++){
            for (int j = i+1; j < nums.length; j++){
                if (nums[i]+ nums[j]== target){
                    result [0]= i;
                    result [1]= j;
                    break;
                }
            }
        }
        return result;
    }
    public static void main (String [] args){
        int [] i = {2,7,11,15};
        int [] res = twoSum(i, 9);
        System.out.print (res[0]);
        System.out.print (" ");
        System.out.print (res[1]);

    }
}