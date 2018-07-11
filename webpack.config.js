const path = require('path');
const HtmlWebpackPlugin = require('html-webpack-plugin');

const isProd = process.env.NODE_ENV === 'production';

const commonConfig = {
  entry: './src/index.js',
  output: {
    path: path.resolve(__dirname, 'build'),
    filename: 'app.[hash].js',
  },
  plugins: [
    new HtmlWebpackPlugin({
      filename: 'index.html',
      template: './src/index.html',
    }),
  ],
  module: {
    rules: [
      {
        test: /\.js$/,
        exclude: /node_modules/,
        loader: 'babel-loader',
        options: {
          presets: [
            [
              'env',
              {
                node: 'current',
              },
            ],
            'react',
          ],
          plugins: [
            'transform-regenerator',
            ['transform-runtime'],
            'transform-class-properties',
          ],
        },
      },
    ],
  },
};

const devConfig = {
  ...commonConfig,
  mode: 'development',
  devtool: 'inline-source-map',
  devServer: {
    contentBase: 'build/',
    historyApiFallback: true,
    proxy: {
      '/api': {
        target: 'http://localhost:6000',
      },
    },
  },
};

const prodConfig = {
  ...commonConfig,
  mode: 'production',
};

const config = isProd ? prodConfig : devConfig;

module.exports = config;
