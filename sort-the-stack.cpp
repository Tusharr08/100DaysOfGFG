#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

void SortedStack :: sort()
{
   //Your code here
   priority_queue<int> p;
   stack<int> q;
   cout<<s.top();
   while(!s.empty())
   {
       p.push(s.top());
       s.pop();
   }

   priority_queue<int> it=p;
   while(!it.empty())
   {
       cout<<it.top()<<" ";
       it.pop();
   }
   
   while(!p.empty())
   {
       q.push(p.top());
       p.pop();
   }
   
   while(!q.empty())
   {
       s.push(q.top());
       q.pop();
   }
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
    printStack(ss->s);
	ss->sort();
    cout<<"after sorting:"<<endl;
	printStack(ss->s);
}
}
