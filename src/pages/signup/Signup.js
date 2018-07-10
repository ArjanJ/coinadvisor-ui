import React from 'react';
import styled from 'styled-components';

import { Heading, P, Section } from '../../components/';

const Signup = () => (
  <SignupSection>
    <Heading.h1>Sign in</Heading.h1>
    <Subheading>
      Continue by signing in with one of your accounts below. If you already
      have a Coinbase account we recommend signing in with that.
    </Subheading>
    <CoinbaseButton>Sign in with Coinbase</CoinbaseButton>
    <GoogleButton>Sign in with Google</GoogleButton>
  </SignupSection>
);

const SignupSection = Section.extend`
  padding-top: 7.2rem;
`;

const Subheading = P.extend`
  margin-bottom: 4rem;
`;

const Button = styled.button`
  border: none;
  border-radius: 2px;
  cursor: pointer;
  display: block;
  font-weight: 500;
  height: 4.8rem;
  margin-bottom: 2.4rem;
  width: 100%;

  &:last-child {
    margin-bottom: 0;
  }
`;

const CoinbaseButton = Button.extend`
  background-color: #0a5fc3;
  color: white;
`;

const GoogleButton = Button.extend`
  background-color: #fff;
  color: #363636;
`;

export default Signup;

/**
 * SIGNUP FLOW
 * 1. Connect coinbase account [CONNECT_ACCOUNT]
 * 2. Allocate your coins [ALLOCATE_COINS]
 * 3. Rebalance frequency [REBALANCE_FREQ]
 * 4. Signup completed [COMPLETED]
 * 
 * Should be persisted through API, like this?
  {
    users: {
      [uid]: {
        signupStatus: CONNECT_ACCOUNT | ALLOCATE_COINS | REBALANCE_FREQ | COMPLETED
      }
    }
  }
 */
