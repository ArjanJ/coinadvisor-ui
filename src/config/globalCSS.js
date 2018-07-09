import { injectGlobal } from 'styled-components';

injectGlobal`
  *,
  *:before,
  *:after {
    box-sizing: inherit;
  }

  :root {
    -moz-osx-font-smoothing: grayscale;
    -ms-overflow-style: -ms-autohiding-scrollbar;
    -webkit-font-smoothing: antialiased;
    box-sizing: border-box;
    cursor: default;
    font-family:
      -apple-system,
      BlinkMacSystemFont,
      "Segoe UI",
      Roboto,
      Helvetica,
      Arial,
      sans-serif,
      "Apple Color Emoji",
      "Segoe UI Emoji",
      "Segoe UI Symbol";
    font-size: 0.625rem;
    text-rendering: optimizeLegibility;
    text-size-adjust: 100%;
  }

  body {
    font-size: 1.6rem;
    line-height: 1.5rem;
    margin: 0;
  }

  h1,
  h2,
  h3,
  h4,
  h5,
  h6,
  p {
    margin: 0;
  }
`;
