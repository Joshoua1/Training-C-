// #include <iostream>
// using namespace std;

// // This function signature is fine by the compiler, but not recommended.
// // Ideally, the function should specify all uncaught exceptions and function
// // signature should be "void fun(int *ptr, int x) throw (int *, int)"
// void fun(int *ptr, int x)
// {
// 	if (ptr == NULL)
// 		throw ptr;
// 	if (x == 0)
// 		throw x;
// 	/* Some functionality */
// }

// int main()
// {
// 	try {
// 	fun(NULL, 0);
// 	}
// 	catch(...) {
// 		cout << "Caught an exception from fun()";
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int main()
{
int a,b,c;
cin>>a>>b;
try{
     if (b==0){
        throw "Divide by 0";
     }
     if (b==1){
        throw b;
     }
     if (b==2){
        throw exception();
     }

c=a/b;
}
catch(const char * msg){
     cout<<msg<<endl;
}catch(int x){
    cout<<x<<endl;
}
cout<<c<<endl;
return 0;
}

