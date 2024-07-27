import java.util.ArrayList;
import java.util.List;

public class Binary_Tree_Inorder_Traversal {
    private static void inorder (TreeNode root, List<Integer> list ){
        if (root == null){
            return;
        }
        inorder (root.left, list);
        list.add (root.val);
        inorder (root.right, list);
    }
    public static List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> list = new ArrayList<>();
        inorder (root, list);
        return list;
    }
    public static void main (String [] args){
        TreeNode treeNode = new TreeNode(9);
        treeNode.left = new TreeNode(10);
        treeNode.right = new TreeNode(100);
        treeNode.right.right = new TreeNode(9);
        System.out.println(inorderTraversal(treeNode));

    }
}
