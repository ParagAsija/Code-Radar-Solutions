int isPrime(int num){
    for(int i = 2; i< num; i++){
        int prime = 1;
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