// #include <bits/stdc++.h>
// using namespace std;

// struct ListNode{
//     int val;
//     ListNode*next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x,ListNode* next): val(x), next(next) {}
// };
// ListNode*lodakumar(ListNode*head){
//     ListNode*temp=head;
//     vector<int>v;
//     vector<ListNode*>a;
//     while(temp!=nullptr){
//         a.push_back(temp);
//         v.push_back(temp->val);
//         temp=temp->next;
//     }
//     temp=head;
//     int n=v.size();
//     vector<int> dp(n,1);
//     int ans=0;
//     int ind1,ind2;
//     for(int i=1;i<n;i++){
//         if(v[i]>=v[i-1]) dp[i]+=1;
//         // else dp[i]=1;
//         if(ans>dp[i]){
//             ans=dp[i];
//             ind2=i;
//             ind1=i-ans-1;
//         }
//     }
//     a[ind2]->next=nullptr;
//     return a[ind1];

// }
// int main()
// {
//     ListNode*g=new ListNode(4);
//     ListNode*f=new ListNode(4,g);
//     ListNode*e=new ListNode(5,f);
//     ListNode*d=new ListNode(4,d);
//     ListNode*c=new ListNode(4,e);
//     ListNode*b=new ListNode(5,c);
//     ListNode*a=new ListNode(2,b);
//     ListNode *ans=lodakumar(a);
//     ListNode*temp=ans;
//     // while(temp!=nullptr){
//     //     cout<<temp->val<<" ";
//     //     temp=temp->next;
//     // }
//     return 0;
// }

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

ListNode* longestNonIncreasingSubList(ListNode* head) {
    if (!head) {
        return nullptr;
    }

    ListNode *current = head;
    ListNode *start = nullptr;
    ListNode *end = nullptr;
    ListNode *maxStart = nullptr;
    ListNode *maxEnd = nullptr;
    int maxLength = 0;
    int currentLength = 1;

    while (current->next) {
        if (current->val >= current->next->val) {
            if (currentLength == 1) {
                start = current;
            }
            currentLength++;
            end = current->next;

            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = start;
                maxEnd = end;
            }
        } else {
            currentLength = 1;
            start = nullptr;
            end = nullptr;
        }

        current = current->next;
    }

    if (maxStart && maxEnd) {
        maxEnd->next = nullptr; // Truncate the list
    }

    return maxStart;
}

void printList(ListNode *head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode *head = new ListNode(2);
    head->next = new ListNode(5);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next->next = new ListNode(2);

    std::cout << "Original List: ";
    printList(head);

    ListNode *result = longestNonIncreasingSubList(head);
    
    std::cout << "Longest Non-Increasing Sub List: ";
    printList(result);

    return 0;
}