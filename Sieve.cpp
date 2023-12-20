const int mx=1e8;
bool isprime[mx];
vector<int>v;

void prime(int lim){
    for(int i=3;i<=lim;i+=2) isprime[i]=1;

    int sq=sqrt(lim);

    for(int i=3;i<=sq;i+=2){
        if(isprime[i]){
            for(int j=i*i;j<=lim;j+=i){
                isprime[j]=0;
            }
        }
    }
    v.push_back(2);
    for(int i=3;i<=lim;i++){
        if(isprime[i]==1){
            v.push_back(i);
        }
    }


}
