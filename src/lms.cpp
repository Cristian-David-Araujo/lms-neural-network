#include "lms.h"
#include <iostream>

using namespace std;

// Constructor for LMS class
LMS::LMS(double learningRate, int maxIterations)
{
    this->learningRate = learningRate;
    this->maxIterations = maxIterations;
}

void LMS::train(const vector<vector<double>> &inputs, const vector<double> &outputs)
{
    // Check if the number of input samples is equal to the number of output samples
    if (inputs.size() != outputs.size())
    {
        throw invalid_argument("Number of input samples and output samples do not match");
    }

    // Get the dimensionality of the input vector
    input_dim = inputs[0].size();
    num_samples = inputs.size();

    // Initialize weights to zero
    weights = vector<double>(input_dim, 0);

    // Train the model
    for (int i = 0; i < maxIterations; i++)
    {
        for (int j = 0; j < num_samples; j++)
        {
            // Predict the output
            double prediction = predict(inputs[j], input_dim);

            // Calculate the error
            double error = outputs[j] - prediction;

            // Update the weights
            updateWeights(inputs[j], error);
        }
    }

    cout << "Training complete!" << endl;

}

double LMS::predict(const vector<double> &input)
{
    // Calculate the dot product of input and weights
    double prediction = 0;
    for (int i = 0; i < input_dim; i++)
    {
        prediction += input[i] * weights[i];
    }

    return prediction;
}

void LMS::updateWeights(const vector<double> &input, double error)
{
    // Update the weights using LMS rule
    for (int i = 0; i < input_dim; i++)
    {
        weights[i] += learningRate * error * input[i];
    }

    cout << "Weights updated!" << endl;
}
