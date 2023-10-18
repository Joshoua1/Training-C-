// #include<bits/stdc++.h>

// using namespace std;
// template<class Z>
// Z big (Z x,Z y){
// {
//    if(x>y);                           //GENERIC FUNCTION
//    {
//     return (x);
//    }else
//    {
//     return (y);
//    }
// }
// double big (double x,double y)
//     if(x>y){
//         return (x);
// }else{
//     return (y);
// }

// }

#include<bits/stdc++.h>


using namespace std;
template <class X>
class big{
    private:
    X num1, num2;
    public:
    big (X n1,X n2){
        num1 = n1;  
        num2 = n2;
    }
    void checker(){
        if(num1>num2){
            cout<<num1<<endl;
        }else{
            cout<<num2<<endl;
        }
    }
};
int main(){
    big <float> obj1(5.2,7.8);
    big <int> obj2(4,8);
    obj1.checker();
    obj2.checker();
}
