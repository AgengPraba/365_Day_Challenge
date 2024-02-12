//<8 Kyu>

// Your task is to create a function that does four basic mathematical operations.

// The function should take three arguments - operation(string/char), value1(number), value2(number).
// The function should return result of numbers after applying the chosen operation.

// Examples(Operator, value1, value2) --> output
// ('+', 4, 7) --> 11
// ('-', 15, 18) --> -3
// ('*', 5, 5) --> 25
// ('/', 49, 7) --> 7


int basicOp(char op, int val1, int val2) {
  switch (op){
    case '+':
      return val1+val2;
      break;
    case '-':
      return val1-val2;
      break;
    case '*':
      return val1*val2;
      break;
    case '/':
      return val1/val2;
      break;
    default:
      return 0;
  }
}