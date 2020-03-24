#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

 int main() {
  
  int a,b,c,d,f1,f2,f3,f4,f5,f6;
    cout<<" | a "<<"b "<<"c "<<"d |"<<"diz|"<<"diz|"<<"imp|"<<endl;
    for(a=0;a<=1;a++){
    	for(b=0;b<=1;b++){
    		for(c=0;c<=1;c++){
    			for(d=0;d<=1;d++){
    				f1=a||c;
    				f2=b||d;
    				f3=!f1|f2;
    				cout<<" | "<<a<<" "<<b<<" "<<c<<" "<<d<<" | "<<f1<<" | "<<f2<<" | "<<f3<<" | "<<endl;
    			}
    		}
    	}
    }
    cout<<endl;
    cout<<endl;
    
    cout<<" | a "<<"b "<<"c "<<"d |"<<"imp|"<<"imp|"<<"diz|"<<endl;
    for(a=0;a<=1;a++){
    	for(b=0;b<=1;b++){
    		for(c=0;c<=1;c++){
    			for(d=0;d<=1;d++){
    				f4=!a|b;
    				f5=!c|d;
    				f6=f4||f5;
    				cout<<" | "<<a<<" "<<b<<" "<<c<<" "<<d<<" | "<<f4<<" | "<<f5<<" | "<<f6<<" | "<<endl;
    			}
    		}
    	}
    }
    cout<<endl;
    cout<<"Both functions are not identical!";
    cout<<endl;
	return 0;
}
