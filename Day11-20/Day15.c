/*Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

Input:
- First line: two integers m and n
- Next m lines: n integers each

Output:
- Print the sum of the primary diagonal elements

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
15

Explanation:
1 + 5 + 9 = 15*/
#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;

    // Read dimensions
    if (scanf("%d %d", &m, &n) == 2) {
        int matrix[m][n];

        // Read matrix elements
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);

                // Add to sum if it's a primary diagonal element
                if (i == j) {
                    sum += matrix[i][j];
                }
            }
        }

        // Print the result
        printf("%d", sum);
    }
    return 0;
}