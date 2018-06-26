let component = ReasonReact.statelessComponent("Dashboard");

let rs = ReasonReact.string;

let make = (_children) => {
  ...component,
  render: (_self) => <Heading>(rs("Dashboard"))</Heading>
}
