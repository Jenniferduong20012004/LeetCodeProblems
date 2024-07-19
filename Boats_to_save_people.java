import java.util.HashSet;
import java.util.Set;

public class Boats_to_save_people {
    public static void swap(int[] arr, int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    public static int partition (int [] arr, int low, int high){
        int pivot = arr[high];
        int i = (low -1);
        for (int j =low; j <= high-1; j++){
            if (arr[j]< pivot){
                i++;
                swap (arr, i,j);
            }
        }
        swap (arr, i+1, high);
        return i+1;
    }
    public static void quickSort(int[] arr, int low, int high)
    {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    public static int numRescueBoats(int[] people, int limit) {
        quickSort (people, 0, people.length-1);
        int numOfBoat =0;
        int low = 0;
        int high = people.length-1;
        Set<Integer> set = new HashSet<>();
        while (low <high){
            if (people [low]+ people [high] <= limit){
                numOfBoat +=1;
                System.out.println(low);
                System.out.println(high);
                set.add (low);
                set.add (high);
                low+=1;
                high -=1;
            }
            else{
                high -=1;
            }
        }
        numOfBoat += (people.length- (set.size()) );
        return numOfBoat;
    }
    public static void main (String [] args){
        int [] i = {1,2};
        System.out.println(numRescueBoats(i, 3));
    }
}
