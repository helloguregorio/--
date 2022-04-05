/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=nullptr,*tail=nullptr;
        int c=0;
        while(l1||l2){
            int val1=l1?l1->val:0;
            int val2=l2?l2->val:0;
            int sum=val1+val2+c;
            if(!head){
                head=new ListNode(sum%10);
                tail=head;
            }else{
                tail->next=new ListNode(sum%10);
                tail=tail->next;
            }
            c=sum/10;
            if(l1){
                l1=l1->next;
            }
            if(l2){
                l2=l2->next;
            }
        }
        if(c>0){
            tail->next=new ListNode(c);
        }
        return head;
    }
};
// @lc code=end

