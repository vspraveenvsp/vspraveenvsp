#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<queue>
#include"BFS.h"


//int dfs(vector<int>)
//void queue(vector<int > queue,int x,vec.size(),vector<vector<int > > vec);
void bfs();
using namespace std;
vector<vector<int > > vec{
{0,1,1,0,0},
{1,0,1,1,1},
{1,1,0,0,1},
{0,1,0,0,0},
{0,1,1,0,0}
};
void func(int x);
void funcs();
int funcss();

//vector<vector<int> > vec(n,vector<int> (n,0)); //defining 2d array 
int vis[5];//visited array
std::queue<int> queues;//queue 


vector<vector<int> > bs(5,vector<int > (5,0));//bfs graph
main()
{
	/*cout<<"enter the number of vertices in graph ";
	int n;
	cin>>n;
	cout<<n;

	
	cout<<"enter the vertuices of the graph";
	char a='y';
	while(a=='y')
	{
		int x,y;
		cout<<"enter the vertivces u wnat to connect";
		cin>>x>>y;
		vec[x][y]=1;
		vec[y][x]=1;
		cout<<"press y if u wnat to enter moore vertices ";
		cin>>a;
		getchar();
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<vec[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n";*/
	cout<<"i am above cmd";
	bfs();
}
void BFS(Graph G)
{
	//std::vector<std::vector<int> > bfs(vec.size(), std::vector<int > (vec.size(),0));//2d aray 
	//std::vector<int > vis(vec.size(),0);//visited arrray
	//int x=0,y=0;
	int x=funcss();
	int a=vec.size();
	vis[x]=1;
	func(x);
	funcs();
	/*while(checkfull (vis[],vec.size())!=0)
	{
		func()
		funcs()
	}*/

	
	cout<<"\n";

	for(int i=0;i<5;i++)// to print the graph 
	{
		for(int j=0;j<5;j++)
		{ 
			cout<<bs[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void func(int x)
{
	int y=x;
		while(y<5)
		{
			if(vec[x][y]==1)
			{
				if(vis[y]==0)
				{
					vis[y]=1;
					queues.push(y);
					bs[x][y]=1;
					bs[y][x]=1;                                                        
				}
				
			}
			y++;
		}
}
void funcs()
{
	while(!queues.empty())
	{
		int pop= queues.front();
		func(pop);
		queues.pop();
	}
		
}
int funcss()
{
	int x=0,y=0;
		while(x<5)//finding first vertice of graph
	{
		while(y<5)
		{
			if(vec[x][y]==1)
			{
				vis[x]=1;
				return x;
			}
			y++;
		}
		x++;
	}
}
/*void queue(vector<int > queue,int x,vec.size(),vector<vector<int > > vec)
{
	while(y<vec.size())
		{
			if(vec[x][y]==1)
			{
				queue.push(y);
			}
			y++;
		}
}




	/*for(int x=0;x<vec.size();x++)
	{
		vis[x]=1;
		for(int y=0;y<vec.size();y++)
		{
			if(vec[x][y]==1 && vis[])
			{
				
			}
		}
	}*/
	/*for(int i=0;i<n;i++)
	{
		cout<<"hi";
		for(int j=0;j<n;j++)
		{
			cout<<"\nhi1";
			vec[i][j]=0;
			cout<<"hi2";
			cout<<"v["<<i<<"]["<<j<<"]"<<vec[i][j];
		}
	}*/	
	
/*	int check(int vis[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		if(vis[i]==0)
		{
			return 0;
		}
	}
}*/
