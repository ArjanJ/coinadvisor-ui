import React from 'react';
import PropTypes from 'prop-types';
import styled, { ThemeProvider } from 'styled-components';

import { theme } from '../config/theme';

const App = ({ children }) => (
  <ThemeProvider theme={theme}>
    <Main>{children}</Main>
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
