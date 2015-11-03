#include <iostream>
using namespace std;
int main(){
int N=100;
double x0;
double r;
// x0=x0*r*(1-x0);
//cout<< x0 << endl;
for(r=0; r<4; r+=0.01){
 x0=0.5;
  
  for(int i=1; i<= N ; i++){
  if(i>=20) cout<< i <<" "<< x0<< "	" << r <<  endl;
  x0=x0*r*(1-x0);
   
    
  
} 
  
  
}




return 0;
}