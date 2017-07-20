#include<stdio.h>
int main()
{
	float a[20];
	char b[20];
	int j,i,h;
	
	printf("please enter\n");
    for(i=0;;i++)
    {
	    scanf("%f",&a[i]);
        b[i]=getchar();
        if(b[i]=='=') 
        {
            break;
        }
    }
    for(j=0;j<=i;j++)
	{
		if(b[j]=='*'||b[j]=='/')
		{
			if(b[j]=='*')
			{
				a[j+1]=a[j]*a[j+1];
				a[j]=0;   
			}
			else
			a[j+1]=a[j]/a[j+1];
			a[j]=0;
		}
	}
	for(j=0;j<=i;j++)
	{
		if(b[j]=='+'||b[j]=='-')
		{
			if(b[j]=='+')
			{
				h=0;
				if(a[j+1+h]==0)
				{
				
					while(a[j+1+h]==0)
				    {
					    h++;
					    a[j+1+h]=a[j]+a[j+1+h];
				        a[j]=0;
			        }
				}
					
				else
				{
					a[j+1]=a[j]+a[j+1];
				    a[j]=0;
				}
			}
			else
			{
	            h=0;
			    if(a[j+1+h]==0)
				while(a[j+1+h]==0)
				{
					h++;
					a[j+1+h]=a[j]-a[j+1+h];
				    a[j]=0;
				}
				else
				{
					a[j+1]=a[j]-a[j+1];
				    a[j]=0;
				}
			}
		}
	}
	printf("%.3f\n",a[i]);
	system("pause");
}
