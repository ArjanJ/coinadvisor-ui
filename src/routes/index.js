import React from 'react';
import { BrowserRouter as Router, Route, Switch } from 'react-router-dom';

import Home from '../pages/home/Home';
import Onboarding from '../pages/onboarding/Onboarding';
import Signup from '../pages/signup/Signup';

const Routes = () => (
  <Router>
    <Switch>
      <Route component={Onboarding} path="/onboarding/:onboardingStep/" />
      <Route component={Signup} path="/signup" />
      <Route component={Home} path="/" />
    </Switch>
  </Router>
);

export default Routes;
