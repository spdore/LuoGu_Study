#include<stdio.h>
int main()
{
	int hour, min, x, y, s, v, total_min;  // h为小时,m为分钟 
	scanf("%d %d", &s, &v);
	if(s % v == 0)
	{
		total_min = 10 + s / v;  // 判断s,v是否需要向上取整 
	} 
	else 
	{
		total_min = 11 + s / v;
	}
	if(480 - total_min < 0)
	{  
		// 如果上学路上花费的开销大于8*60分钟 
		x = 1440 + ( 480 - total_min);  // 用前一天的时间24*60减去开销 
		// 最开始用的abs取480-i的绝对值，但不知道为什么洛谷不能完全通过  
		hour = x / 60;  // 得到小时 
		min = x % 60;  // 得到分钟 
	}
	else
	{     
		// 同理 
		y = 480 - total_min;  // 8点的时间减去剩余的分钟数
		hour = y / 60;
		min = y % 60;
	}

	if(hour >= 10)
	{    
		// 判断小时和分钟是否为两位数 （注意等号，一开始没注意等号，分钟小时为10的时候直接输出3位数）
		if(min >= 10) 
		{
			printf("%d:%d", hour, min);
		}
		else 
		{
			printf("%d:0%d", hour, min);
		}
	}
	else
	{
		if(min >= 10)  
		{
			printf("0%d:%d", hour, min);
		}
		else 
		{
			printf("0%d:0%d",hour, min);
		}
	}
	return 0;
}