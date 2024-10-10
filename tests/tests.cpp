#include "gtest/gtest.h"
#include "neural_network.h"

// Test for training function
TEST(NeuralNetworkTest, TrainAndPredict) {
    NeuralNetwork nn(0.1, 1000);
    std::vector<std::vector<double>> inputs = {{1, 0}, {0, 1}, {1, 1}, {0, 0}};
    std::vector<double> outputs = {1, 1, 0, 0};
    
    nn.train(inputs, outputs);
    EXPECT_NEAR(nn.predict({1, 0}), 1.0, 0.1);
}
