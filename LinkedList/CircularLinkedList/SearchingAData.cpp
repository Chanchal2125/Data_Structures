#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll             long long int
#define ld             long double
#define mod            1000000007
#define endl           "\n"
#define vi             vector<ll>
#define vs             vector<string>
#define pii            pair<ll, ll>
#define ump            unordered_map
#define mp             map
#define pq_max         priority_queue<ll>
#define pq_min         priority_queue<ll,vi,greater<ll>
#define ff             first
#define ss             second
#define mid(l,r)       (l+(r-l)/2)
#define loop(i,a,b)    for(int i=(a); i <=(b);i++)
#define looprev(i,a,b) for(int i=(a); i >=(b);i--)
#define clr(val)       memset(val,0,sizeof(val))
#define what_is(x)     cerr << #x << " is " << x << endl; 
#define OJ             \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};
 
void InsertAtHead(node* &head, int val){

    node* n = new node(val);
    node* temp = head;

    if (head == NULL){
        n -> next = n;
        head = n;
        return;
    }
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp -> next = n;
    n -> next = head;
    head = n;
}

void InsertAtTail(node* &head, int val){
    node* n = new node(val);
    if (head == NULL){
        InsertAtHead(head,val);
        return;
    }
    node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp -> next = n;
    n -> next = head;
}


bool Search(node* head,int key){
    node* temp = head -> next;
    while(temp -> next != head){
        if (temp -> data == key){
            return true;
        }
        temp = temp -> next;
    }
    return false;
}

int main() 
{
    node* head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    cout<<Search(head,0)<<endl;
    cout<<Search(head,2)<<endl;
 
return 0;
   
}