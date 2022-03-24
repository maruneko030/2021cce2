#include <stdio.h>
char line[40];//一行不超過30字所以開40夠大了
int main()
{
	int T;//Test cases有幾個
	scanf("%d\n\n", &T);// 有兩個跳行
	for(int t=1; t<=T; t++)
	{
		if(t>1)printf("\n");
		printf("現在是第%d堆資料\n", t);
		while(gets(line))
		{//先不做事
			if(line[0]==0) break;//離開迴圈
		}
	}
}
