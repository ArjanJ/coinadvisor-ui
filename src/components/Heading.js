import styled from 'styled-components';

const Common = styled.span`
  color: ${props => props.theme.headings.color};
  font-weight: 700;
`;

const h1 = Common.extend`
  font-size: 3rem;
  margin-bottom: 2rem;
`.withComponent('h1');

const h2 = Common.extend`
  font-size: 2.4rem;
  margin-bottom: 1.6rem;
`.withComponent('h2');

const h3 = Common.extend`
  font-size: 2rem;
  margin-bottom: 1.2rem;
`.withComponent('h3');

export { h1, h2, h3 };
