import java.util.ArrayList;
import java.util.List;
class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
      TreeNode(int val, TreeNode left, TreeNode right) {
          this.val = val;
         this.left = left;
         this.right = right;
    }
  }
public class Binary_Tree_Preorder_Traversal {
    private static void pre(TreeNode root, List<Integer> list ){
        if (root == null){
            return;
        }
        list.add (root.val);
        pre (root.left, list);
        pre (root.right, list);
    }
    public static List<Integer> preorderTraversal(TreeNode root) {
        List <Integer> list = new ArrayList<>();
        pre (root, list);
        return list;
    }
    public static void main (String [] args){
        TreeNode treeNode = new TreeNode(9);
        treeNode.left = new TreeNode(10);
        treeNode.right = new TreeNode(100);
        treeNode.right.right = new TreeNode(9);
        System.out.println(preorderTraversal(treeNode));

    }
}
