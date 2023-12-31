#include<bits/stdc++.h>
using namespace std;

class Bisection
{
private:
    double low,up,e=0.0001;
    double f(double x)
    {
        return x * x * x + x * x - 1;
    }
public:
    void solve(){
        srand(int(time(0)));
        while(true){
            low=-9+rand()%10;
            up=rand()%10;
            if(f(low)*f(up)<0.0){
                break;
            }
        }
        if(low>up){
            swap(low,up);
        }
        double root;
        double prev_root=1000.0;
        while(true){
            root=(low+up)/2;
            if(f(root)*f(low)<=0){
                up=root;
            }
            else if(f(root)==0.0){
                break;
            }
            else {
                low=root;
            }
            if(abs((root-prev_root)/root)<e){
                break;
            }
            prev_root=root;
        }
        cout<<"the root is :"<<root<<endl;


    }

};



int main()
{
    Bisection b;
    b.solve();

}
