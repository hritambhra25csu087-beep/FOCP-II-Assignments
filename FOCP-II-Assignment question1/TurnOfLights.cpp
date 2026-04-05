#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string bulb;
    cin>>bulb;
  

    for(int L=1;L<=n;L++)
    {string temp=bulb;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(temp[i]=='1')
        {
           count++;
           int end;
           if(i+L<n) 
           {
            end=i+L;
           }
           else
           {
            end=n;
           }
           for(int j=i;j<end;j++)
           {
            temp[j]='0';
           }

        }
    }
    if(count<=k)
    {
        cout<<L;
        return 0;
    }


    }
    return 0;
}