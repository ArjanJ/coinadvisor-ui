let component = ReasonReact.statelessComponent("Dashboard");

let make = (_children) => {
  ...component,
  didMount: (_self) => {
    let foo = Api.sendRequest(~body=None, ~requestMethod=Get, ~url="/api/user/arjan");
  },
  render: (_self) =>
    <div>
      <h1>(ReasonReact.string("Dashboard"))</h1>
    </div>
}
