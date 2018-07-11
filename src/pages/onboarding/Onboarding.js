import React, { PureComponent } from 'react';
import PropTypes from 'prop-types';

import { Heading, PaddedTopSection } from '../../components/';

const status = {
  ALLOCATE: 'ALLOCATE',
  COMPLETED: 'COMPLETED',
  CONNECT: 'CONNECT',
  REBALANCE: 'REBALANCE',
};

class Onboarding extends PureComponent {
  constructor(props) {
    super();
    const { onboardingStep = '' } = props.match.params;
    const currentStatus = status[onboardingStep.toUpperCase()];

    this.state = {
      status: currentStatus,
    };
  }

  renderConnect() {
    return <Heading.h1>Connect your Coinbase account</Heading.h1>;
  }

  renderAllocate() {
    return <Heading.h1>Allocate your coins</Heading.h1>;
  }

  renderRebalance() {
    return (
      <Heading.h1>
        How often do you want to rebalance your portfolio?
      </Heading.h1>
    );
  }

  renderStep() {
    switch (this.state.status) {
      case status.ALLOCATE:
        return this.renderAllocate();
      case status.COMPLETED:
        return null;
      case status.CONNECT:
        return this.renderConnect();
      case status.REBALANCE:
        return this.renderRebalance();
      default:
        return null;
    }
  }

  render() {
    return <PaddedTopSection>{this.renderStep()}</PaddedTopSection>;
  }
}

Onboarding.propTypes = {
  match: PropTypes.shape({
    params: PropTypes.shape({
      onboardingStep: PropTypes.string.isRequired,
    }).isRequired,
  }).isRequired,
};

export default Onboarding;
