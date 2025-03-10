int isPrime(int num){
    int prime = 1;
    if(num == 1 || num == 0){
        return 0;
    }
    for(int i = 2; i< num; i++){
        
        if(num%i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 1){
        return 1;
    }
    else{
        return 0;
    }
}