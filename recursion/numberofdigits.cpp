int count(int n){
    if(n == 0){
        return 0;
    }
    else{
    int smallAns = count(n / 10);
    return smallAns + 1;
    }
    
    }
