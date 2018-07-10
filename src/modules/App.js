import React from 'react';
import PropTypes from 'prop-types';
import styled, { ThemeProvider } from 'styled-components';

import { theme } from '../config/theme';
import { Wrapper } from '../components/';

const App = ({ children }) => (
  <ThemeProvider theme={theme}>
    <Main>
      <Wrapper>{children}</Wrapper>
    </Main>
  </ThemeProvider>
);

const Main = styled.main`
  background: ${props => props.theme.background};
  min-height: 100vh;
  overflow: scroll;
`;

App.propTypes = {
  children: PropTypes.element.isRequired,
};

export default App;
