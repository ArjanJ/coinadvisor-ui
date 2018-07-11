import styled from 'styled-components';

import { P } from '../../components/';

export const Subheading = P.extend`
  margin-bottom: 4rem;
`;

export const Button = styled.button`
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

export const CoinbaseButton = Button.extend`
  background-color: #0a5fc3;
  color: white;
`;

export const GoogleButton = Button.extend`
  background-color: #fff;
  color: #363636;
`;
