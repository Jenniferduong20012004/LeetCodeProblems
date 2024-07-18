import java.util.ArrayList;
import java.util.List;

public class Odd_Even_Linked_List {
    public static ListNode oddEvenList(ListNode head) {
        List<Integer> array = new ArrayList<>();
        if (head == null){
            return head;
        }
        while (head != null){
            array.add (head.val);
            head = head.next;
        }
        ListNode result = new ListNode ( array.get(0));
        ListNode ne = result;
        for (int i =2; i < array.size(); i+=2){
            ne.next = new ListNode();
            ne= ne.next;
            ne.val = array.get(i);
        }
        for (int i =1; i < array.size(); i+=2){
            ne.next = new ListNode();
            ne= ne.next;
            ne.val = array.get(i);
        }
        return result;

    }

}
