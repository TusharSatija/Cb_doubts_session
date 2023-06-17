#include<iostream>
using namespace std;
int n;
int grid[10][10];
int total_boxes_where_knight_can_travel=0;
int ans=-1;

int dx[]={1,-1,2,2,1,-1,-2,-2};
int dy[]={2,2,1,-1,-2,-2,-1,1};

void inputgrid()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>grid[i][j];
			if(grid[i][j]==1)
			{
				total_boxes_where_knight_can_travel++;
			}
		}
	}
}

void Knight(int x,int y,int count){
	ans=max(ans,count);
	for(int i=0;i<8;i++)
	{
		int x_coordinate=x+dx[i];
		int y_coordinates=y+dy[i];
		if(x_coordinate>=0 and x_coordinate<=10 and grid[x_coordinate][y_coordinates]==1
			and y_coordinates>=0 and y_coordinates<10)
		{
			grid[x_coordinate][y_coordinates]=0;
			Knight(x_coordinate,y_coordinates,count+1);
			grid[x_coordinate][y_coordinates]=1;
		}
	}
}
int main() {
	cin>>n;
	inputgrid();
	grid[0][0]=0;
	Knight(0,0,1);
	cout<<total_boxes_where_knight_can_travel-ans;
	return 0;
}