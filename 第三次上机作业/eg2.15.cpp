#include <iostream>

using namespace std;
int divide(int x,int y)
{
    if(y==0) throw y;//�����ĸ�쳣���׳��쳣
    return x/y;
}
int main()
{
   int a=10,b=5,c=0;
   try//����Ƿ�����쳣
   {
       cout<<"a/b="<<divide(a,b)<<endl;
       cout<<"b/a="<<divide(a,b)<<endl;
       cout<<"a/c="<<divide(a,b)<<endl;
       cout<<"c/b="<<divide(a,b)<<endl;

   }
   catch(int)//�����쳣���������������һ����ʾ��Ϣ
   {
       cout<<"except of divide zero"<<endl;
   }
   cout<<"calculate finished"<<endl;//catch��ĺ������
   return 0;
}
