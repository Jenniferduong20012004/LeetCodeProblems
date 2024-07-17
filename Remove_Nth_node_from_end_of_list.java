import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class Remove_Nth_node_from_end_of_list {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        Queue<Integer> queue = new LinkedList<>();
        if (head == null){
            return head;
        }
        while (head != null){
            queue.add(head.val);
            head = head.next;
        }
        ListNode result = new ListNode();
        ListNode node = result;
        while (!queue.isEmpty()){
            node.val = queue.remove();
            if (queue.size()==n){
                break;
            }
        }
        return result;
    }
}
