//ˮ�ɻ��� 
#include<stdio.h>
//#include<time.h> ʱ��ͷ�ļ�
int main()
{
	int a,b,c,i;
    if(a*a*a+b*b*b+c*c*c==i);
    for(int i=100;i<1000;i++)
	{
		a=i/100;
	    b=i/10%10;
        c=i%10;
        if(a*a*a+b*b*b+c*c*c==i)
        printf("%d\t",i);
	}
//	printf("%.2f\n",(double)clock()/CLOCKS_PER_SEC);���ʱ�� ��λС��
	return 0;
}
