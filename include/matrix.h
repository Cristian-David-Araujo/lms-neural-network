#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix {
public:
    static std::vector<double> multiply(const std::vector<std::vector<double>>& matrix, const std::vector<double>& vector);
    static std::vector<double> add(const std::vector<double>& vec1, const std::vector<double>& vec2);
};

#endif // MATRIX_H
