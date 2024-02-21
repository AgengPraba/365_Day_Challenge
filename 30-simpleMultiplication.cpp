//<8 kyu>

// This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

int simpleMultiplication(int a){
    return (a%2==0)?a*8:a*9;
}