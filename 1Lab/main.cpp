#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 int a,b,c,d,f1,f2,f3,f4,f5,f6,f7;
 cout<<" | a "<<"b "<<"c "<<"d |"<<"-> |"<<"-> |"<<" ^ |"<<" ^ |"<<"-> |"<<"-> |"<<"-> |"<<endl;
 for(int a=0;a<=1;a++){
  for(int b=0;b<=1;b++){
   for(int c=0;c<=1;c++){
   	for(int d=0;d<=1;d++){ 
     f1=!a|b;
     f2=!c|d;
     f3=a&&c;
     f4=b&&d;
     f5=!f3|f4;
     f6=!f1|f2;
     f7=!f6|f5;
     cout<<" | "<<a<<" "<<b<<" "<<c<<" "<<d<<" | "<<f1<<" | "<<f2<<" | "<<f3<<" | "<<f4<<" | "<<f5<<" | "<<f6<<" | "<<f7<<" | "<<endl;
    }
   }
  }
 }
 cout<<endl;
 if(f7=1)
 cout<<"Function is performed";
 if(f7=0)
 cout<<"Function is neutral";
 return 0;
}
