#include <iostream>

using namespace std;

long double f(long double x, int k, int c){
	
	return k*x*x + c;
}

int main(){
	int k,c,n;
	cout << "Enter the equation 'kx^2 + c = 0' parameters:" << endl;
	cout << "k: ";
	cin >> k;
	cout << "c: ";
	cin >> c;
	cout << "Quality: ";
	cin >> n;
	
	if(k == 0 || ( (k > 0) && (c > 0) ) || ( (k < 0) && (c < 0) )){
		cout << "There is no real roots." << endl;
		return 0;
	}
	if(k < 0){
		k = -k;
		c = -c;
	}

	int i,last;
	long double a,b,x;
	a = 0;
	i = a;
	if( f(i,k,c) < 0){
		while( f(i,k,c) < 0 ){
			last = i;
			++i;
		}
		a = last;
		b = i;
		//cout << "a,b is: " << a << ", " << b << endl;
		
		if( f(b,k,c) == 0){
			cout << "The root clear is: " << b << endl;
			return 0;
		}

		for(i = 0; i < n; ++i){
			x = ((long double) a+b)/2;
			if( f(x,k,c) > 0){
				b = x;
			}else if( f(x,k,c) < 0){
				a = x;
			}else{
				cout << "The root clear is: " << x << endl;
				return 0;
			}
		}

	}else{
		cout << "The root clear is: " << 0 << endl;
		return 0;
	}

	cout << "The root is about: " << x;
	return 0;
	
}
