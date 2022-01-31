``` cpp

const int maxN=90000000;
vi prime;
bool isPrime[90000001];
void sieve(){
	isPrime[0]=isPrime[1]=true;
	for(int i=2;i*i<=maxN;i++){
		if(isPrime[i]==false){
			for(int j=i*i;j<=maxN;j+=i){
				isPrime[j]=true;
			}
		}
	}
	for(int i=2;i<=maxN;i++){
		if(isPrime[i]==false){
			prime.pb(i);
		}
	}
}
void solve(vector<ll>& prime){
	ll n;
	cin >>n;
	cout<<prime[n-1]<<endl;
}

```