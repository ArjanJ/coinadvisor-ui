import React from 'react';

import { Heading, P } from '../../components/';

const Signup = () => (
  <section>
    <Heading.h1>Signup</Heading.h1>
    <P>
      Continue by signing in with one of your accounts below. If you already
      have a Coinbase account we recommend signing in with that.
    </P>
    <a href="">Sign in with Coinbase</a>
    <a href="/api/auth/google/">Sign in with Google</a>
  </section>
);

export default Signup;
