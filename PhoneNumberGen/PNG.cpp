#include<stdio.h>
int main()
{
	int head,wei;//����ͷ����β������ 
	int l;//�����ۼƴ��� 
	printf("�������ͷ��");
	scanf("%d %d",&head,&wei);
	int a,b,c,d,e,f;
	
	//����ֱ��ʹ����Ƕforѭ��5�� 
	 
	for(a=0;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				for(d=0;d<10;d++)
				{
					for(e=0;e<10;e++)
					{
						l++;//������� 
						printf("%d%d%d%d%d%d%d\n",head,a,b,c,d,e,wei);
						FILE  *fp ; //�ļ�ָ�� 
    					fp=fopen(  "�ҵ��ĵ�.txt",  "a+");  

   						fprintf(  fp,"%d%d%d%d%d%d%d\n",head,a,b,c,d,e,wei);
    					fclose(fp);//�ر� д���� 
						
					}
				}
	
			}
	
		}
			
	}
	
	printf("������%d�Σ�",l);
	
}
