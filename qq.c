#include <stdio.h>
#include <math.h>
int main()
{
	int M,N;
	printf( "vvedide kolichestvo strok i stolbcov\n");
	scanf("%d", &M,&N);
	int a[M][N];
	for (int i=0; i<M; i++)
	{
		for (int j=0;j<N;j++)
		{
			a[i][j]=rand()%100;
		}
	}
	for (int i=0; i<M; i++)
	{
		for (int j=0;j<N;j++)
		{
			prinf("a %d,%d= %d\n,i,j,a[i][j]);
			
		}
	}
	int res=100,J;
	bool f;
	for (int i=0; i<M; i++)
	{
		f=1;
		for (int j=0;j<N;j++)
		{
			if (res>a[i][j])
			{
				res=a[i][j];
				J=j;
			}
		}
		for (int k=0;k<M;k++)
		{
			if (res<a[k][J]) 
			{
				f=0;	
			}
		}
		if (f!=0){
		cout << "sedlovaya tocka="<<res<<" koordinaty a"<<i<<","<<J;
		}
		res=100;
		
	}
	system("pause");
	return 0;
}
