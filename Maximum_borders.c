#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	int row,col;
	int max1[num];
    int max2=0;
    for(int i=0;i<num;i++)
    {
		max1[i]=0;
    }
	for(int k=0;k<num;k++)
	{
		
		scanf("%d",&row);
		scanf("%d",&col);
		char arr[num][row][col];
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
			    //char gar;
			    //scanf("%c",&gar);
				scanf("\n%c",&arr[k][i][j]);
			}
		}
    	//-------------comp-------//
    
    	//printf("col:%d",col);
		for(int i=0;i<row;i++)
		{
		    max2=0;
		    
			for(int j=0;j<col;j++)
			{
				if(arr[k][i][j]=='#')
				{
					max2++;
				}

			    if(max2>max1[k])
	        	{
		    	    max1[k]=max2;
		        }
			}
		}
		
	}
	for(int i=0;i<num;i++)
    printf("%d\n",max1[i]);
    return 0;
}
