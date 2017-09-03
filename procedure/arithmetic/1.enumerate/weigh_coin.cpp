/*有12枚硬币，其中有一枚是假币，但是不知是比真币轻还是重，
  现已知这些硬币在天平的三次称量结果，请确定假币是轻还是重。
  （数据保证一定能得出结果）*/
  #include<iostream>
  #include<cstring>
  using namespace std;
  char Left[3][7];
  char Right[3][7];
  char Result[3][5];
  bool IsFake(char c,bool light);
  int main()
  {
      int t;
      cin>>t;
      while(t--)
      {
          for(int i=0;i<3;i++){
              cin>>Left[i]>>Right[i]>>Result[i];
          }
          for(char c='A';c<='L';c++)
          {
              if(IsFake(c,true))
                  cout<<c<<" is the counterfeit cion and it is light!"<<endl;
              else if(IsFake(c,false))
                  cout<<c<<" is the counterfeit cion and it is heavy!"<<endl;
          }
      }
      return 0;
  }
  bool IsFake(char c,bool light)
  {
      for(int i=0;i<3;i++)
      {
          char *pLeft,*pRight;
          if(light){
              pLeft=Left[i];
              pRight=Right[i];
          }
          else{
              pLeft=Right[i];
              pRight=Left[i];
          }
          switch(Result[i][0])
          {
              case 'u':
                  if(strchr(pRight,c)==NULL)
                  //strchr(pRight,c)函数【返回值】如果找到指定的字符则返回该字符所在地址，否则返回 NULL。
                      return false;
                  break;
              case 'e':
                  if(strchr(pRight,c)||strchr(pLeft,c))
                      return false;
                  break;
              case 'd':
                  if(strchr(pLeft,c)==NULL)
                      return false;
                  break;
          }
      }
      return true;
  }
  
  