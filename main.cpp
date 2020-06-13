/*
 * 第一个小程序
 */
#include <vector>
#include <map>
#include <list>
#include <set>
#include <string>
#include <iostream>
#include<algorithm>
using namespace std;

struct ListNode{
    char value;
    ListNode *next;

    ListNode(){}

    ListNode(char c){
        value = c;
    }
};

void out(ListNode *LIST1) {
    if (LIST1 == nullptr) {
        return;
    }
    out(LIST1->next);
    cout << LIST1->value<<endl;
}

ListNode& createList(string str){
    ListNode* hook = new ListNode('0');
    ListNode* current = hook;
    for (string::size_type i = 0; i < str.size(); ++i) {
        char c = str[i];
        ListNode* node = new ListNode(c);
        current->next = node;
        current = current->next;
    }
    current->next = nullptr;
    return *hook->next;
}


int main()
{
    string s1;
    cin>>s1;
    ListNode& head = createList(s1);
    out(&head);
    return 0;
}