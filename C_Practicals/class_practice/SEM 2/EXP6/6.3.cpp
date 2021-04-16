#include <iostream>

#define maxrows 50
#define maxcols 50

using namespace std;

class matrix
{

public:
    int arr[maxrows][maxcols];
    int rows, cols;

    matrix()
    {
        rows = cols = 2;
    }

    matrix(int r, int c, int mat[maxrows][maxcols])
    {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                arr[i][j] = mat[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            cout << " [ ";
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << ", ";
            }
            cout << "]" << endl;
        }
        cout << endl;
    }

    matrix operator+(matrix x)
    {
        if (x.rows != rows || x.cols != cols || (rows == 0 && cols == 0))
        {
            return matrix();
        }

        int mat[maxrows][maxcols];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                mat[i][j] = arr[i][j] + x.arr[i][j];
            }
        }
        return matrix(rows, cols, mat);
    }

    int operator==(matrix x)
    {
        if (x.rows != rows || x.cols != cols)
        {
            return 0;
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (arr[i][j] != x.arr[i][j])
                {
                    return 0;
                }
            }
        }
        return 1;
    }
};

int main()
{
    int arr1[maxrows][maxcols], arr2[maxrows][maxcols];
    arr1[0][0] = 5;
    arr1[0][1] = 8;
    arr1[1][0] = 9;
    arr1[1][1] = 0;
    arr2[0][0] = 3;
    arr2[0][1] = 2;
    arr2[1][0] = 1;
    arr2[1][1] = 8;

    matrix mat1(2, 2, arr1);
    matrix mat2(2, 2, arr1);
    matrix mat3(2, 2, arr2);
    matrix mat4;

    cout << "Elements of Matrix 1:" << endl;
    mat1.display();
    cout << "Elements of Matrix 2:" << endl;
    mat2.display();
    cout << "Elements of Matrix 3:" << endl;
    mat3.display();
    mat4 = mat1 + mat3;
    cout << "Elements of Matrix after addition of Matrix 1 and Matrix 3:" << endl;
    mat4.display();
    if (mat1 == mat2)
    {
        cout << "Matrix 1 is equals to Matrix 2" << endl;
    }

    else
    {
        cout << "Matrix 1 is not equals to Matrix 2" << endl;
    }

    if (mat1 == mat3)
    {
        cout << "Matrix 1 is equals to Matrix 3" << endl;
    }

    else
    {
        cout << "Matrix 1 is not equals to Matrix 3" << endl;
    }

    return 0;
}