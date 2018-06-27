let component = ReasonReact.statelessComponent("StyledComponent");

let make = (~props, ~tag, children) => {
  ...component,
  render: (_self) => ReasonReact.createDomElement(tag, ~props=props, children)
};
