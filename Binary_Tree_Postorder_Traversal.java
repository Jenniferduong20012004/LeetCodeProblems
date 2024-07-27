import java.util.ArrayList;
import java.util.List;

public class Binary_Tree_Postorder_Traversal {
    private static void post (TreeNode root,List <Integer> stack){
        if (root == null){
            return;
        }
        post (root.left, stack);
        post (root.right, stack);
        stack.add (root.val);
    }
    public static List<Integer> postorderTraversal(TreeNode root) {
        List <Integer> result = new ArrayList<>();
        post (root, result);
        return result;
    }
    public static void main (String [] args){
        TreeNode treeNode = new TreeNode(9);
        treeNode.left = new TreeNode(10);
        treeNode.right = new TreeNode(100);
        treeNode.right.right = new TreeNode(9);
        System.out.println(postorderTraversal(treeNode));

    }
}
