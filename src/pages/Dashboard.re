let component = ReasonReact.statelessComponent("Dashboard");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
      <h1>(ReasonReact.string("Dashboard"))</h1>
    </div>
}
