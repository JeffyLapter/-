#include<cstdlib>
#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int i;
	string Yu_Ming_Zhi[5]={"����","��������ӣ�","����","̫�����ˣ�","�Բۣ�"};
	while(1){
		i=rand()%10;
		if(i>=5) i-=5;
		cout<<Yu_Ming_Zhi[i]<<endl;
		Sleep(600);
	}
	return 0;
}
