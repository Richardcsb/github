#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int expression_value();        //���ʽ 
int term_value();              //�� 
int factor_value();            //���� 
int main()
{
	cout<<expression_value()<<endl;
	return 0;
}
int expression_value()
{
	int result = term_value();
	bool more = true;
	while(more){
		char c = cin.peek();               //�鿴һ���ַ���ȡ�� 
		if(c =='+'||c =='-'){
            cin.get();                     //ȡ��һ���ַ� 
			if(c =='+')	result += term_value();
			else	result -= term_value();
		}
		else	more = false;
	}
	return result;
}
int term_value()
{
	int result = factor_value();
	while(true){
		char c = cin.peek();
		if(c =='*'||c =='/'){
			cin.get();
			if(c =='*')		result *= factor_value();
			else	result /= factor_value();
		}
		else	break;
	}
	return result;
}
int factor_value()
{
	char c = cin.peek();
	int result = 0;
	if(c =='('){
		cin.get();
		result = expression_value();
		cin.get();
	}
	else{
		while(isdigit(c)){                       //�ж��ַ��Ƿ�Ϊ0-9�İ��������� 
				result = result * 10 + (c-'0');
				cin.get();
				c = cin.peek();
		}
	}
	return result;
}
