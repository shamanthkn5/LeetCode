int findComplement(int num) {
    int a = num, mask=0;
    if (a==0) return 1;
    while(a!=0){
        mask = (mask<<1) | 1;
        a = a>>1;
    }
    return (~num) & mask;
}
