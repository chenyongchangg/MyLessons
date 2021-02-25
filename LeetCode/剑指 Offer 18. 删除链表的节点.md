#### [剑指 Offer 18. 删除链表的节点](https://leetcode-cn.com/problems/shan-chu-lian-biao-de-jie-dian-lcof/)

> 给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。
>
> 返回删除后的链表的头节点。
>
> 注意：此题对比原题有改动
>
> 示例 1:
>
> 输入: head = [4,5,1,9], val = 5
> 输出: [4,1,9]
> 解释: 给定你链表中值为 5 的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.
> 示例 2:
>
> 输入: head = [4,5,1,9], val = 1
> 输出: [4,5,9]
> 解释: 给定你链表中值为 1 的第三个节点，那么在调用了你的函数之后，该链表应变为 4 -> 5 -> 9.
>
> 来源：力扣（LeetCode）
> 链接：https://leetcode-cn.com/problems/shan-chu-lian-biao-de-jie-dian-lcof
> 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
>
> 

```c++


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteNode(ListNode *head, int val) {
        if(head->next == nullptr ) return nullptr;
        if(head->val == val) return head->next;
        ListNode *front = head->next, *tailor = head;
        while(front != nullptr){
            if(front->val == val){
                tailor->next = front->next;
                break;
            }
            tailor = front;
            front = front->next;
        }
        return head;
    }
};

```



> 不要求O(1) 要求O(1)需要换值删除，考虑特殊情况有　链表只有一个和链表结尾删除