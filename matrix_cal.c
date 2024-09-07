#include<stdio.h>

int main() {
    int a, b, l;
    char op;
    
    printf("\n ENTER THE ROW SIZE OF ARRAY : ");
    scanf("%d", &a);
    printf("\n ENTER THE COLUMN SIZE OF ARRAY : ");
    scanf("%d", &b);

    int x[a][b], y[a][b], z[a][b];

    // Initialize result array to 0
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            z[i][j] = 0;
        }
    }

    printf("\n ***** ENTER THE ARRAY ***** \n");
    printf("\n **** 1st ARRAY **** \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("\n ENTER [%d][%d] ARRAY VALUE: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }

    printf("\n **** 2nd ARRAY **** \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("\n ENTER [%d][%d] ARRAY VALUE: ", i, j);
            scanf("%d", &y[i][j]);
        }
    }

    printf("\n ENTER THE OPERATOR (+) | (-) | (*): ");
    scanf(" %c", &op);

    if (op == '+') {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                z[i][j] = x[i][j] + y[i][j];
            }
        }
    } else if (op == '-') {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                z[i][j] = x[i][j] - y[i][j];
            }
        }
    } else if (op == '*') {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                z[i][j] = 0; // Initialize the element
                for (int k = 0; k < b; k++) {
                    z[i][j] += x[i][k] * y[k][j];
                }
            }
        }
    } else {
        printf("\n INVALID OPERATOR!");
        return 1;
    }

    printf("\n **** THE RESULT OF THE OPERATION **** \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("\n THE [%d][%d] ARRAY VALUE IS: %d\n", i, j, z[i][j]);
        }
        printf("\n");
    }

    return 0;
}
