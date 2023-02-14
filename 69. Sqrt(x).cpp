int mySqrt(int x) {
    if(x==0) return 0;
    int s = 0, e = x, ans = 0;
    long long mid = s + (e-s)/2;

    while(s<=e){
        if(mid*mid <= x){
            ans = mid;
            s = mid + 1;
        } else e = mid - 1;
        
        mid = s + (e-s)/2;
    }
    return ans;
}
