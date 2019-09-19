#include<stdio.h>
int main()
{
	int head,tail;//定义头部和尾部变量 
	int l;//生成累计次数 
	printf("输入号码头：");
	scanf("%d %d",&head,&tail);
	int a,b,c,d,e,f;
	
	//下面直接使用镶嵌for循环5次 
	 
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
						l++;//计算次数 
						printf("%d%d%d%d%d%d%d\n",head,a,b,c,d,e,tail);
						FILE  *fp ; //文件指针 
    					fp=fopen(  "生成的号码.txt",  "a+");  

   						fprintf(  fp,"%d%d%d%d%d%d%d\n",head,a,b,c,d,e,tail);
    					fclose(fp);//关闭 写操作 
						
					}
				}
	
			}
	
		}
			
	}
	
	printf("生成了%d次！",l);
	
}
