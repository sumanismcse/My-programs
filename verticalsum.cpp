
// If code has helped you to get better understanding..please show your suport by 'upvoting' the comment(give feedback too)

#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<stack>
#include<algorithm>
using namespace std;
struct node{
	int data;
	struct node* left,*right;
	node(int x){
		data=x;
		left=right=NULL;
	}
};

map<int,int>m;

void sums(struct node* r,int lev,int broad){
	if(!r)return;
	m[broad]+=r->data;
	sums(r->left,lev+1,broad+1);
	sums(r->right,lev+1,broad-1);
}
int main()
{
	struct node* root=new node(1);
	root->left=new node(2);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right=new node(3);
	root->right->left=new node(6);
	root->right->right=new node(7);
	
	sums(root,0,0);
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
		cout<<"sum from left to right "<<it->second<<endl;
	}
	return 0;
}


