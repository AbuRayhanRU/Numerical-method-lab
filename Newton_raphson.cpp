#include<bits/stdc++.h>
using namespace std;

class Newton_Raphson
{
private:
    double e=0.0001;
    double f(double x)
    {
        return x * x * x + x * x - 1;
    }
    double f_prime(double x){
        return (3*x*x)+(2*x);
    }
public:
    void solve(){
        double root;
        srand(int(time(0)));
        while(true){
            root=-9+rand()%10;

            if(f(root)!=0.0){
                break;
            }
        }
        double prev_root=1000.0;
        while(true){
                if(f_prime(root)==0){
                    root++;
                }
            root=root - (f(root)/f_prime(root));
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
    Newton_Raphson b;
    b.solve();

}

