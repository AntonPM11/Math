#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 int a,b,c,f1,f2,f3,f4,f5,f6,f7,f8;
cout<<" | a "<<"b "<<"c |"<<"diz|"<<"zap|"<<"diz|"<<"imp|"<<endl;
 for(int a=0;a<=1;a++){
  for(int b=0;b<=1;b++){
   for(int c=0;c<=1;c++){
   		f1=a||b;
   		f2=!c;
   		f3=f1||f2;
   		f4=!f3|a;
   		cout<<" | "<<a<<" "<<b<<" "<<c<<" | "<<f1<<" | "<<f2<<" | "<<f3<<" | "<<f4<<" | "<<endl;
   	}
   }
}
cout<<endl;
cout<<endl;
cout<<" | a "<<"b "<<"c |"<<"imp|"<<"zap|"<<"imp|"<<"kon|"<<endl;
 for(int a=0;a<=1;a++){
  for(int b=0;b<=1;b++){
   for(int c=0;c<=1;c++){
   		f5=!b|a;
   		f6=!a;
   		f7=!f6|c;
   		f8=f5&&f7;
   		cout<<" | "<<a<<" "<<b<<" "<<c<<" | "<<f5<<" | "<<f6<<" | "<<f7<<" | "<<f8<<" | "<<endl;
   	}
   }
}
cout<<endl;
if(f4=f8)
cout<<"The identity is proved!";
cout<<endl;
return 0;
}
