import java.util.HashSet;
import java.util.Set;

public class Contain_Duplicate_II {
    public static boolean containsNearbyDuplicate(int[] nums, int k) {
        int i=0, j =0;
        Set<Integer> set = new HashSet<>();
        if (nums.length ==1 || k ==0){
            return false;
        }
        if (k > nums.length){
            k = nums.length-1;
        }
        while (i < k){
            if (set.contains(nums[i])){
                return true;
            }
            set.add(nums[i]);
            i++;
        }
        while (i < nums.length && j < nums.length){
            //System.out.println(set);
            if (set.contains(nums[i])){
                return true;
            }
            set.add(nums[i]);
            set.remove(nums[j]);
            j++;
            i++;

        }
        return false;
    }
    public static void main (String [] args){
        int [] i = {1,2,3,1,2,3};
        int [] j = {99,99};
        int [] k = {1,2,1};
        int []z = {1,0,1,1};
        System.out.println (containsNearbyDuplicate(i,2));
        System.out.println (containsNearbyDuplicate(j,2));
        System.out.println (containsNearbyDuplicate(k,0));
        System.out.println (containsNearbyDuplicate(z,1));

    }
}