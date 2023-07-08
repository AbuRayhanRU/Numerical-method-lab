#include<bits/stdc++.h>
using namespace std;

#define e 0.001
#define f(x) x*x*x -4*x +1
//double x;

/*double f(x)
{
    return (x*x*x -4*x +1);
}*/

 int main(){
    float x0,x1,x2,f0,f1,f2;
    int i=0;
    cout<<"Enter x0 & x1"<<endl;
    cin>>x0>>x1;
    do{
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);
        if(f0*f2<0){
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
        cout<<" No of iteration "<<i<<" root "<<x2<<" value of function "<<f2<<endl<<endl;
  }while(fabs(f2)>e);
}
