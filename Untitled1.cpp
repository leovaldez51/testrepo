# include <iostream>
using namespace std;

void solve(int n){
	int a = 0;
	int b = 1;
	int ans;
	for (int i = 1;i<n;i++){
		ans = (a+b)%10;
		a = b;
		b = ans; 
	}
	cout << ans;
}
int main(){
	int n;
	cin>>n;
	solve(n);
	return 0;
}
