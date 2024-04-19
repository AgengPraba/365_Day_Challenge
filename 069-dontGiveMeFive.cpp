// <7 kyu>

// Don't give me five!
// In this kata you get the start number and the end number of a region and should return the count of all numbers except numbers with a 5 in it. The start and the end number are both inclusive!

// Examples:

// 1,9 -> 1,2,3,4,6,7,8,9 -> Result 8
// 4,17 -> 4,6,7,8,9,10,11,12,13,14,16,17 -> Result 12

int dontGiveMeFive(int start, int end)
{
  int count = 0;
    for (int i = start; i <= end; ++i) {
        int num = i;
        bool containsFive = false;
        // Periksa apakah angka mengandung angka 5
        while (num > 0) {
            if (num % 10 == 5) {
                containsFive = true;
                break;
            }
            num /= 10;
        }
        // Jika tidak mengandung angka 5, tambahkan ke jumlah
        if (!containsFive) {
            count++;
        }
    }
    return count;
}