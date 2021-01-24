int jumpingOnClouds(vector<int> c) {

    int jumps = 0;
    int i = 0;
    int length = c.size() - 1;
    
    if(length < 2){
        return 1;
    }
    
    while(i < length){
        
        if(i <= (length-2)){
            if(c[i+2] == 0){
                i+=2;
                jumps++;
            }
            else{
                i+=1;
                jumps++;
            }
        }
        else{
            if((c[i+1] || c[i+2]) == 1){
                jumps++;
            }
            return jumps;
        }
        
    }
    
    return jumps;
}
