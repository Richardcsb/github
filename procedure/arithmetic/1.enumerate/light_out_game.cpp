 /*一盏灯按下时其相邻的灯状态都会改变，现给定每盏灯的初始状态，求熄灭所有灯的一种方案*/
 #include<iostream>
 #include<string>
 #include<cstring>
 #include<memory>
 using namespace std;
 char oriLights[5];//原始灯状态
 char Lights[5];//变化灯状态
 char result[5];//灯的开关状态
int GetBit(char c,int i)//获取一行中第i盏灯的状态
 {
 	return (c>>i)&1;
 }
void SetBit(char & c,int i,int v)//设置一行中第i盏灯的状态
{
	if(v)                          
		c |=(1<<i);   //设置第i盏灯的状态为1 与1相或           
	else                          
		c &=~(1<<i);  //设置第i盏灯的状态为0 与1取反相与即与0相与
}
void FlipBit(char & c,int i)//翻转一行中第i盏灯的状态
{
	//异或，两数异则为1，同则为0
	c^=(1<<i);                      
}                                   
void OutPutResult(int t,char result[])
{
	cout<<"PUZZLE #"<<t<<endl;
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j){
			cout<<GetBit(result[i],j);
			if(i<5)
				cout<<" ";
		}
		cout<<endl;
	}
}
 int main()
 {
	memset(oriLights,0,sizeof(oriLights));
	for(int i=0;i<5;++i)
	{
		for(int j=0;j<5;++j)
		{
			int s;
			cin>>s;
			SetBit(oriLights[i],j,s);	
		}	
	}
	for(int n=0;n<32;++n)//枚举第一行开关的2^6 = 64种可能
	{
		int switchs=n;    //当前行开关的状态
		memcpy(Lights,oriLights,sizeof(oriLights));//strcpy()只拷贝字符串，遇到\0则停止
		for(int i=0;i<5;++i)//处理每一行的灯
		{
			result[i]=switchs; //储存每一行开关的状态
			for(int j=0;j<5;j++){
				if(GetBit(switchs,j)){
					if(j>0)
						FlipBit(Lights[i],j-1);
					FlipBit(Lights[i],j);
					if(j<4)
						FlipBit(Lights[i],j+1);
						
				}   
			}
			if(i<4)
				Lights[i+1]^=switchs;
			switchs=Lights[i];//由第i行灯的状态，就是第i+1行开关的状态
		}
		if(Lights[4] == 0){
			OutPutResult(1,result);
			break;
		}	
	}	
 	return 0;
 }
