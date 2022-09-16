int func() {
int arr[50];
for(int i = 0; i< sizeof(arr)/sizeof(int);i++) {
    if (arr[i] % 2 == 0) {
        return "Even number";
    } else return "Odd number";
}
}
