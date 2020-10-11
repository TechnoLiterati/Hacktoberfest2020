int lsearch(vector<int>&v,int key){
    for(int i=0;i<v.size();i++){
        if(v[i]==key)return i;
    }
    return -1;
}