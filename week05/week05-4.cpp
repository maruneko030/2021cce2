#include <stdio.h>
char line[40];//�@�椣�W�L30�r�ҥH�}40���j�F
int main()
{
	int T;//Test cases���X��
	scanf("%d\n\n", &T);// ����Ӹ���
	for(int t=1; t<=T; t++)
	{
		if(t>1)printf("\n");
		printf("�{�b�O��%d����\n", t);
		while(gets(line))
		{//��������
			if(line[0]==0) break;//���}�j��
		}
	}
}
