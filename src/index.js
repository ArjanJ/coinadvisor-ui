import React from 'react';
import { AppRegistry } from 'react-native';
import { app } from '../lib/js/src/re/app';

// Register the app
AppRegistry.registerComponent('App', () => app);

AppRegistry.runApplication('App', {
  initialProps: {},
  rootTag: document.getElementById('root'),
});
