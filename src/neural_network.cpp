#include "neural_network.h"

// Constructor
NeuralNetwork::NeuralNetwork(double learningRate, int maxIterations)
    : lms(learningRate, maxIterations) {}

// Train the neural network using the LMS algorithm
void NeuralNetwork::train(const std::vector<std::vector<double>>& inputs, const std::vector<double>& outputs) {
    lms.train(inputs, outputs);
}

// Predict the output for new input data
double NeuralNetwork::predict(const std::vector<double>& input) {
    return lms.predict(input);
}
