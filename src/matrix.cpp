#include "matrix.h"

// Multiply a matrix by a vector
std::vector<double> Matrix::multiply(const std::vector<std::vector<double>>& matrix, const std::vector<double>& vector) {
    std::vector<double> result(matrix.size(), 0.0);
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            result[i] += matrix[i][j] * vector[j];
        }
    }
    return result;
}

// Add two vectors element-wise
std::vector<double> Matrix::add(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    std::vector<double> result(vec1.size());
    for (size_t i = 0; i < vec1.size(); ++i) {
        result[i] = vec1[i] + vec2[i];
    }
    return result;
}
