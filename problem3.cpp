# include <iostream>
using namespace std;

void gcd(int a,int b) {
  int R;
  while ((a % b) > 0)  {
    R = a % b;
    a = b;
    b = R;
  }
  cout<< b;
}	
		

int main(){
	int a,b;
	cin>>a>>b;
	gcd(a,b);
	return 0;
}

