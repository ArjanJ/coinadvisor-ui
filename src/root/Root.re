let component = ReasonReact.statelessComponent("Root");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
      (ReasonReact.string("Hello world!!!"))
    </div>,
};
