 #include<iostream>
 #include<string>
 #include<cstring>
 #include<memory>
 using namespace std;
 char oriLights[5];
 char Lights[5];
 char result[5];
int GetBit(char c,int i)//获得地i个比特数字 
 {
 	return (c>>i)&1;
 }
void SetBit(char c,int i,int v)//给第i个比特赋值 
{
	if(v)                          //1000 0110赋i位为1 
		c |=(1<<i);                //0000 0100
	else                           //1111 1011赋i位为0
		c &=~(1<<i);               //1000 0010
}
void FlipBit(char &c,int i)//翻转第i位开关结果 
{
	c^=(1<<i);                      //1010 1010
}                                   //0000 0100     1010 1110
void OutPutResult(int t,char result[])//输出第i个比特数值 
{
	cout<<"PUZZLE #"<<t<<endl;
	for(int i=0;i<5;++i){
		for(int j;j<6;++j){
			cout<<GetBit(result[i],j);
			if(i<5)
				cout<<" ";
		}
		cout<<endl;
	}
}
 int main()
 {
 	int T;
	cin>>T;
	for(int t=1;t<=T;++t)
	{
		for(int i=0;i<5;++i)
		{
			for(int j=0;j<6;++j)
			{
				int s;
				cin>>s;
				SetBit(oriLights[i],j,s);	
			}	
		}
		for(int n=0;n<64;++n)
		{
			int switchs=n;
			memcpy(Lights,oriLights,sizeof(oriLights));
			for(int i=0;i<5;++i)
			{
				result[i]=switchs;
				for(int j=0;j<6;j++){
					if(GetBit(switchs,j)){
						if(j>0)
							FlipBit(Lights[i],j);
					}   if(j<5)
							FlipBit(Lights[i],j+1);
				}
				if(i<5)
					Lights[i+1]^=switchs;
				switchs=Lights[i];
			}
			OutPutResult(t,result);
			break;	
		}	
	}  
 	return 0;
 }
