#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H

#include <vector>
#include "lms.h"

class NeuralNetwork {
public:
    // Constructor
    NeuralNetwork(double learningRate, int maxIterations);

    // Method to train the neural network
    void train(const std::vector<std::vector<double>>& inputs, const std::vector<double>& outputs);

    // Method to predict the output for new input data
    double predict(const std::vector<double>& input);

private:
    LMS lms;  // LMS algorithm instance
};

#endif // NEURAL_NETWORK_H
