import styled from 'styled-components';

const Common = styled.span`
  color: ${props => props.theme.headings.color};
  font-weight: 700;
  margin-bottom: 2.4rem;
`;

const h1 = Common.extend`
  font-size: 3rem;
`.withComponent('h1');

const h2 = Common.extend`
  font-size: 2.4rem;
`.withComponent('h2');

const h3 = Common.extend`
  font-size: 2rem;
`.withComponent('h3');

export { h1, h2, h3 };
