int jumpingOnClouds(vector<int> c) {

    // We name our variables
    int jumps = 0;
    int i = 0;
    
    //Substact one because size returns the size starting the count from one and arrays start the count from 0
    int length = c.size() - 1;
    
    // The problem is always solvable, so if the length is < 2 => we only need one jump.
    if(length < 2){
        return 1;
    }
    
    
    // We go over the whole array
    while(i < length){
        
        // This if statement is for not going over the memory
        if(i <= (length-2)){
            
            //The largest jump we can do is 2 units and we have to jump into a 0
            if(c[i+2] == 0){
                i+=2;
                jumps++;
            }
            
            // If we can't do the largest jump we simply jump 1
            else{
                i+=1;
                jumps++;
            }
        }
        
        else{
            // We check if we need one last jump
            if((c[i+1] || c[i+2]) == 1){
                jumps++;
            }
            
            // we return the solution
            return jumps;
        }
        
    }
    
    // we return the solution
    return jumps;
}
