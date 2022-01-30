//adding two numbers of same length
// 99+99 = 1->9->8

public class sumOfTwoNumbers {
    static class Node{
        Node next;
        int data;
        Node(int d){
            this.data = d;
            this.next = null;
        }
    }
    public static  void printLinkedList(Node head){
        if(head == null) {
            System.out.println("null");
            return;
        }
            while(head != null){
                System.out.print(head.data+"->");
                head = head.next;
            }
        System.out.println("null");
    }
    public static Node recAdd(Node head1, Node head2){
        if(head1 == null || head2 == null)
            return null;

        Node resHead = recAdd(head1.next, head2.next);
        int carry = 0;
        if(resHead != null && resHead.data > 9){
            resHead.data %= 10;
            carry = 1;
        }
        int sum = head1.data + head2.data + carry;
        Node resNode = new Node(sum);
        resNode.next = resHead;
        resHead = resNode;

        return resHead;

    }

    public static void main(String[] args) {
        Node head1 = new Node(9);
        head1.next = new Node(9);

        Node head2 = new Node(9);
        head2.next = new Node(9);




        Node resultHead =
                recAdd(head1, head2);

        Node newHead = resultHead;
        if(resultHead.data > 9) {
            resultHead.data = resultHead.data % 10;
            newHead = new Node(1);
            newHead.next = resultHead;
        }

        printLinkedList(newHead);
    }
}
