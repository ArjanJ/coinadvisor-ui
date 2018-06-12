const path = require('path');
const HtmlWebpackPlugin = require('html-webpack-plugin');

const isProd = process.env.NODE_ENV === 'production';

const commonConfig = {
  entry: './src/Index.js',
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
};

const devConfig = {
  ...commonConfig,
  mode: 'development',
  devtool: 'inline-source-map',
  devServer: {
    contentBase: 'build/',
  },
};

const prodConfig = {
  ...commonConfig,
  mode: 'production',
};

const config = isProd ? prodConfig : devConfig;

module.exports = config;
