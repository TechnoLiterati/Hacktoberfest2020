void bubbleSort(vector<int> num){  
    int i, j;  
    for (i = 0; i < num.size()-1; i++){  
        for (j = 0; j < n-i-1; j++){  
            if (num[j] > num[j+1])  
                swap(num[j], num[j+1]);  
        }
    }
    return ;
}  