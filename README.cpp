#include <iostream>
#include<string>

using namespace std;

int main()
{
  string s;
  cin>>s;
  int i,c,k,j;
  int n= s.length();
  for(i=0;i<n;i++){
        c=0;
        k=0;
        for(j=0;j<i;j++){
                if(s[i]==s[j])
                k++;
        }
        for(j=0;j<n;j++)
        {

            if(s[i]==s[j]){
                    c++;

            }

        }
        if(k==0){

    cout<<s[i]<<c;}
  }
    return 0;
}
