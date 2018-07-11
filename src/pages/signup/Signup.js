import React from 'react';

import { Heading, PaddedTopSection } from '../../components/';
import { CoinbaseButton, GoogleButton, Subheading } from './components';

const Signup = () => (
  <PaddedTopSection>
    <Heading.h1>Sign in</Heading.h1>
    <Subheading>
      Continue by signing in with one of your accounts below. If you already
      have a Coinbase account we recommend signing in with that.
    </Subheading>
    <CoinbaseButton>Sign in with Coinbase</CoinbaseButton>
    <GoogleButton>Sign in with Google</GoogleButton>
  </PaddedTopSection>
);

export default Signup;
