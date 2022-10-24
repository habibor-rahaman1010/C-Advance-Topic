// add 2 numbers...
int sum(int a, int b) {
    return a + b;
}

//minus 2 number...
int sub(int x, int y) {
    return x - y;
}

//multiplication between 2 number..
int mul(int n, int m) {
    return n * m;
}

//divided between 2 number...
int div(int c, int d) {
    return c / d;
}


//find max value in integer array function..

int getMax(int arr[], int lenth) {
    int max_value = arr[0];

    for(int i = 0; i < lenth; i++){
        if(max_value < arr[i]){
            max_value = arr[i];
        }
    }
    return max_value;
}

//find min value in integer array function..

int getMin(int arr[], int lenth) {
    int min_value = arr[0];

    for(int i = 0; i < lenth; i++){
        if(min_value > arr[i]){
            min_value = arr[i];
        }
    }
    return min_value;
}
