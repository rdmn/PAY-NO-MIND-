#include<bits/stdc++.h>
#include <iostream>
using namespace std;
priority_queue<int> q;



void toz(priority_queue<int> &q,int n){
    if(!n)return;
    while(q.top()==n){
        cout << q.top() <<' ';
        q.pop();
        toz(q,n-1);
    }
}

int main(){
	int n,i,t;
	cin >>n;
	for(int j=0,t=n;j<n;j++){
        cin >> i,q.push(i);
        while(q.top()==t)cout<<q.top()<<' ',q.pop(),t--;
        cout << '\n';
	}
	return 0;
}

