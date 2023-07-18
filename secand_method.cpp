
#include<bits/stdc++.h>
using namespace std;

class Newton_Raphson
{
private:
    double e=0.0001;
    double f(double x)
    {
         return (x * x) + (5 * x) + 6;
    }
public:
    void solve(){
        double root,new_root;
        srand(int(time(0)));
        root=rand()%10;
        root=-1*root;
        double prev_root=1000.0;
        while(true){

            new_root=root - ((f(root)*(root-prev_root))/(f(root)-f(prev_root)));
            if(abs((new_root-root)/root)<e){
                break;
            }
            prev_root=root;
            root=new_root;
        }
        cout<<"the root is :"<<root<<endl;




    }


};



int main()
{
    Newton_Raphson b;
    b.solve();

}

