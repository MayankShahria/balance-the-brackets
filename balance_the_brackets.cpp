#include<iostream>
using namespace std;
void brackets(int a, int b, int c, int d)
{
    int i;
    if((a==d && a)||(a==0 && d==0 && c==0))
       {
           for(i=0;i<a;i++)
            {
                cout<<"((";
            }
            for(i=0;i<c;i++)
            {
                cout<<")(";
            }
            for(i=0;i<d;i++)
            {
                cout<<"))";
            }
            for(i=0;i<c;i++)
            {
                cout<<"()";
            }
       }
       else
       {
           cout<<-1;
       }
       return;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    brackets(a,b,c,d);
    return 0;
}
