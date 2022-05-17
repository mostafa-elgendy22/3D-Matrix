#include <three_dimensional_matrix.h>


ThreeDimensionalMatrix::ThreeDimensionalMatrix(int*** matrix3D, int n, int m, int p) {
    this->n = n;
    this->m = m;
    this->p = p;
    vector = new int[n * m * p];

    int y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                y = convertIndex(i, j, k);
                vector[y] = matrix3D[i][j][k];
            }
        }
    }

}


ThreeDimensionalMatrix::~ThreeDimensionalMatrix() {
    delete[] vector;
}


int ThreeDimensionalMatrix::convertIndex(int i, int j, int k) {
    int y = i * (m * p) + j * p + k;
    return y;
}

int ThreeDimensionalMatrix::at(int i, int j, int k) {
    return vector[this->convertIndex(i, j ,k)];
}


int ThreeDimensionalMatrix::size() {
    return n * m * p;
}


void ThreeDimensionalMatrix::print3DMatrix() {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                cout << this->at(i, j, k) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}