#include <iostream>
#include <ostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

struct matrica
{
    int row;
    int column;
    float** matrix;

    void EmptyMatrix(int row, int column)
    {
        int i, j;
        this->row = row;
        this->column = column;
        this->matrix = new float* [this->row];
        for (i = 0; i < row; i++)
        {
            this->matrix[i] = new float[this->column];
        }

    }

    void inputMatrix()
    {
        int i, j;
        cout << "Input first matrix : " << endl;
        for (i = 0; i < this->row; i++)
        {
            for (j = 0; j < this->column; j++)
            {
                cin >> this->matrix[i][j];
            }
        }
        cout << "First matrix : " << endl;
        for (i = 0; i < this->row; i++)
        {
            for (j = 0; j < this->column; j++)
            {
                cout << " " << this->matrix[i][j];
            }
            cout << endl;
        }
    }

    void randomMatrix()
    {
        int i, j, a, b;
        cout << "Lower limit : ";
        cin >> a;
        cout << "Upper limit : ";
        cin >> b;

        cout << "Generated matrix : " << endl;
        for (i = 0; i < this->row; ++i)
        {
            for (j = 0; j < this->column; ++j)
            {
                this->matrix[i][j] = float(a + rand() % ((b - a) + 1));
                cout << " " << this->matrix[i][j];
            }
            cout << endl;
        }
    }
};

matrica sumMatrix(matrica A, matrica B)
{
    int i, j;
    matrica Sum;
    Sum.EmptyMatrix(A.row, A.column);
    if (A.row == B.row && A.column == B.column)
    {
        for (i = 0; i < Sum.row; i++)
        {
            for (j = 0; j < Sum.column; j++)
            {
                Sum.matrix[i][j] = A.matrix[i][j] + B.matrix[i][j];
            }
        }

        cout << "Sum of two matrices : " << endl;
        for (i = 0; i < Sum.row; i++)
        {
            for (j = 0; j < Sum.column; j++)
            {
                cout << Sum.matrix[i][j] << " ";
            }
            cout << endl;
        }
        return Sum;
    }
    else
    {
        cout << "Cannot sum" << endl;
    }

}

matrica subMatrix(matrica A, matrica B)
{
    int i, j;
    matrica Sub;
    Sub.EmptyMatrix(A.row, A.column);
    if (A.row == B.row && A.column == B.column)
    {
        for (i = 0; i < Sub.row; i++)
        {
            for (j = 0; j < Sub.column; j++)
            {
                Sub.matrix[i][j] = A.matrix[i][j] - B.matrix[i][j];
            }
        }

        cout << "Sub of two matrices : " << endl;
        for (i = 0; i < Sub.row; i++)
        {
            for (j = 0; j < Sub.column; j++)
            {
                cout << Sub.matrix[i][j] << " ";
            }
            cout << endl;
        }
        return Sub;
    }
    else
    {
        cout << "Cannot sub" << endl;
    }

}

matrica multiplyMatrix(matrica A, matrica B)
{
    int i, j, k;
    matrica Multiply;
    Multiply.EmptyMatrix(A.row, A.column);
    
    //Initializing elements of matrix to 0
    for (i = 0; i < A.row; ++i)
    {
        for (j = 0; j < B.column; ++j)
        {
            Multiply.matrix[i][j] = 0;
        }
    }
    
    if (A.column == B.row)
    {
        for (i = 0; i < A.row; i++)
        {
            for (j = 0; j < B.column; j++)
            {
                for (k = 0; k < B.row; k++)
                {
                    Multiply.matrix[i][j] += A.matrix[i][k] * B.matrix[k][j];
                }
            }
        }

        cout << "Multiplication of two matrices : " << endl;
        for (i = 0; i < A.row; i++)
        {
            for (j = 0; j < B.column; j++)
            {
                cout << Multiply.matrix[i][j] << " ";
            }
            cout << endl;
        }
        return Multiply;
    }
    else
    {
        cout << "Cannot multiply" << endl;
    }

}

matrica transposeMatrix(matrica A)
{
    matrica Transpose;
    Transpose.EmptyMatrix(A.column, A.row);
    for (int i = 0; i < A.row; i++)
    {
        for (int j = 0; j < A.column; j++)
        {
            Transpose.matrix[j][i] = A.matrix[i][j];
        }
    }
    cout << "Transposed matrix : " << endl;
    for (int i = 0; i < A.column; ++i)
    {
        for (int j = 0; j < A.row; ++j)
        {
            cout << " " << Transpose.matrix[i][j];
            if (j == A.column - 1)
                cout << endl << endl;
        }
        cout << endl;
    }
    return Transpose;
}

void printMatrix(matrica A)
{

    int i, j;
    cout << "Elements of first matrix printed in decimals  : " << endl;
    for (i = 0; i < A.row; i++)
    {
        for (j = 0; j < A.column; j++)
        {
            cout << right << setfill('0') << fixed << setprecision(4) << A.matrix[i][j] << " ";
        }
        cout << endl << endl;
    }
}

int main()
{
    srand((unsigned)time(0));
    matrica A, B, Sum, Sub, Multiply;

    A.EmptyMatrix(2, 3);
    A.inputMatrix();

    B.EmptyMatrix(3, 2);
    B.randomMatrix();

    Sum = sumMatrix(A, B);
    Sub = subMatrix(A, B);
    Multiply = multiplyMatrix(A, B);
    transposeMatrix(A);
    printMatrix(A);

    return 0;
}