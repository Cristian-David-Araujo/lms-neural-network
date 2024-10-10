#include <iostream>
#include "neural_network.h"

int main() {
    // Define inputs and expected outputs
    std::vector<std::vector<double>> inputs = {{1, 0}, {0, 1}, {1, 1}, {0, 0}};
    std::vector<double> outputs = {1, 1, 0, 0};  // XOR example

    // Create and train the neural network
    NeuralNetwork nn(0.1, 1000);
    nn.train(inputs, outputs);

    // Make predictions
    std::vector<double> newInput = {1, 0};
    double prediction = nn.predict(newInput);

    std::cout << "Prediction for {1, 0}: " << prediction << std::endl;

    return 0;
}
