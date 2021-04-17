#include "Matrix.h"

Matrix::Matrix()
{
    this->matrix.resize(3);
    int i = 0;
    int j = 0;
    for (i = 0; i < matrix.size(); i++)
    {
        matrix[i].resize(3);
        for (j = 0; j < matrix[i].size(); j++)
        {
            matrix[i][j] = 0;
        }
    }
}

Matrix::Matrix(vector<vector<int>> arr, int row, int col) {
    this->row = row;
    this->col = col;
    this->matrix = arr;
}

vector<vector<int>> Matrix::getMatrix()
{
    return this->matrix;
}

int Matrix::getRow()
{
    return this->row;
}

int Matrix::getCol()
{
    return this->col;
}

istream& operator>>(istream& is, Matrix& m)
{
    cout << "输入矩阵的行数:";
    int r;
    cin >> r;
    cout << "输入矩阵的列数:";
    int c;
    cin >> c;
    vector<vector<int>> v(r, vector<int>(c));
    cout << "输入一个矩阵:" << endl;
    int i = 0;
    int j = 0;
    int num = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "a" << i + 1 << j + 1 << ":";
            cin >> num;
            v[i][j] = num;
        } 
    }
    Matrix temp(v, r, c);
    m = temp; 
    return is; 
}

ostream& operator<<(ostream& os, Matrix& m)
{
    const int r = m.getRow();
    const int c = m.getCol();
    int i = 0;
    int j = 0;
    for (i = 0;i<r;i++)
    {
        for (j = 0;j<c ;j++)
        {
            os << m.getMatrix()[i][j]<< " ";
        }
        os << endl;
    }
    return os;
}