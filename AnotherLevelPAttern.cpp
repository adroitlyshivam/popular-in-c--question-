#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=1;
    int l=1;
    int m=2;
    for(int i=0;i<n;i++){
       if(n%2!=0)
        {if(i>0&&i<=n/2){
            k=k+n;
        }
        else if(i>n/2)
        k=n*n-n*(2*l++)+1;}
        else{
        if(i>0&&i<n/2)
            k+=n;
        //   else if(i==n/2){
        //         k+=0;
        //     }
            else if(i==(n/2)+1)
            k=n*n-n*(3)+1;
             
             else if(i>((n/2)+1))
             {
                 k=n*n-n*(2*m++ +1)+1;
             }
        }
    for(int j=0;j<n;j++){
        cout<<k++<<" ";
    }
    cout<<endl;
    }

    return 0;
}

