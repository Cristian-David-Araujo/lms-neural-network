#ifndef LMS_H
#define LMS_H

#include <vector>

using namespace std;

/*
    @brief Class for Least Mean Squares (LMS) algorithm
    @typedef LMS
*/
class LMS {
public:
    /**
    * @brief Constructor for LMS class
    * @param learningRate The learning rate for the algorithm
    * @param maxIterations The maximum number of iterations for training
    */
    LMS(double learningRate, int maxIterations);

    /**
    * @brief Method to train the neural network using any-dimensional inputs.
    *        The inputs are passed as a generic pointer.
    * @param inputs The input data for training (2D vector). Where each row represents an input sample.
    * @param outputs The expected output values corresponding to each input (1D vector).
    */
    void train(const vector<vector<double>> &inputs, const vector<double> &outputs);
    /**
    * @brief Method to predict the output for new input data
    * @param input The input data for prediction
    * @return The predicted output
    */
    double predict(const vector<double> &input);

private:

    /**
    * @brief Method to update weights using LMS rule
    * @param input The input data for training
    * @param error The error in prediction
    */
    void updateWeights(const vector<double> &input, double error);

    double learningRate;  // The learning rate for the algorithm
    int maxIterations;    // The maximum number of iterations for training
    vector<double> weights;  // The weights for the neural network
    int input_dim;  // The dimensionality of the input vector
    int num_samples;  // The number of input-output samples provided
};

#endif // LMS_H
