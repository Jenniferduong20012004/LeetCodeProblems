public class Merge_Two_Sorted_List {
    public static ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode result = new ListNode();
        ListNode head = result;
        if (list1 == null && list2 == null){
            return list1;
        }
        while (list1 != null ||list2 != null){
            int a = 1000;
            if (list1 !=null){
                a =list1.val;
            }
            int b = 1000;
            if (list2 !=null){
                b =list2.val;
            }
            int note =0;
            if (a<b){
                note =a;
                list1 = list1.next;
            }
            else {
                note = b;
                list2 = list2.next;
            }
            head.val = note;
            if (list1 != null ||list2 != null) {
                head.next = new ListNode();
                head = head.next;
            }
        }
        return result;
    }
    public static void main (String [] args){
        ListNode l = new ListNode(4);
        ListNode p = new ListNode(2,l);
        ListNode k = new ListNode(1,p);
        ListNode m = new ListNode(4);
        ListNode q = new ListNode(3,m);
        ListNode r = new ListNode(1,q);
        ListNode result = mergeTwoLists(k,r);
        result.display();
        System.out.println();
        ListNode z = new ListNode(9);
        ListNode x = new ListNode(230);
        ListNode c = new ListNode(123,x);
        ListNode v = new ListNode(38,c);
        ListNode b = new ListNode(32,v);
        ListNode n = new ListNode(30,b);
        ListNode a= new ListNode(17,n);
        ListNode s = new ListNode(12,a);
        ListNode d = new ListNode(10,s);
        ListNode f = new ListNode(9,d);
        ListNode g = new ListNode(1,f);
        ListNode t1 = new ListNode();
        ListNode t2 = new ListNode();
        ListNode result1 = mergeTwoLists(g,z);
        result1.display();





    }
}
