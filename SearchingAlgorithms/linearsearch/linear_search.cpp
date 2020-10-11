int linearSearch(vector<int> num,int x){
    
    for (int i = 0; i < num.size(); i++) 
        if (num[i] == x) 
            return i+1; 
    return -1; 
}