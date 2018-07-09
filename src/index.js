import React from 'react';
import ReactDOM from 'react-dom';

import Routes from './routes/';
import App from './modules/App';

import './config/globalCSS';

ReactDOM.render(
  <App>
    <Routes />
  </App>,
  document.getElementById('root'),
);
