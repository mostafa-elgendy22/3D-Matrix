#include <three_dimensional_matrix.h>

ThreeDimensionalMatrix* create3DMatrix(const string& inputFileName) {
    int n, m, p;

    ifstream inputFile;
    inputFile.open("input_files/" + inputFileName, ios::in);
    inputFile >> n >> m >> p;

    int*** matrix = new int**[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int*[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = new int[p];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                inputFile >> matrix[i][j][k];
            }
        }
    }
    return (new ThreeDimensionalMatrix(matrix, n, m, p));
}



int main() {
    while (1) {
        cout << "1- Read a 3D matrix from an input file" << endl;
        cout << "2- Exit program" << endl;
        
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string inputFileName;
            cout << "Enter the name of the input file: ";
            cin >> inputFileName;
            ThreeDimensionalMatrix* matrix = create3DMatrix(inputFileName);

            cout << "1- Print the matrix in 3D form" << endl;
            cout << "2- Print an element at certain position in the matrix" << endl;
            int second_choice;
            cout << "Enter your choice: ";
            cin >> second_choice;

            switch (second_choice)
            {
                case 1:
                {
                    matrix->print3DMatrix();
                    break;
                }
                case 2:
                {
                    int i, j, k;
                    cout << "Enter the value of i: ";
                    cin >> i;
                    cout << "Enter the value of j: ";
                    cin >> j;
                    cout << "Enter the value of k: ";
                    cin >> k;
                    cout << "Matrix[i][j][k] = " << matrix->at(i, j, k) << endl;
                    break;
                }
                default:
                {
                    break;
                }

            delete matrix;
            }
        }

        if (choice == 2) {
            break;
        }
    }

    return 0;
}