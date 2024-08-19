import java.util.ArrayList;
import java.util.List;

public class Spiral_Matrix {
    public static List<Integer> spiralOrder(int[][] matrix) {
        List <Integer> list = new ArrayList<>();
        int left=0, right = matrix[0].length-1, up=0, down = matrix.length-1;
        while (left <=right && up <=down){
            System.out.println(right);
            System.out.println(down);
            for (int i=left; i <=right;i++){
                list.add (matrix[up][i]);
            }
            up++;
            if (left >right || up >down){
                break;
            }
            for (int i= up; i <=down;i++){
                list.add (matrix [i][right]);
            }
            right --;
            if (left >right || up >down){
                break;
            }
            for (int i= right; i >= left;i--){
                list.add (matrix [down][i]);
            }
            down --;
            if (left >right || up >down){
                break;
            }
            for (int i= down; i >=up;i--){
                list.add (matrix [i][left]);
            }
            left++;
            if (left >right || up >down){
                break;
            }
        }
        return list;

    }
    public static void main (String [] args){
        int [][] i = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        System.out.println(spiralOrder(i));
    }
}
