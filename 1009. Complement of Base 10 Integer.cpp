int bitwiseComplement(int n) {
    int a = n, mask = 0;
    if(a==0) return 1;

    while(a!=0){
        mask = (mask<<1) | 1;
        a = a>>1;
    }
    return (~n) & mask;
}
