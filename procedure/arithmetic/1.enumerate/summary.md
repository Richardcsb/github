### 枚举[enumber]（https://baike.baidu.com/item/%E6%9E%9A%E4%B8%BE）
> 完美立方和生理周期是较为简单的直接枚举，但是要注意排除一些没必要的情况，跳着试等来提高效率
> 称硬币同样是枚举将假设为假币的硬币依次尝试代入已知结果，满足情况则返回。
> 熄灯问题只需要枚举一个局部，一但局部是确定的则剩余的部分也是确定的。
```
for(int n=0;n<64;++n)//枚举第一行开关的2^6 = 64种可能
		{
			int switchs=n;    //当前行开关的状态
			memcpy(Lights,oriLights,sizeof(oriLights));//strcpy()只拷贝字符串，遇到\0则停止
			for(int i=0;i<5;++i)//处理每一行的灯
			{
				result[i]=switchs; //储存每一行开关的状态
				for(int j=0;j<6;j++){
					if(GetBit(switchs,j)){
						if(j>0)
							FlipBit(Lights[i],j);
						FlipBit(Lights[i],j);
						if(j<5)
							FlipBit(Lights[i],j+1);
							
					}   
				}
				if(i<5)
					Lights[i+1]^=switchs;
				switchs=Lights[i];//由第i行灯的状态，就是第i+1行开关的状态
			}
			if(Lights[4] == 0){
				OutPutResult(t,result);
				break;
			}	
		}	
```
