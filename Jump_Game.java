public class Jump_Game {
    public static boolean canJump(int[] nums) {
        int firstIndex =0;
        while (firstIndex < nums.length-1){
            System.out.println(firstIndex);
            if (nums[firstIndex] ==0){
                return false;
            }
            else{
                firstIndex += nums [firstIndex];
            }
        }
        if (firstIndex >= nums.length){
            return false;
        }
        return true;
    }
    public static void main (String [] args){
        int [] i = {2,3,1,1,4};
        System.out.println(canJump(i));
    }
}
