void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> v(nums1);
    nums1.clear();

    int i=0, j=0;
    while(i<m && j<n){
        if(v[i] < nums2[j]){
            nums1.push_back(v[i++]);
        } else {
            nums1.push_back(nums2[j++]);
        }
    }
    
    while(i<m) nums1.push_back(v[i++]);
    
    while(j<n) nums1.push_back(nums2[j++]);
}
