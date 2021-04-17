#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
    Matrix();
    Matrix(vector<vector<int>> arr, int row, int col);
    ~Matrix() {}
    vector<vector<int>> getMatrix();
    int getRow();
    int getCol();
    Matrix operator+(Matrix& other)
    {
        vector<vector<int>> arr(this->row, vector<int>(this->col));
        int i = 0;
        int j = 0;
        for (i = 0; i < arr.size(); i++)
        {
            for (j = 0; j < arr[i].size(); j++)
            {
                arr[i][j] = other.getMatrix()[i][j] + this->getMatrix()[i][j];
            }
        }
        Matrix m(arr, this->row, this->col);
        return m;
    }
    friend istream& operator>>(istream& is, Matrix& m);
    friend ostream& operator<<(ostream& os, Matrix& m);
private:
    int row;
    int col;
    vector<vector<int>> matrix;
};